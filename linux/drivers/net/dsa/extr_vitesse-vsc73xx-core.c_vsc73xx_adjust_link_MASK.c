
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vsc73xx {int dev; } ;
struct phy_device {scalar_t__ speed; scalar_t__ interface; scalar_t__ duplex; int link; } ;
struct dsa_switch {struct vsc73xx* priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct vsc73xx*,int,struct phy_device*,int) ;
 int FUNC_5 (struct vsc73xx*,int) ;
 int FUNC_6 (struct vsc73xx*,int ,int ,int ,int*) ;
 int FUNC_7 (struct vsc73xx*,int ,int,int ,int,int) ;
 int FUNC_8 (struct vsc73xx*,int ,int,int ,int) ;

__attribute__((used)) static void FUNC_9(struct dsa_switch *VAR_24, int VAR_25,
    struct phy_device *VAR_26)
{
 struct vsc73xx *VAR_27 = VAR_24->priv;
 u32 VAR_28;


 if (VAR_25 == VAR_0) {

  FUNC_5(VAR_27, VAR_0);




  FUNC_8(VAR_27, VAR_14,
         VAR_0,
         VAR_6,
         VAR_9 |
         VAR_8 |
         VAR_7);
 }




 if (!VAR_26->link) {
  int VAR_29 = 10;

  FUNC_1(VAR_27->dev, "port %d: went down\n",
   VAR_25);


  FUNC_7(VAR_27, VAR_14, VAR_25,
        VAR_15,
        VAR_21, 0);


  FUNC_7(VAR_27, VAR_13, 0,
        VAR_10, FUNC_0(VAR_25), FUNC_0(VAR_25));


  FUNC_6(VAR_27, VAR_13, 0,
        VAR_11, &VAR_28);
  while (!(VAR_28 & FUNC_0(VAR_25))) {
   FUNC_3(1);
   FUNC_6(VAR_27, VAR_13, 0,
         VAR_11, &VAR_28);
   if (--VAR_29 == 0) {
    FUNC_2(VAR_27->dev,
     "timeout waiting for block arbiter\n");

    break;
   }
  }


  FUNC_8(VAR_27, VAR_14, VAR_25, VAR_15,
         VAR_20);


  FUNC_7(VAR_27, VAR_13, 0,
        VAR_10, FUNC_0(VAR_25), 0);


  FUNC_7(VAR_27, VAR_13, 0,
        VAR_23, FUNC_0(VAR_25), FUNC_0(VAR_25));


  FUNC_7(VAR_27, VAR_12, 0,
        VAR_22, FUNC_0(VAR_25), 0);

  return;
 }


 if (VAR_26->speed == VAR_5) {
  FUNC_1(VAR_27->dev, "port %d: 1000 Mbit mode full duplex\n",
   VAR_25);


  if (VAR_26->interface == VAR_2)
   VAR_28 = VAR_17;
  else
   VAR_28 = VAR_16;
  FUNC_4(VAR_27, VAR_25, VAR_26, VAR_28);
 } else if (VAR_26->speed == VAR_4) {
  if (VAR_26->duplex == VAR_1) {
   VAR_28 = VAR_18;
   FUNC_1(VAR_27->dev,
    "port %d: 100 Mbit full duplex mode\n",
    VAR_25);
  } else {
   VAR_28 = VAR_19;
   FUNC_1(VAR_27->dev,
    "port %d: 100 Mbit half duplex mode\n",
    VAR_25);
  }
  FUNC_4(VAR_27, VAR_25, VAR_26, VAR_28);
 } else if (VAR_26->speed == VAR_3) {
  if (VAR_26->duplex == VAR_1) {
   VAR_28 = VAR_18;
   FUNC_1(VAR_27->dev,
    "port %d: 10 Mbit full duplex mode\n",
    VAR_25);
  } else {
   VAR_28 = VAR_19;
   FUNC_1(VAR_27->dev,
    "port %d: 10 Mbit half duplex mode\n",
    VAR_25);
  }
  FUNC_4(VAR_27, VAR_25, VAR_26, VAR_28);
 } else {
  FUNC_2(VAR_27->dev,
   "could not adjust link: unknown speed\n");
 }


 FUNC_7(VAR_27, VAR_12, 0,
       VAR_22, FUNC_0(VAR_25), FUNC_0(VAR_25));
}
