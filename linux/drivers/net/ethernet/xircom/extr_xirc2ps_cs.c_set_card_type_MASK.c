
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct pcmcia_device {int dev; struct net_device* priv; } ;
struct net_device {int dummy; } ;
struct local_info {int mohawk; int dingo; int modem; scalar_t__ card_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int *,char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct pcmcia_device*) ;
 struct local_info* FUNC_3 (struct net_device*) ;
 size_t FUNC_4 (struct pcmcia_device*,int ,unsigned int**) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int
FUNC_6(struct pcmcia_device *VAR_11)
{
    struct net_device *VAR_12 = VAR_11->priv;
    struct local_info *VAR_13 = FUNC_3(VAR_12);
    u8 *VAR_14;
    unsigned int VAR_15, VAR_16, VAR_17;
    size_t VAR_18;

    VAR_18 = FUNC_4(VAR_11, VAR_0, &VAR_14);
    if (VAR_18 < 5) {
     FUNC_1(&VAR_11->dev, "invalid CIS -- sorry\n");
     return 0;
    }

    VAR_15 = VAR_14[2];
    VAR_16 = VAR_14[3];
    VAR_17 = VAR_14[4];

    FUNC_0(&VAR_11->dev, "cisrev=%02x mediaid=%02x prodid=%02x\n",
   VAR_15, VAR_16, VAR_17);

    VAR_13->mohawk = 0;
    VAR_13->dingo = 0;
    VAR_13->modem = 0;
    VAR_13->card_type = VAR_10;
    if (!(VAR_17 & 0x40)) {
 FUNC_5("Oops: Not a creditcard\n");
 return 0;
    }
    if (!(VAR_16 & 0x01)) {
 FUNC_5("Not an Ethernet card\n");
 return 0;
    }
    if (VAR_16 & 0x10) {
 VAR_13->modem = 1;
 switch(VAR_17 & 15) {
   case 1: VAR_13->card_type = VAR_4 ; break;
   case 2: VAR_13->card_type = VAR_5 ; break;
   case 3: VAR_13->card_type = VAR_6 ; break;
   case 4: VAR_13->card_type = VAR_7 ; break;
   case 5: VAR_13->card_type = VAR_9;
    VAR_13->mohawk = 1;
    break;
   case 6:
   case 7:
    VAR_13->card_type = VAR_8 ;
    VAR_13->mohawk = 1;
    VAR_13->dingo = 1;
    break;
 }
    } else {
 switch(VAR_17 & 15) {
   case 1: VAR_13->card_type = FUNC_2(VAR_11)? VAR_2 : VAR_1 ;
    break;
   case 2: VAR_13->card_type = VAR_2; break;
   case 3: VAR_13->card_type = VAR_3;
    VAR_13->mohawk = 1;
    break;
 }
    }
    if (VAR_13->card_type == VAR_1 || VAR_13->card_type == VAR_4) {
 FUNC_5("Sorry, this is an old CE card\n");
 return 0;
    }
    if (VAR_13->card_type == VAR_10)
 FUNC_5("unknown card (mediaid=%02x prodid=%02x)\n", VAR_16, VAR_17);

    return 1;
}
