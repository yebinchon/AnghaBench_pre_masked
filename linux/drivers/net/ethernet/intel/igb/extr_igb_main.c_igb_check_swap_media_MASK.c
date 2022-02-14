
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int media_type; } ;
struct e1000_hw {TYPE_1__ phy; } ;
struct igb_adapter {int copper_tries; int netdev; int flags; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct igb_adapter *VAR_9)
{
 struct e1000_hw *VAR_10 = &VAR_9->hw;
 u32 VAR_11, VAR_12;
 bool VAR_13 = 0;

 VAR_11 = FUNC_2(VAR_6);
 VAR_12 = FUNC_2(VAR_0);





 if ((VAR_10->phy.media_type == 130) &&
     (!(VAR_12 & VAR_2))) {
  VAR_13 = 1;
 } else if ((VAR_10->phy.media_type != 130) &&
     !(VAR_12 & VAR_5)) {

  if (VAR_9->copper_tries < 4) {
   VAR_9->copper_tries++;
   VAR_12 |= VAR_1;
   FUNC_3(VAR_0, VAR_12);
   return;
  } else {
   VAR_9->copper_tries = 0;
   if ((VAR_12 & VAR_3) &&
       (!(VAR_12 & VAR_4))) {
    VAR_13 = 1;
    VAR_12 &= ~VAR_1;
    FUNC_3(VAR_0, VAR_12);
   }
  }
 }

 if (!VAR_13)
  return;

 switch (VAR_10->phy.media_type) {
 case 130:
  FUNC_1(VAR_9->netdev,
   "MAS: changing media to fiber/serdes\n");
  VAR_11 |=
   VAR_7;
  VAR_9->flags |= VAR_8;
  VAR_9->copper_tries = 0;
  break;
 case 128:
 case 129:
  FUNC_1(VAR_9->netdev,
   "MAS: changing media to copper\n");
  VAR_11 &=
   ~VAR_7;
  VAR_9->flags |= VAR_8;
  break;
 default:

  FUNC_0(VAR_9->netdev,
   "AMS: Invalid media type found, returning\n");
  break;
 }
 FUNC_3(VAR_6, VAR_11);
}
