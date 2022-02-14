
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dsa_switch {int dev; struct b53_device* priv; } ;
struct b53_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct b53_device*,int ,int ,int*) ;
 int FUNC_2 (struct b53_device*,int ,int ,int) ;
 int FUNC_3 (int ,char*,int) ;

void FUNC_4(struct dsa_switch *VAR_7, int VAR_8, u8 VAR_9)
{
 struct b53_device *VAR_10 = VAR_7->priv;
 u8 VAR_11;
 u8 VAR_12;

 switch (VAR_9) {
 case 131:
  VAR_11 = VAR_2;
  break;
 case 128:
  VAR_11 = VAR_5;
  break;
 case 129:
  VAR_11 = VAR_4;
  break;
 case 130:
  VAR_11 = VAR_3;
  break;
 case 132:
  VAR_11 = VAR_1;
  break;
 default:
  FUNC_3(VAR_7->dev, "invalid STP state: %d\n", VAR_9);
  return;
 }

 FUNC_1(VAR_10, VAR_0, FUNC_0(VAR_8), &VAR_12);
 VAR_12 &= ~VAR_6;
 VAR_12 |= VAR_11;
 FUNC_2(VAR_10, VAR_0, FUNC_0(VAR_8), VAR_12);
}
