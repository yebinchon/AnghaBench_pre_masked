
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct b43_wldev {TYPE_1__ phy; } ;


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
 int VAR_11 ;






 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_12)
{
 switch (VAR_12->phy.type) {
 case 132:
 case 128:
 case 129:
 case 131:
 case 130:
  FUNC_1(VAR_12, VAR_10, 1);
  FUNC_1(VAR_12, VAR_11, 1);
  FUNC_1(VAR_12, VAR_4, 1);
  FUNC_1(VAR_12, VAR_5, 1);
  FUNC_1(VAR_12, VAR_6, 1);
  FUNC_1(VAR_12, VAR_7, 1);
  FUNC_1(VAR_12, VAR_8, 1);
  FUNC_1(VAR_12, VAR_9, 1);

 case 133:
  FUNC_1(VAR_12, VAR_1, 0);
  FUNC_1(VAR_12, VAR_2, 0);
  FUNC_1(VAR_12, VAR_3, 0);
  FUNC_1(VAR_12, VAR_0, 0);
  break;
 default:
  FUNC_0(1);
 }
}
