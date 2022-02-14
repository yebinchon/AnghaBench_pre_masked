
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {int reject_stp_links_msk; int n_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hisi_hba*,int,int ) ;
 int FUNC_1 (struct hisi_hba*,int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hisi_hba *VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 VAR_2->reject_stp_links_msk = (1 << VAR_2->n_phy) - 1;
 for (VAR_4 = 0; VAR_4 < VAR_2->n_phy; VAR_4++) {
  VAR_3 = FUNC_0(VAR_2, VAR_4, VAR_0);
  if (!(VAR_3 & VAR_1))
   continue;

  VAR_3 &= ~VAR_1;
  FUNC_1(VAR_2, VAR_4, VAR_0, VAR_3);
 }
}
