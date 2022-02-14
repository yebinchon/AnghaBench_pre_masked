
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pm8001_hba_info {int sas_addr; struct inbound_queue_table* inbnd_q_tbl; } ;
struct TYPE_2__ {int phy_id; int sas_addr; int initiator_bits; int dev_type; } ;
struct phy_start_req {TYPE_1__ sas_identify; void* ase_sh_lm_slr_phyid; void* tag; } ;
struct inbound_queue_table {int dummy; } ;
typedef int payload ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct phy_start_req*,int ,int) ;
 int FUNC_3 (struct pm8001_hba_info*,struct inbound_queue_table*,int,struct phy_start_req*,int ) ;

__attribute__((used)) static int
FUNC_4(struct pm8001_hba_info *VAR_9, u8 VAR_10)
{
 struct phy_start_req VAR_11;
 struct inbound_queue_table *VAR_12;
 int VAR_13;
 u32 VAR_14 = 0x01;
 u32 VAR_15 = VAR_4;
 VAR_12 = &VAR_9->inbnd_q_tbl[0];
 FUNC_2(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.tag = FUNC_0(VAR_14);






 VAR_11.ase_sh_lm_slr_phyid = FUNC_0(VAR_8 |
  VAR_0 | VAR_1 |
  VAR_2 | VAR_3 | VAR_10);
 VAR_11.sas_identify.dev_type = VAR_6;
 VAR_11.sas_identify.initiator_bits = VAR_7;
 FUNC_1(VAR_11.sas_identify.sas_addr,
  VAR_9->sas_addr, VAR_5);
 VAR_11.sas_identify.phy_id = VAR_10;
 VAR_13 = FUNC_3(VAR_9, VAR_12, VAR_15, &VAR_11, 0);
 return VAR_13;
}
