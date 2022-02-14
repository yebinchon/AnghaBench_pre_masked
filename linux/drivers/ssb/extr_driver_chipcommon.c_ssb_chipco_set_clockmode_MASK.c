
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int revision; } ;
struct ssb_device {TYPE_1__ id; struct ssb_bus* bus; } ;
struct ssb_chipcommon {int capabilities; struct ssb_device* dev; } ;
struct ssb_bus {int dummy; } ;
typedef enum ssb_clkmode { ____Placeholder_ssb_clkmode } ssb_clkmode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ssb_chipcommon*,int ) ;
 int FUNC_2 (struct ssb_chipcommon*,int ,int) ;
 int FUNC_3 (struct ssb_bus*,int ,int) ;

void FUNC_4(struct ssb_chipcommon *VAR_11,
         enum ssb_clkmode VAR_12)
{
 struct ssb_device *VAR_13 = VAR_11->dev;
 struct ssb_bus *VAR_14;
 u32 VAR_15;

 if (!VAR_13)
  return;
 VAR_14 = VAR_13->bus;


 if (VAR_13->id.revision >= 10 && VAR_12 == 128)
  VAR_12 = 130;

 if (VAR_11->capabilities & VAR_1)
  return;
 FUNC_0(VAR_13->id.revision >= 20);


 if (VAR_13->id.revision < 6)
  return;


 if (VAR_13->id.revision >= 10)
  return;

 if (!(VAR_11->capabilities & VAR_0))
  return;

 switch (VAR_12) {
 case 128:
  VAR_15 = FUNC_1(VAR_11, VAR_2);
  VAR_15 |= VAR_4;
  FUNC_2(VAR_11, VAR_2, VAR_15);
  break;
 case 129:
  if (VAR_13->id.revision < 10) {
   FUNC_3(VAR_14, VAR_10, 1);
   VAR_15 = FUNC_1(VAR_11, VAR_2);
   VAR_15 &= ~VAR_4;
   VAR_15 |= VAR_5;
   FUNC_2(VAR_11, VAR_2, VAR_15);
  } else {
   FUNC_2(VAR_11, VAR_8,
    (FUNC_1(VAR_11, VAR_8) |
     VAR_9));

  }
  break;
 case 130:
  if (VAR_13->id.revision < 10) {
   VAR_15 = FUNC_1(VAR_11, VAR_2);
   VAR_15 &= ~VAR_4;
   VAR_15 &= ~VAR_5;
   VAR_15 &= ~VAR_3;
   if ((VAR_15 & VAR_6) !=
       VAR_7)
    VAR_15 |= VAR_3;
   FUNC_2(VAR_11, VAR_2, VAR_15);



   if (VAR_15 & VAR_3)
    FUNC_3(VAR_14, VAR_10, 0);
  } else {
   FUNC_2(VAR_11, VAR_8,
    (FUNC_1(VAR_11, VAR_8) &
     ~VAR_9));
  }
  break;
 default:
  FUNC_0(1);
 }
}
