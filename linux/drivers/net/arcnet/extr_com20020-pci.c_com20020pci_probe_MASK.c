
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dev; int irq; } ;
struct net_device {int dev_port; int base_addr; int dev_id; int dev; int name; int irq; int ** sysfs_groups; int * dev_addr; int * netdev_ops; } ;
struct com20020_priv {int misc; int list_dev; struct com20020_pci_card_info* ci; } ;
struct com20020_pci_channel_map {int offset; scalar_t__ size; int bar; } ;
struct com20020_pci_card_info {int devcount; int rotary; int name; int flags; struct com20020_pci_channel_map* chan_map_tbl; struct com20020_pci_channel_map misc_map; } ;
struct TYPE_4__ {int * dev; void* name; void* default_trigger; int brightness_set; } ;
struct com20020_dev {int index; int list; TYPE_2__ recon_led; TYPE_2__ tx_led; struct net_device* dev; struct com20020_priv* pci_priv; } ;
struct TYPE_3__ {int owner; } ;
struct arcnet_local {char* card_name; int backplane; int clockp; int clockm; TYPE_1__ hw; int timeout; int card_flags; } ;


 int COM20020_REG_R_DIAGSTAT ;
 int COM20020_REG_R_STATUS ;
 int COM20020_REG_W_COMMAND ;
 int D_NORMAL ;
 int EBUSY ;
 int EIO ;
 int ENOMEM ;
 int GFP_KERNEL ;
 int INIT_LIST_HEAD (int *) ;
 int IRQF_SHARED ;
 int SET_NETDEV_DEV (struct net_device*,int *) ;
 int THIS_MODULE ;
 struct net_device* alloc_arcdev (int ) ;
 int arc_printk (int ,struct net_device*,char*,int ) ;
 int arcnet_inb (int,int ) ;
 int arcnet_outb (int,int,int ) ;
 int backplane ;
 int clockm ;
 int clockp ;
 scalar_t__ com20020_check (struct net_device*) ;
 int com20020_found (struct net_device*,int ) ;
 int com20020_netdev_ops ;
 int com20020_state_group ;
 int com20020pci_remove (struct pci_dev*) ;
 int dev_set_drvdata (int *,struct com20020_dev*) ;
 int device ;
 int devm_arcnet_led_init (struct net_device*,int,int) ;
 void* devm_kasprintf (int *,int ,char*,int,int) ;
 void* devm_kzalloc (int *,int,int ) ;
 int devm_led_classdev_register (int *,TYPE_2__*) ;
 struct resource* devm_request_region (int *,int,scalar_t__,char*) ;
 int inb (int) ;
 int led_recon_set ;
 int led_tx_set ;
 int list_add (int *,int *) ;
 struct arcnet_local* netdev_priv (struct net_device*) ;
 int node ;
 scalar_t__ pci_enable_device (struct pci_dev*) ;
 int pci_resource_start (struct pci_dev*,int ) ;
 int pci_set_drvdata (struct pci_dev*,struct com20020_priv*) ;
 int pr_err (char*,int,...) ;
 int snprintf (int ,int,char*,int,int) ;
 int strncmp (int ,char*,int) ;
 int timeout ;

__attribute__((used)) static int com20020pci_probe(struct pci_dev *pdev,
        const struct pci_device_id *id)
{
 struct com20020_pci_card_info *ci;
 struct com20020_pci_channel_map *mm;
 struct net_device *dev;
 struct arcnet_local *lp;
 struct com20020_priv *priv;
 int i, ioaddr, ret;
 struct resource *r;

 if (pci_enable_device(pdev))
  return -EIO;

 priv = devm_kzalloc(&pdev->dev, sizeof(struct com20020_priv),
       GFP_KERNEL);
 if (!priv)
  return -ENOMEM;

 ci = (struct com20020_pci_card_info *)id->driver_data;
 priv->ci = ci;
 mm = &ci->misc_map;

 INIT_LIST_HEAD(&priv->list_dev);

 if (mm->size) {
  ioaddr = pci_resource_start(pdev, mm->bar) + mm->offset;
  r = devm_request_region(&pdev->dev, ioaddr, mm->size,
     "com20020-pci");
  if (!r) {
   pr_err("IO region %xh-%xh already allocated.\n",
          ioaddr, ioaddr + mm->size - 1);
   return -EBUSY;
  }
  priv->misc = ioaddr;
 }

 for (i = 0; i < ci->devcount; i++) {
  struct com20020_pci_channel_map *cm = &ci->chan_map_tbl[i];
  struct com20020_dev *card;
  int dev_id_mask = 0xf;

  dev = alloc_arcdev(device);
  if (!dev) {
   ret = -ENOMEM;
   goto out_port;
  }
  dev->dev_port = i;

  dev->netdev_ops = &com20020_netdev_ops;

  lp = netdev_priv(dev);

  arc_printk(D_NORMAL, dev, "%s Controls\n", ci->name);
  ioaddr = pci_resource_start(pdev, cm->bar) + cm->offset;

  r = devm_request_region(&pdev->dev, ioaddr, cm->size,
     "com20020-pci");
  if (!r) {
   pr_err("IO region %xh-%xh already allocated\n",
          ioaddr, ioaddr + cm->size - 1);
   ret = -EBUSY;
   goto out_port;
  }





  arcnet_outb(0x00, ioaddr, COM20020_REG_W_COMMAND);
  arcnet_inb(ioaddr, COM20020_REG_R_DIAGSTAT);

  SET_NETDEV_DEV(dev, &pdev->dev);
  dev->base_addr = ioaddr;
  dev->dev_addr[0] = node;
  dev->sysfs_groups[0] = &com20020_state_group;
  dev->irq = pdev->irq;
  lp->card_name = "PCI COM20020";
  lp->card_flags = ci->flags;
  lp->backplane = backplane;
  lp->clockp = clockp & 7;
  lp->clockm = clockm & 3;
  lp->timeout = timeout;
  lp->hw.owner = THIS_MODULE;

  lp->backplane = (inb(priv->misc) >> (2 + i)) & 0x1;

  if (!strncmp(ci->name, "EAE PLX-PCI FB2", 15))
   lp->backplane = 1;


  if (!strncmp(ci->name, "EAE PLX-PCI MA1", 15))
   dev_id_mask = 0x3;
  dev->dev_id = (inb(priv->misc + ci->rotary) >> 4) & dev_id_mask;

  snprintf(dev->name, sizeof(dev->name), "arc%d-%d", dev->dev_id, i);

  if (arcnet_inb(ioaddr, COM20020_REG_R_STATUS) == 0xFF) {
   pr_err("IO address %Xh is empty!\n", ioaddr);
   ret = -EIO;
   goto out_port;
  }
  if (com20020_check(dev)) {
   ret = -EIO;
   goto out_port;
  }

  card = devm_kzalloc(&pdev->dev, sizeof(struct com20020_dev),
        GFP_KERNEL);
  if (!card) {
   ret = -ENOMEM;
   goto out_port;
  }

  card->index = i;
  card->pci_priv = priv;
  card->tx_led.brightness_set = led_tx_set;
  card->tx_led.default_trigger = devm_kasprintf(&pdev->dev,
      GFP_KERNEL, "arc%d-%d-tx",
      dev->dev_id, i);
  card->tx_led.name = devm_kasprintf(&pdev->dev, GFP_KERNEL,
      "pci:green:tx:%d-%d",
      dev->dev_id, i);

  card->tx_led.dev = &dev->dev;
  card->recon_led.brightness_set = led_recon_set;
  card->recon_led.default_trigger = devm_kasprintf(&pdev->dev,
      GFP_KERNEL, "arc%d-%d-recon",
      dev->dev_id, i);
  card->recon_led.name = devm_kasprintf(&pdev->dev, GFP_KERNEL,
      "pci:red:recon:%d-%d",
      dev->dev_id, i);
  card->recon_led.dev = &dev->dev;
  card->dev = dev;

  ret = devm_led_classdev_register(&pdev->dev, &card->tx_led);
  if (ret)
   goto out_port;

  ret = devm_led_classdev_register(&pdev->dev, &card->recon_led);
  if (ret)
   goto out_port;

  dev_set_drvdata(&dev->dev, card);

  ret = com20020_found(dev, IRQF_SHARED);
  if (ret)
   goto out_port;

  devm_arcnet_led_init(dev, dev->dev_id, i);

  list_add(&card->list, &priv->list_dev);
 }

 pci_set_drvdata(pdev, priv);

 return 0;

out_port:
 com20020pci_remove(pdev);
 return ret;
}
