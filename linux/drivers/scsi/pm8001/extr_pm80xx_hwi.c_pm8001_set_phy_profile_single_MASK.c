
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
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct set_phy_profile_req*,int ,int) ;
 int FUNC_3 (struct pm8001_hba_info*,struct inbound_queue_table*,int,struct set_phy_profile_req*,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct pm8001_hba_info*,int*) ;
 int FUNC_6 (struct pm8001_hba_info*,int) ;

void FUNC_7(struct pm8001_hba_info *VAR_2,
  u32 VAR_3, u32 VAR_4, u32 *VAR_5)
{
 u32 VAR_6, VAR_7;
 int VAR_8, VAR_9;
 struct set_phy_profile_req VAR_10;
 struct inbound_queue_table *VAR_11;

 FUNC_2(&VAR_10, 0, sizeof(VAR_10));

 VAR_8 = FUNC_5(VAR_2, &VAR_6);
 if (VAR_8)
  FUNC_0(VAR_2, FUNC_4("Invalid tag"));

 VAR_11 = &VAR_2->inbnd_q_tbl[0];
 VAR_7 = VAR_0;

 VAR_10.tag = FUNC_1(VAR_6);
 VAR_10.ppc_phyid = (((VAR_1 & 0xF) << 8)
    | (VAR_3 & 0xFF));

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
  VAR_10.reserved[VAR_9] = FUNC_1(*(VAR_5 + VAR_9));

 VAR_8 = FUNC_3(VAR_2, VAR_11, VAR_7, &VAR_10, 0);
 if (VAR_8)
  FUNC_6(VAR_2, VAR_6);

 FUNC_0(VAR_2,
  FUNC_4("PHY %d settings applied", VAR_3));
}
