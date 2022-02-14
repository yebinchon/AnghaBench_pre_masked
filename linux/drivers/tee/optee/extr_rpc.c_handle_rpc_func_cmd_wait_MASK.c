
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct optee_msg_arg {int num_params; int ret; TYPE_3__* params; } ;
struct TYPE_4__ {int a; } ;
struct TYPE_5__ {TYPE_1__ value; } ;
struct TYPE_6__ {int attr; TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct optee_msg_arg *VAR_4)
{
 u32 VAR_5;

 if (VAR_4->num_params != 1)
  goto bad;

 if ((VAR_4->params[0].attr & VAR_0) !=
   VAR_1)
  goto bad;

 VAR_5 = VAR_4->params[0].u.value.a;


 FUNC_0(VAR_5);

 VAR_4->ret = VAR_3;
 return;
bad:
 VAR_4->ret = VAR_2;
}
