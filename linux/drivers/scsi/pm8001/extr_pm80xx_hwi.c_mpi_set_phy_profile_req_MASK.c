
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct set_phy_profile_req {int ppc_phyid; void** reserved; void* tag; } ;
struct pm8001_hba_info {struct inbound_queue_table* inbnd_q_tbl; } ;
struct inbound_queue_table {int dummy; } ;
typedef int payload ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct set_phy_profile_req*,int ,int) ;
 int FUNC_4 (struct pm8001_hba_info*,struct inbound_queue_table*,int,struct set_phy_profile_req*,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct pm8001_hba_info*,int*) ;
 int FUNC_7 (struct pm8001_hba_info*,int) ;

void FUNC_8(struct pm8001_hba_info *VAR_2,
 u32 VAR_3, u32 VAR_4, u32 VAR_5, u32 *VAR_6)
{
 u32 VAR_7 , VAR_8, VAR_9 = 0;
 int VAR_10;
 struct set_phy_profile_req VAR_11;
 struct inbound_queue_table *VAR_12;
 u32 VAR_13 = VAR_0;

 FUNC_3(&VAR_11, 0, sizeof(VAR_11));
 VAR_10 = FUNC_6(VAR_2, &VAR_7);
 if (VAR_10)
  FUNC_0(VAR_2, FUNC_5("Invalid tag\n"));
 VAR_12 = &VAR_2->inbnd_q_tbl[0];
 VAR_11.tag = FUNC_2(VAR_7);
 VAR_11.ppc_phyid = (((VAR_3 & 0xF) << 8) | (VAR_4 & 0xFF));
 FUNC_1(VAR_2,
  FUNC_5(" phy profile command for phy %x ,length is %d\n",
   VAR_11.ppc_phyid, VAR_5));
 for (VAR_8 = VAR_5; VAR_8 < (VAR_5 + VAR_1 - 1); VAR_8++) {
  VAR_11.reserved[VAR_9] = FUNC_2(*((u32 *)VAR_6 + VAR_8));
  VAR_9++;
 }
 VAR_10 = FUNC_4(VAR_2, VAR_12, VAR_13, &VAR_11, 0);
 if (VAR_10)
  FUNC_7(VAR_2, VAR_7);
}
