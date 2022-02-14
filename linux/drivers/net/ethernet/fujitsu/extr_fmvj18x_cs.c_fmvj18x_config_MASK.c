
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u_char ;
typedef void* u8 ;
struct pcmcia_device {int io_lines; int manf_id; int config_base; int config_index; int dev; TYPE_1__** resource; int irq; int card_id; struct net_device* priv; } ;
struct net_device {unsigned int base_addr; void** dev_addr; int irq; } ;
struct local_info {int cardtype; } ;
typedef enum cardtype { ____Placeholder_cardtype } cardtype ;
struct TYPE_2__ {int end; unsigned int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct net_device*,int *) ;


 int VAR_14 ;

 int FUNC_1 (int *,char*) ;
 int VAR_15 ;
 int FUNC_2 (struct pcmcia_device*,void**) ;
 int VAR_16 ;
 int FUNC_3 (struct pcmcia_device*) ;
 int FUNC_4 (struct pcmcia_device*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (void**) ;
 int FUNC_7 (struct pcmcia_device*) ;
 int FUNC_8 (struct net_device*,char*,char*,char*,unsigned int,int ,void**) ;
 struct local_info* FUNC_9 (struct net_device*) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (struct pcmcia_device*) ;
 int FUNC_12 (struct pcmcia_device*,struct net_device*) ;
 size_t FUNC_13 (struct pcmcia_device*,int ,void***) ;
 int FUNC_14 (struct pcmcia_device*,int ,int *) ;
 int FUNC_15 (struct pcmcia_device*) ;
 int FUNC_16 (struct pcmcia_device*,int ) ;
 int FUNC_17 (char*) ;
 scalar_t__ FUNC_18 (struct net_device*) ;
 scalar_t__ FUNC_19 (TYPE_1__*) ;
 scalar_t__ VAR_17 ;
 int FUNC_20 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_21(struct pcmcia_device *VAR_18)
{
    struct net_device *VAR_19 = VAR_18->priv;
    struct local_info *VAR_20 = FUNC_9(VAR_19);
    int VAR_21, VAR_22;
    unsigned int VAR_23;
    enum cardtype VAR_24;
    char *VAR_25 = "unknown";
    u8 *VAR_26;
    size_t VAR_27;
    u_char VAR_28[32];

    FUNC_1(&VAR_18->dev, "fmvj18x_config\n");

    VAR_18->io_lines = 5;

    VAR_27 = FUNC_13(VAR_18, VAR_2, &VAR_26);
    FUNC_6(VAR_26);

    if (VAR_27) {

 VAR_22 = FUNC_14(VAR_18, VAR_16, ((void*)0));
 if (VAR_22 != 0)
  goto failed;

 switch (VAR_18->manf_id) {
 case 135:
     VAR_24 = 130;
     if (VAR_18->card_id == VAR_11 ||
  VAR_18->card_id == VAR_13 ||
  VAR_18->card_id == VAR_12) {

  VAR_18->config_base = 0x800;
  VAR_18->config_index = 0x47;
  VAR_18->resource[1]->end = 8;
     }
     break;
 case 136:
     VAR_24 = 131;
     VAR_18->config_base = 0x800;
     VAR_18->config_index = 0x47;
     VAR_18->resource[1]->end = 8;
     break;
 case 137:
     VAR_24 = 141;
     VAR_18->config_base = 0x800;
     VAR_18->config_index = 0x47;
     VAR_18->resource[1]->end = 8;
     break;
 case 139:
     VAR_24 = 142;
     break;
 case 138:
     if (VAR_18->config_base == 0x0fe0)
  VAR_24 = 133;
     else if (VAR_18->card_id == VAR_9)


  VAR_24 = 132;
     else if (VAR_18->card_id == VAR_10)
  VAR_24 = 132;
     else
  VAR_24 = 140;
     break;
 default:
     VAR_24 = 132;
 }
    } else {

 switch (VAR_18->manf_id) {
 case 138:
     if (VAR_18->card_id == VAR_10) {
  VAR_24 = 128;
  VAR_18->config_index = 0x20;
     } else {
  VAR_24 = 133;
  VAR_18->config_index = 1;
     }
     break;
 case 134:
     VAR_24 = 129;
     break;
 default:
     VAR_24 = 133;
     VAR_18->config_index = 1;
 }
    }

    if (VAR_18->resource[1]->end != 0) {
 VAR_22 = FUNC_7(VAR_18);
 if (VAR_22 != 0) goto failed;
    } else if (VAR_24 == 129) {
 VAR_22 = FUNC_20(VAR_18);
 if (VAR_22 != 0) goto failed;
    } else {
     VAR_22 = FUNC_15(VAR_18);
     if (VAR_22)
      goto failed;
    }
    VAR_22 = FUNC_16(VAR_18, VAR_15);
    if (VAR_22)
     goto failed;
    VAR_22 = FUNC_11(VAR_18);
    if (VAR_22)
     goto failed;

    VAR_19->irq = VAR_18->irq;
    VAR_19->base_addr = VAR_18->resource[0]->start;

    if (FUNC_19(VAR_18->resource[1]) != 0) {
 VAR_22 = FUNC_4(VAR_18);
 if (VAR_22 != 0) goto failed;
    }

    VAR_23 = VAR_19->base_addr;


    if (VAR_17 == 0)
 FUNC_10(VAR_3, VAR_23 + VAR_5);
    else
 FUNC_10(VAR_4, VAR_23 + VAR_5);


    if (VAR_24 == 133)
 FUNC_10(VAR_0, VAR_23 + VAR_6);
    else
 FUNC_10(VAR_1, VAR_23 + VAR_6);


    switch (VAR_24) {
    case 132:
    case 130:
    case 140:
    case 142:
    case 131:
    case 141:
 if (VAR_24 == 132) {
     VAR_25 = "FMV-J182";

     VAR_27 = FUNC_13(VAR_18, VAR_2, &VAR_26);
     if (VAR_27 < 11) {
      FUNC_6(VAR_26);
      goto failed;
     }

     for (VAR_21 = 0; VAR_21 < 6; VAR_21++)
      VAR_19->dev_addr[VAR_21] = VAR_26[VAR_21 + 5];
     FUNC_6(VAR_26);
 } else {
     if (FUNC_12(VAR_18, VAR_19))
  goto failed;
     if( VAR_24 == 130 ) {
  VAR_25 = "TDK LAK-CD021";
     } else if( VAR_24 == 140 ) {
  VAR_25 = "LA501";
     } else if( VAR_24 == 131 ) {
  VAR_25 = "PK-UG-J001";
     } else if( VAR_24 == 141 ) {
  VAR_25 = "Panasonic";
     } else {
  VAR_25 = "C-NET(PC)C";
     }
 }
 break;
    case 129:

 for (VAR_21 = 0; VAR_21 < 6; VAR_21++)
     VAR_19->dev_addr[VAR_21] = FUNC_5(VAR_23 + VAR_14 + VAR_21);
 VAR_25 = "Access/CARD";
 break;
    case 128:

 if (FUNC_2(VAR_18, VAR_28) == -1) {
     FUNC_17("unable to read hardware net address\n");
     goto failed;
 }
 for (VAR_21 = 0 ; VAR_21 < 6; VAR_21++) {
     VAR_19->dev_addr[VAR_21] = VAR_28[VAR_21];
 }
 VAR_25 = "FMV-J182";
 break;
    case 133:
    default:

 for (VAR_21 = 0; VAR_21 < 6; VAR_21++)
     VAR_19->dev_addr[VAR_21] = FUNC_5(VAR_23 + VAR_8 + VAR_21);
 VAR_25 = "FMV-J181";
 break;
    }

    VAR_20->cardtype = VAR_24;
    FUNC_0(VAR_19, &VAR_18->dev);

    if (FUNC_18(VAR_19) != 0) {
 FUNC_17("register_netdev() failed\n");
 goto failed;
    }


    FUNC_8(VAR_19, "%s, sram %s, port %#3lx, irq %d, hw_addr %pM\n",
  VAR_25, VAR_17 == 0 ? "4K TX*2" : "8K TX*2",
  VAR_19->base_addr, VAR_19->irq, VAR_19->dev_addr);

    return 0;

failed:
    FUNC_3(VAR_18);
    return -VAR_7;
}
