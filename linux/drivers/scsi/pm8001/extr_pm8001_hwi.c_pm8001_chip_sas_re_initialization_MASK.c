
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sas_re_initialization_req {void* open_reject_cmdretries_data_retries; void* sata_hol_tmo; void* SSAHOLT; void* tag; } ;
struct pm8001_hba_info {struct inbound_queue_table* inbnd_q_tbl; struct pm8001_ccb_info* ccb_info; } ;
struct pm8001_ccb_info {size_t ccb_tag; } ;
struct inbound_queue_table {int dummy; } ;
typedef int payload ;


 int VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct sas_re_initialization_req*,int ,int) ;
 int FUNC_2 (struct pm8001_hba_info*,struct inbound_queue_table*,size_t,struct sas_re_initialization_req*,int ) ;
 int FUNC_3 (struct pm8001_hba_info*,size_t*) ;
 int FUNC_4 (struct pm8001_hba_info*,size_t) ;

__attribute__((used)) static int
FUNC_5(struct pm8001_hba_info *VAR_2)
{
 struct sas_re_initialization_req VAR_3;
 struct inbound_queue_table *VAR_4;
 struct pm8001_ccb_info *VAR_5;
 int VAR_6;
 u32 VAR_7;
 u32 VAR_8 = VAR_1;
 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_6 = FUNC_3(VAR_2, &VAR_7);
 if (VAR_6)
  return -VAR_0;
 VAR_5 = &VAR_2->ccb_info[VAR_7];
 VAR_5->ccb_tag = VAR_7;
 VAR_4 = &VAR_2->inbnd_q_tbl[0];
 VAR_3.tag = FUNC_0(VAR_7);
 VAR_3.SSAHOLT = FUNC_0(0xd << 25);
 VAR_3.sata_hol_tmo = FUNC_0(80);
 VAR_3.open_reject_cmdretries_data_retries = FUNC_0(0xff00ff);
 VAR_6 = FUNC_2(VAR_2, VAR_4, VAR_8, &VAR_3, 0);
 if (VAR_6)
  FUNC_4(VAR_2, VAR_7);
 return VAR_6;

}
