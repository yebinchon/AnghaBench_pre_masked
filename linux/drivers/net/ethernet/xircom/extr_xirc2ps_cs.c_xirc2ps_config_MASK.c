
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int u_char ;
typedef scalar_t__ u8 ;
struct pcmcia_device {scalar_t__ has_manf_id; int manf_id; int io_lines; int dev; TYPE_1__** resource; scalar_t__ irq; int config_flags; struct net_device* priv; } ;
struct net_device {int if_port; unsigned int base_addr; scalar_t__* dev_addr; scalar_t__ irq; } ;
struct local_info {char* manf_str; int probe_port; scalar_t__ dingo; scalar_t__ mohawk; int * dingo_ccr; scalar_t__ modem; } ;
struct TYPE_3__ {int end; int flags; unsigned int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;






 int FUNC_0 (struct net_device*,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct net_device*,int) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * FUNC_3 (int,int) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (struct net_device*,char*,char*,int ,int,scalar_t__*) ;
 struct local_info* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct pcmcia_device*) ;
 int VAR_16 ;
 int FUNC_8 (struct pcmcia_device*,struct net_device*) ;
 size_t FUNC_9 (struct pcmcia_device*,int,scalar_t__**) ;
 int FUNC_10 (struct pcmcia_device*,int ,int*) ;
 int FUNC_11 (struct pcmcia_device*,int ,int ,struct net_device*) ;
 int FUNC_12 (struct pcmcia_device*,TYPE_1__*,int ) ;
 int FUNC_13 (struct pcmcia_device*) ;
 int FUNC_14 (struct pcmcia_device*,int ) ;
 int FUNC_15 (struct pcmcia_device*,TYPE_1__*,int ) ;
 int FUNC_16 (struct pcmcia_device*,int,int) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*,...) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct net_device*) ;
 int FUNC_22 (struct pcmcia_device*) ;
 int FUNC_23 (int,int *) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_24 (struct pcmcia_device*) ;

__attribute__((used)) static int
FUNC_25(struct pcmcia_device * VAR_20)
{
    struct net_device *VAR_21 = VAR_20->priv;
    struct local_info *VAR_22 = FUNC_6(VAR_21);
    unsigned int VAR_23;
    int VAR_24;
    u8 *VAR_25;
    size_t VAR_26;

    VAR_22->dingo_ccr = ((void*)0);

    FUNC_1(&VAR_20->dev, "config\n");


    if (VAR_20->has_manf_id == 0) {
 FUNC_19("manfid not found in CIS\n");
 goto failure;
    }

    switch (VAR_20->manf_id) {
      case 128:
 VAR_22->manf_str = "Xircom";
 break;
      case 133:
 VAR_22->manf_str = "Accton";
 break;
      case 132:
      case 131:
 VAR_22->manf_str = "Compaq";
 break;
      case 130:
 VAR_22->manf_str = "Intel";
 break;
      case 129:
 VAR_22->manf_str = "Toshiba";
 break;
      default:
 FUNC_19("Unknown Card Manufacturer ID: 0x%04x\n",
    (unsigned)VAR_20->manf_id);
 goto failure;
    }
    FUNC_1(&VAR_20->dev, "found %s card\n", VAR_22->manf_str);

    if (!FUNC_22(VAR_20)) {
 FUNC_19("this card is not supported\n");
 goto failure;
    }


    VAR_24 = FUNC_8(VAR_20, VAR_21);


    if (VAR_24) {
     VAR_26 = FUNC_9(VAR_20, 0x89, &VAR_25);

     if (VAR_25 && VAR_26 == 8) {
      if (*VAR_25 == VAR_4) {
       int VAR_27;
       for (VAR_27 = 2; VAR_27 < 6; VAR_27++)
        VAR_21->dev_addr[VAR_27] = VAR_25[VAR_27+2];
      } else
       VAR_24 = -1;
     }
     FUNC_4(VAR_25);
    }

    if (VAR_24)
 VAR_24 = FUNC_11(VAR_20, VAR_3, VAR_16, VAR_21);

    if (VAR_24) {
 FUNC_19("node-id not found in CIS\n");
 goto failure;
    }

    if (VAR_22->modem) {
 int VAR_28;
 VAR_20->config_flags |= VAR_5;

 if (VAR_22->dingo) {


     if (!FUNC_10(VAR_20, VAR_18, ((void*)0)))
      goto port_found;
 } else {





     for (VAR_28=0; VAR_28 < 2; VAR_28++)
      if (!FUNC_10(VAR_20, VAR_17,
          &VAR_28))
       goto port_found;



 }
 FUNC_19("no ports available\n");
    } else {
 VAR_20->io_lines = 10;
 VAR_20->resource[0]->end = 16;
 VAR_20->resource[0]->flags |= VAR_9;
 for (VAR_23 = 0x300; VAR_23 < 0x400; VAR_23 += 0x10) {
     VAR_20->resource[0]->start = VAR_23;
     if (!(VAR_24 = FUNC_13(VAR_20)))
  goto port_found;
 }
 VAR_20->resource[0]->start = 0;
 if ((VAR_24 = FUNC_13(VAR_20)))
     goto config_error;
    }
  port_found:
    if (VAR_24)
  goto config_error;





    if ((VAR_24=FUNC_14(VAR_20, VAR_19)))
 goto config_error;

    VAR_20->config_flags |= VAR_6;
    if (VAR_13)
     VAR_20->config_flags |= VAR_7;

    if ((VAR_24 = FUNC_7(VAR_20)))
 goto config_error;

    if (VAR_22->dingo) {





 VAR_24 = FUNC_16(VAR_20, VAR_1, (u8)
    VAR_20->resource[1]->start & 0xff);
 if (VAR_24)
     goto config_error;

 VAR_24 = FUNC_16(VAR_20, VAR_2,
    (VAR_20->resource[1]->start >> 8) & 0xff);
 if (VAR_24)
     goto config_error;





 VAR_20->resource[2]->flags = VAR_10 | VAR_12 |
     VAR_11;
 VAR_20->resource[2]->start = VAR_20->resource[2]->end = 0;
 if ((VAR_24 = FUNC_15(VAR_20, VAR_20->resource[2], 0)))
     goto config_error;

 VAR_22->dingo_ccr = FUNC_3(VAR_20->resource[2]->start, 0x1000) + 0x0800;
 if ((VAR_24 = FUNC_12(VAR_20, VAR_20->resource[2], 0)))
     goto config_error;




 FUNC_23(0x47, VAR_22->dingo_ccr + VAR_0);
 VAR_23 = VAR_20->resource[0]->start;
 FUNC_23(VAR_23 & 0xff , VAR_22->dingo_ccr + VAR_1);
 FUNC_23((VAR_23 >> 8)&0xff , VAR_22->dingo_ccr + VAR_2);
 FUNC_23(0x01, VAR_22->dingo_ccr + 0x20);
 FUNC_23(0x0c, VAR_22->dingo_ccr + 0x22);
 FUNC_23(0x00, VAR_22->dingo_ccr + 0x24);
 FUNC_23(0x00, VAR_22->dingo_ccr + 0x26);
 FUNC_23(0x00, VAR_22->dingo_ccr + 0x28);
    }


    VAR_22->probe_port=0;
    if (!VAR_15) {
 VAR_22->probe_port = VAR_21->if_port = 1;
    } else if ((VAR_15 >= 1 && VAR_15 <= 2) ||
        (VAR_22->mohawk && VAR_15==4))
 VAR_21->if_port = VAR_15;
    else
 FUNC_19("invalid if_port requested\n");


    VAR_21->irq = VAR_20->irq;
    VAR_21->base_addr = VAR_20->resource[0]->start;

    if (VAR_22->dingo)
 FUNC_2(VAR_21, 1);

    FUNC_0(VAR_21, &VAR_20->dev);

    if ((VAR_24=FUNC_21(VAR_21))) {
 FUNC_19("register_netdev() failed\n");
 goto config_error;
    }


    FUNC_5(VAR_21, "%s: port %#3lx, irq %d, hwaddr %pM\n",
  VAR_22->manf_str, (u_long)VAR_21->base_addr, (int)VAR_21->irq,
  VAR_21->dev_addr);

    return 0;

  config_error:
    FUNC_24(VAR_20);
    return -VAR_8;

  failure:
    return -VAR_8;
}
