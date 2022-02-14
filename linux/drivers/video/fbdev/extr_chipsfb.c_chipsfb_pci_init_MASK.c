
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; TYPE_1__* resource; } ;
struct TYPE_8__ {int smem_len; } ;
struct fb_info {int * screen_base; TYPE_3__ fix; int node; } ;
struct TYPE_7__ {int power; } ;
struct TYPE_9__ {TYPE_2__ props; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int) ;
 struct fb_info* FUNC_3 (int ,int *) ;
 int FUNC_4 (struct fb_info*) ;
 int FUNC_5 (struct fb_info*,unsigned long) ;
 int * FUNC_6 (unsigned long,int) ;
 int * FUNC_7 (unsigned long,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*,int ,unsigned short*) ;
 int FUNC_13 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_14 (struct pci_dev*,int ,char*) ;
 unsigned long FUNC_15 (struct pci_dev*,int ) ;
 int FUNC_16 (struct pci_dev*,struct fb_info*) ;
 int FUNC_17 (struct pci_dev*,int ,unsigned short) ;
 TYPE_4__* VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_18 (struct fb_info*) ;

__attribute__((used)) static int FUNC_19(struct pci_dev *VAR_8, const struct pci_device_id *VAR_9)
{
 struct fb_info *VAR_10;
 unsigned long VAR_11;
 unsigned short VAR_12;
 int VAR_13 = -VAR_1;

 if (FUNC_11(VAR_8) < 0) {
  FUNC_1(&VAR_8->dev, "Cannot enable PCI device\n");
  goto err_out;
 }

 if ((VAR_8->resource[0].flags & VAR_4) == 0)
  goto err_disable;
 VAR_11 = FUNC_15(VAR_8, 0);
 if (VAR_11 == 0)
  goto err_disable;

 VAR_10 = FUNC_3(0, &VAR_8->dev);
 if (VAR_10 == ((void*)0)) {
  VAR_13 = -VAR_2;
  goto err_disable;
 }

 if (FUNC_14(VAR_8, 0, "chipsfb") != 0) {
  FUNC_1(&VAR_8->dev, "Cannot request framebuffer\n");
  VAR_13 = -VAR_0;
  goto err_release_fb;
 }
 FUNC_12(VAR_8, VAR_5, &VAR_12);
 VAR_12 |= 3;
 FUNC_17(VAR_8, VAR_5, VAR_12);
 VAR_10->screen_base = FUNC_6(VAR_11, 0x200000);

 if (VAR_10->screen_base == ((void*)0)) {
  FUNC_1(&VAR_8->dev, "Cannot map framebuffer\n");
  VAR_13 = -VAR_2;
  goto err_release_pci;
 }

 FUNC_16(VAR_8, VAR_10);

 FUNC_5(VAR_10, VAR_11);

 if (FUNC_18(VAR_10) < 0) {
  FUNC_1(&VAR_8->dev,"C&T 65550 framebuffer failed to register\n");
  goto err_unmap;
 }

 FUNC_2(&VAR_8->dev,"fb%d: Chips 65550 frame buffer"
   " (%dK RAM detected)\n",
   VAR_10->node, VAR_10->fix.smem_len / 1024);

 return 0;

 err_unmap:
 FUNC_8(VAR_10->screen_base);
 err_release_pci:
 FUNC_13(VAR_8, 0);
 err_release_fb:
 FUNC_4(VAR_10);
 err_disable:
 err_out:
 return VAR_13;
}
