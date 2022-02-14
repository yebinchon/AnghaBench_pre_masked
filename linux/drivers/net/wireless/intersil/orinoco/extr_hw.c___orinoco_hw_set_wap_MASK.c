
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hermes {int dummy; } ;
struct orinoco_private {int firmware_type; int desired_bssid; int bssid_fixed; struct hermes hw; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hermes*,int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (struct hermes*,int ,int ,int) ;

int FUNC_2(struct orinoco_private *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 struct hermes *VAR_6 = &VAR_3->hw;

 switch (VAR_3->firmware_type) {
 case 130:

  break;
 case 129:
  if (VAR_3->bssid_fixed)
   VAR_4 = 2;
  else
   VAR_4 = 1;

  VAR_5 = FUNC_1(VAR_6, VAR_2,
        VAR_1,
        VAR_4);
  break;
 case 128:
  VAR_5 = FUNC_0(VAR_6, VAR_2,
       VAR_0,
       &VAR_3->desired_bssid);
  break;
 }
 return VAR_5;
}
