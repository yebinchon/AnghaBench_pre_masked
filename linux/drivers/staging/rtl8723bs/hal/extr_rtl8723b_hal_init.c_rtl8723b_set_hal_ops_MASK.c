
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hal_ops {int * fill_h2c_cmd; int c2h_id_filter_ccx; int c2h_handler; int * hal_notch_filter; int * xmit_thread_handler; int * SetHalODMVarHandler; int * GetHalODMVarHandler; int * Efuse_PgPacketWrite_BT; int * Efuse_WordEnableDataWrite; int * Efuse_PgPacketWrite; int * Efuse_PgPacketRead; int * EfuseGetCurrentSize; int * EFUSEGetEfuseDefinition; int * ReadEFuse; int * EfusePowerSwitch; int * BTEfusePowerSwitch; int * write_rfreg; int * read_rfreg; int * write_bbreg; int * read_bbreg; int * cancel_thread; int * run_thread; int * Add_RateATid; int * SetBeaconRelatedRegistersHandler; int * hal_dm_watchdog_in_lps; int * hal_dm_watchdog; int * get_tx_power_level_handler; int * set_tx_power_level_handler; int * set_chnl_bw_handler; int * set_channel_handler; int * set_bwmode_handler; int * UpdateRAMaskHandler; int * read_chip_version; int * dm_init; int * free_hal_data; } ;


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
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;

void FUNC_0(struct hal_ops *VAR_35)
{
 VAR_35->free_hal_data = &VAR_30;

 VAR_35->dm_init = &VAR_31;

 VAR_35->read_chip_version = &VAR_32;

 VAR_35->UpdateRAMaskHandler = &VAR_19;

 VAR_35->set_bwmode_handler = &VAR_14;
 VAR_35->set_channel_handler = &VAR_18;
 VAR_35->set_chnl_bw_handler = &VAR_16;

 VAR_35->set_tx_power_level_handler = &VAR_17;
 VAR_35->get_tx_power_level_handler = &VAR_10;

 VAR_35->hal_dm_watchdog = &VAR_26;
 VAR_35->hal_dm_watchdog_in_lps = &VAR_27;


 VAR_35->SetBeaconRelatedRegistersHandler = &VAR_28;

 VAR_35->Add_RateATid = &VAR_24;

 VAR_35->run_thread = &VAR_33;
 VAR_35->cancel_thread = &VAR_34;

 VAR_35->read_bbreg = &VAR_11;
 VAR_35->write_bbreg = &VAR_13;
 VAR_35->read_rfreg = &VAR_12;
 VAR_35->write_rfreg = &VAR_15;


 VAR_35->BTEfusePowerSwitch = &VAR_1;
 VAR_35->EfusePowerSwitch = &VAR_6;
 VAR_35->ReadEFuse = &VAR_9;
 VAR_35->EFUSEGetEfuseDefinition = &VAR_8;
 VAR_35->EfuseGetCurrentSize = &VAR_2;
 VAR_35->Efuse_PgPacketRead = &VAR_3;
 VAR_35->Efuse_PgPacketWrite = &VAR_4;
 VAR_35->Efuse_WordEnableDataWrite = &VAR_7;
 VAR_35->Efuse_PgPacketWrite_BT = &VAR_5;

 VAR_35->GetHalODMVarHandler = &VAR_25;
 VAR_35->SetHalODMVarHandler = &VAR_29;

 VAR_35->xmit_thread_handler = &VAR_23;
 VAR_35->hal_notch_filter = &VAR_22;

 VAR_35->c2h_handler = VAR_20;
 VAR_35->c2h_id_filter_ccx = VAR_21;

 VAR_35->fill_h2c_cmd = &VAR_0;
}
