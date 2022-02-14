
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct imx_sc_rpc_msg {int size; int func; int svc; int ver; } ;
struct imx_sc_msg_resp_pad_get {unsigned long val; } ;
struct imx_sc_msg_req_pad_get {unsigned int pad; struct imx_sc_rpc_msg hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct imx_sc_msg_req_pad_get*,int) ;
 int VAR_3 ;

int FUNC_1(struct pinctrl_dev *VAR_4, unsigned VAR_5,
   unsigned long *VAR_6)
{
 struct imx_sc_msg_req_pad_get VAR_7;
 struct imx_sc_msg_resp_pad_get *VAR_8;
 struct imx_sc_rpc_msg *VAR_9 = &VAR_7.hdr;
 int VAR_10;

 VAR_9->ver = VAR_2;
 VAR_9->svc = VAR_1;
 VAR_9->func = VAR_0;
 VAR_9->size = 2;

 VAR_7.pad = VAR_5;

 VAR_10 = FUNC_0(VAR_3, &VAR_7, 1);
 if (VAR_10)
  return VAR_10;

 VAR_8 = (struct imx_sc_msg_resp_pad_get *)&VAR_7;
 *VAR_6 = VAR_8->val;

 return 0;
}
