
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ret_unlink; int cmd_unlink; int ret_submit; int cmd_submit; } ;
struct TYPE_4__ {int command; } ;
struct usbip_header {TYPE_1__ u; TYPE_2__ base; } ;
typedef int __u32 ;






 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (char*) ;

void FUNC_6(struct usbip_header *VAR_0, int VAR_1)
{
 __u32 VAR_2 = 0;

 if (VAR_1)
  VAR_2 = VAR_0->base.command;

 FUNC_0(&VAR_0->base, VAR_1);

 if (!VAR_1)
  VAR_2 = VAR_0->base.command;

 switch (VAR_2) {
 case 131:
  FUNC_1(&VAR_0->u.cmd_submit, VAR_1);
  break;
 case 129:
  FUNC_3(&VAR_0->u.ret_submit, VAR_1);
  break;
 case 130:
  FUNC_2(&VAR_0->u.cmd_unlink, VAR_1);
  break;
 case 128:
  FUNC_4(&VAR_0->u.ret_unlink, VAR_1);
  break;
 default:

  FUNC_5("unknown command\n");
  break;
 }
}
