
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_queue_sp_obj {int state; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct bnx2x *VAR_3,
          struct bnx2x_queue_sp_obj *VAR_4)
{
 switch (VAR_4->state) {
 case 136:
 case 131:
  return VAR_0;
 case 130:
 case 133:
 case 132:
 case 134:
 case 129:
 case 128:
 case 135:
  return VAR_1;
 default:
  return -VAR_2;
 }
}
