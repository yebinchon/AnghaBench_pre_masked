
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_ctl {int dummy; } ;
struct tb_cfg_result {int err; int tb_error; int response_port; int response_route; } ;






 int FUNC_0 (int) ;
 int FUNC_1 (struct tb_ctl*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct tb_ctl *VAR_0,
          const struct tb_cfg_result *VAR_1)
{
 FUNC_0(VAR_1->err != 1);
 switch (VAR_1->tb_error) {
 case 128:


  return;
 case 131:




  FUNC_1(VAR_0,
   "CFG_ERROR(%llx:%x): Invalid config space or offset\n",
   VAR_1->response_route, VAR_1->response_port);
  return;
 case 129:





  FUNC_1(VAR_0, "CFG_ERROR(%llx:%x): Invalid port\n",
   VAR_1->response_route, VAR_1->response_port);
  return;
 case 130:
  FUNC_1(VAR_0, "CFG_ERROR(%llx:%x): Route contains a loop\n",
   VAR_1->response_route, VAR_1->response_port);
  return;
 default:

  FUNC_1(VAR_0, "CFG_ERROR(%llx:%x): Unknown error\n",
   VAR_1->response_route, VAR_1->response_port);
  return;
 }
}
