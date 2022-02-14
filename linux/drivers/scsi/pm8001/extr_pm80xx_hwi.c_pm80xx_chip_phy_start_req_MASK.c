
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct pm8001_hba_info {TYPE_1__* phy; int pdev; struct inbound_queue_table* inbnd_q_tbl; } ;
struct TYPE_4__ {size_t phy_id; int sas_addr; int initiator_bits; int dev_type; } ;
struct phy_start_req {TYPE_2__ sas_identify; void* ase_sh_lm_slr_phyid; void* tag; } ;
struct inbound_queue_table {int dummy; } ;
typedef int payload ;
struct TYPE_3__ {int dev_sas_addr; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct phy_start_req*,int ,int) ;
 int FUNC_5 (struct pm8001_hba_info*,struct inbound_queue_table*,size_t,struct phy_start_req*,int ) ;
 int FUNC_6 (char*,size_t) ;

__attribute__((used)) static int
FUNC_7(struct pm8001_hba_info *VAR_10, u8 VAR_11)
{
 struct phy_start_req VAR_12;
 struct inbound_queue_table *VAR_13;
 int VAR_14;
 u32 VAR_15 = 0x01;
 u32 VAR_16 = VAR_5;
 VAR_13 = &VAR_10->inbnd_q_tbl[0];
 FUNC_4(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.tag = FUNC_2(VAR_15);

 FUNC_1(VAR_10,
  FUNC_6("PHY START REQ for phy_id %d\n", VAR_11));







 if (!FUNC_0(VAR_10->pdev))
  VAR_12.ase_sh_lm_slr_phyid = FUNC_2(VAR_9 |
    VAR_0 | VAR_2 |
    VAR_3 | VAR_4 | VAR_11);
 else
  VAR_12.ase_sh_lm_slr_phyid = FUNC_2(VAR_9 |
    VAR_0 | VAR_2 |
    VAR_3 | VAR_4 | VAR_1 |
    VAR_11);
 VAR_12.sas_identify.dev_type = VAR_7;
 VAR_12.sas_identify.initiator_bits = VAR_8;
 FUNC_3(VAR_12.sas_identify.sas_addr,
   &VAR_10->phy[VAR_11].dev_sas_addr, VAR_6);
 VAR_12.sas_identify.phy_id = VAR_11;
 VAR_14 = FUNC_5(VAR_10, VAR_13, VAR_16, &VAR_12, 0);
 return VAR_14;
}
