
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct NvRamType {int max_tag; int channel_cfg; int scsi_id; } ;
struct AdapterCtlBlk {int srb_count; int tag_max_num; int gmode2; int lun_chk; int scan_devices; int hostid_bit; int srb_free_list; TYPE_2__* srb_array; scalar_t__ msg_len; scalar_t__* dcb_map; TYPE_1__* scsi_host; scalar_t__ config; scalar_t__ acb_flag; int sel_timeout; int selto_timer; int waiting_timer; int srb; int * tmp_srb; int * active_dcb; int * dcb_run_robin; int dcb_list; struct NvRamType eeprom; } ;
struct TYPE_4__ {int list; } ;
struct TYPE_3__ {int this_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int * VAR_4 ;

__attribute__((used)) static void FUNC_3(struct AdapterCtlBlk *VAR_5)
{
 struct NvRamType *VAR_6 = &VAR_5->eeprom;
 int VAR_7;





 FUNC_0(&VAR_5->dcb_list);
 VAR_5->dcb_run_robin = ((void*)0);
 VAR_5->active_dcb = ((void*)0);

 FUNC_0(&VAR_5->srb_free_list);

 VAR_5->tmp_srb = &VAR_5->srb;
 FUNC_2(&VAR_5->waiting_timer, VAR_4, 0);
 FUNC_2(&VAR_5->selto_timer, ((void*)0), 0);

 VAR_5->srb_count = VAR_1;

 VAR_5->sel_timeout = VAR_2;


 VAR_5->tag_max_num = 1 << VAR_6->max_tag;
 if (VAR_5->tag_max_num > 30)
  VAR_5->tag_max_num = 30;

 VAR_5->acb_flag = 0;
 VAR_5->gmode2 = VAR_6->channel_cfg;
 VAR_5->config = 0;

 if (VAR_6->channel_cfg & VAR_3)
  VAR_5->lun_chk = 1;
 VAR_5->scan_devices = 1;

 VAR_5->scsi_host->this_id = VAR_6->scsi_id;
 VAR_5->hostid_bit = (1 << VAR_5->scsi_host->this_id);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_5->dcb_map[VAR_7] = 0;

 VAR_5->msg_len = 0;


 for (VAR_7 = 0; VAR_7 < VAR_5->srb_count - 1; VAR_7++)
  FUNC_1(&VAR_5->srb_array[VAR_7].list, &VAR_5->srb_free_list);
}
