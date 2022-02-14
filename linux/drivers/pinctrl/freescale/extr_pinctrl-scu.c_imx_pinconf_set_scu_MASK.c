
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct imx_sc_rpc_msg {int size; int func; int svc; int ver; } ;
struct imx_sc_msg_req_pad_set {unsigned int pad; unsigned int val; struct imx_sc_rpc_msg hdr; } ;
struct imx_pinctrl {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (int ,struct imx_sc_msg_req_pad_set*,int) ;
 struct imx_pinctrl* FUNC_3 (struct pinctrl_dev*) ;
 int VAR_6 ;

int FUNC_4(struct pinctrl_dev *VAR_7, unsigned VAR_8,
   unsigned long *VAR_9, unsigned VAR_10)
{
 struct imx_pinctrl *VAR_11 = FUNC_3(VAR_7);
 struct imx_sc_msg_req_pad_set VAR_12;
 struct imx_sc_rpc_msg *VAR_13 = &VAR_12.hdr;
 unsigned int VAR_14 = VAR_9[0];
 unsigned int VAR_15 = VAR_9[1];
 unsigned int VAR_16;
 int VAR_17;




 FUNC_0(VAR_10 != 2);

 VAR_16 = VAR_15 | VAR_1 | VAR_0;
 VAR_16 |= VAR_14 << VAR_2;

 VAR_13->ver = VAR_5;
 VAR_13->svc = VAR_4;
 VAR_13->func = VAR_3;
 VAR_13->size = 3;

 VAR_12.pad = VAR_8;
 VAR_12.val = VAR_16;

 VAR_17 = FUNC_2(VAR_6, &VAR_12, 1);

 FUNC_1(VAR_11->dev, "write: pin_id %u config 0x%x val 0x%x\n",
  VAR_8, VAR_15, VAR_16);

 return VAR_17;
}
