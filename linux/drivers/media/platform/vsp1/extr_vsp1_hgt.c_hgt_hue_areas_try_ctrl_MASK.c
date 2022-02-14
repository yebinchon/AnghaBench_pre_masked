
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__* p_u8; } ;
struct v4l2_ctrl {TYPE_1__ p_new; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct v4l2_ctrl *VAR_2)
{
 const u8 *VAR_3 = VAR_2->p_new.p_u8;
 unsigned int VAR_4;
 for (VAR_4 = 1; VAR_4 < (VAR_1 * 2) - 1; ++VAR_4) {
  if (VAR_3[VAR_4] > VAR_3[VAR_4+1])
   return -VAR_0;
 }


 if (VAR_3[0] > VAR_3[1] && VAR_3[11] > VAR_3[0])
  return -VAR_0;

 return 0;
}
