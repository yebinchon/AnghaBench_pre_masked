
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct b53_device {int cpu_port; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;



 int FUNC_1 (struct b53_device*,int ,int ,int *) ;
 int FUNC_2 (struct b53_device*,int ,int ,int ) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void FUNC_4(struct b53_device *VAR_14, int VAR_15,
      int VAR_16, int VAR_17, int VAR_18)
{
 u8 VAR_19, VAR_20, VAR_21;


 if (VAR_15 == VAR_14->cpu_port) {
  VAR_21 = VAR_1;
  VAR_20 = VAR_6;
 } else {
  VAR_21 = FUNC_0(VAR_15);
  VAR_20 = VAR_3;
 }

 FUNC_1(VAR_14, VAR_0, VAR_21, &VAR_19);
 VAR_19 |= VAR_20;
 if (VAR_17 == VAR_2)
  VAR_19 |= VAR_7;
 else
  VAR_19 &= ~VAR_7;

 switch (VAR_16) {
 case 2000:
  VAR_19 |= VAR_12;

 case 128:
  VAR_19 |= VAR_9;
  break;
 case 129:
  VAR_19 |= VAR_10;
  break;
 case 130:
  VAR_19 |= VAR_11;
  break;
 default:
  FUNC_3(VAR_14->dev, "unknown speed: %d\n", VAR_16);
  return;
 }

 if (VAR_18 & VAR_4)
  VAR_19 |= VAR_8;
 if (VAR_18 & VAR_5)
  VAR_19 |= VAR_13;

 FUNC_2(VAR_14, VAR_0, VAR_21, VAR_19);
}
