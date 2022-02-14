
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;
struct TYPE_3__ {int lane; int port; int mode; int submode; int fw_mode; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_1(int VAR_3, int VAR_4,
       enum phy_mode VAR_5,
       int VAR_6)
{
 int VAR_7, VAR_8 = FUNC_0(VAR_2);


 if (VAR_5 == VAR_1)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  if (VAR_2[VAR_7].lane == VAR_3 &&
      VAR_2[VAR_7].port == VAR_4 &&
      VAR_2[VAR_7].mode == VAR_5 &&
      VAR_2[VAR_7].submode == VAR_6)
   break;
 }

 if (VAR_7 == VAR_8)
  return -VAR_0;

 return VAR_2[VAR_7].fw_mode;
}
