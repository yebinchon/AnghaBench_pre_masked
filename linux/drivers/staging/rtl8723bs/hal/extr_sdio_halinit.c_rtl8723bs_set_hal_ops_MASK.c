
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hal_ops {int * hal_checke_bt_hang; int * hal_cancle_checkbthang_workqueue; int * hal_free_checkbthang_workqueue; int * hal_init_checkbthang_workqueue; int * hal_xmitframe_enqueue; int * mgnt_xmit; int * hal_xmit; int * SetHalDefVarHandler; int * GetHalDefVarHandler; int * SetHwRegHandlerWithBuf; int * GetHwRegHandler; int * SetHwRegHandler; int * clear_interrupt; int * check_ips_status; int * disable_interrupt; int * enable_interrupt; int * read_adapter_info; int * intf_chip_configure; int * init_default_value; int * free_recv_priv; int * init_recv_priv; int * free_xmit_priv; int * init_xmit_priv; int * inirp_deinit; int * inirp_init; int * hal_deinit; int * hal_init; } ;
struct adapter {struct hal_ops HalFunc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct hal_ops*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;

void FUNC_1(struct adapter *VAR_27)
{
 struct hal_ops *VAR_28 = &VAR_27->HalFunc;

 FUNC_0(VAR_28);

 VAR_28->hal_init = &VAR_16;
 VAR_28->hal_deinit = &VAR_15;

 VAR_28->inirp_init = &VAR_20;
 VAR_28->inirp_deinit = &VAR_19;

 VAR_28->init_xmit_priv = &VAR_24;
 VAR_28->free_xmit_priv = &VAR_13;

 VAR_28->init_recv_priv = &VAR_23;
 VAR_28->free_recv_priv = &VAR_12;

 VAR_28->init_default_value = &VAR_22;
 VAR_28->intf_chip_configure = &VAR_25;
 VAR_28->read_adapter_info = &VAR_6;

 VAR_28->enable_interrupt = &VAR_3;
 VAR_28->disable_interrupt = &VAR_2;
 VAR_28->check_ips_status = &VAR_0;



 VAR_28->SetHwRegHandler = &VAR_8;
 VAR_28->GetHwRegHandler = &VAR_5;
 VAR_28->SetHwRegHandlerWithBuf = &VAR_9;
 VAR_28->GetHalDefVarHandler = &VAR_4;
 VAR_28->SetHalDefVarHandler = &VAR_7;

 VAR_28->hal_xmit = &VAR_17;
 VAR_28->mgnt_xmit = &VAR_26;
 VAR_28->hal_xmitframe_enqueue = &VAR_18;







}
