
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcs_request {scalar_t__ num_cmds; scalar_t__ state; int cmds; } ;
struct rsc_drv {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct rsc_drv*,struct tcs_request const*) ;

int FUNC_2(struct rsc_drv *VAR_3, const struct tcs_request *VAR_4)
{
 if (!VAR_4 || !VAR_4->cmds || !VAR_4->num_cmds ||
     VAR_4->num_cmds > VAR_1) {
  FUNC_0("Payload error\n");
  return -VAR_0;
 }


 if (VAR_4->state == VAR_2)
  return -VAR_0;

 return FUNC_1(VAR_3, VAR_4);
}
