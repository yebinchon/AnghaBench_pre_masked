
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcs_request {scalar_t__ num_cmds; TYPE_1__* cmds; } ;
struct rsc_drv {int dummy; } ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct rsc_drv*,struct tcs_request const*) ;
 int FUNC_3 (int) ;

int FUNC_4(struct rsc_drv *VAR_3, const struct tcs_request *VAR_4)
{
 int VAR_5;

 if (!VAR_4 || !VAR_4->cmds || !VAR_4->num_cmds ||
     VAR_4->num_cmds > VAR_2) {
  FUNC_0(1);
  return -VAR_1;
 }

 do {
  VAR_5 = FUNC_2(VAR_3, VAR_4);
  if (VAR_5 == -VAR_0) {
   FUNC_1("TCS Busy, retrying RPMH message send: addr=%#x\n",
         VAR_4->cmds[0].addr);
   FUNC_3(10);
  }
 } while (VAR_5 == -VAR_0);

 return VAR_5;
}
