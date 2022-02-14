
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sas_phy_linkrates {int maximum_linkrate; } ;
struct hisi_hba {int dummy; } ;
typedef enum sas_linkrate { ____Placeholder_sas_linkrate } sas_linkrate ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hisi_hba*,int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hisi_hba *VAR_1, int VAR_2,
  struct sas_phy_linkrates *VAR_3)
{
 enum sas_linkrate VAR_4 = VAR_3->maximum_linkrate;
 u32 VAR_5 = 0x800;

 VAR_5 |= FUNC_0(VAR_4);
 FUNC_1(VAR_1, VAR_2, VAR_0,
        VAR_5);
}
