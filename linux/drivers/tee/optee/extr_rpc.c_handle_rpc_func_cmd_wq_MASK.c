
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct optee_msg_arg {int num_params; int ret; TYPE_3__* params; } ;
struct optee {int wait_queue; } ;
struct TYPE_4__ {int a; int b; } ;
struct TYPE_5__ {TYPE_1__ value; } ;
struct TYPE_6__ {int attr; TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct optee *VAR_4,
       struct optee_msg_arg *VAR_5)
{
 if (VAR_5->num_params != 1)
  goto bad;

 if ((VAR_5->params[0].attr & VAR_0) !=
   VAR_1)
  goto bad;

 switch (VAR_5->params[0].u.value.a) {
 case 129:
  FUNC_0(&VAR_4->wait_queue, VAR_5->params[0].u.value.b);
  break;
 case 128:
  FUNC_1(&VAR_4->wait_queue, VAR_5->params[0].u.value.b);
  break;
 default:
  goto bad;
 }

 VAR_5->ret = VAR_3;
 return;
bad:
 VAR_5->ret = VAR_2;
}
