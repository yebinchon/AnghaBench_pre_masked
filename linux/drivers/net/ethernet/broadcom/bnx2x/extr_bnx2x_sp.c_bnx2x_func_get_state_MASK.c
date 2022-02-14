
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_func_sp_obj {int state; scalar_t__ pending; } ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_func_state { ____Placeholder_bnx2x_func_state } bnx2x_func_state ;


 int VAR_0 ;
 int FUNC_0 () ;

enum bnx2x_func_state FUNC_1(struct bnx2x *VAR_1,
        struct bnx2x_func_sp_obj *VAR_2)
{

 if (VAR_2->pending)
  return VAR_0;




 FUNC_0();

 return VAR_2->state;
}
