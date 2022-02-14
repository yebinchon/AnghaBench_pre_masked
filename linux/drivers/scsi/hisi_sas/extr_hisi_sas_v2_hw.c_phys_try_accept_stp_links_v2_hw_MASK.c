
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {int n_phy; int reject_stp_links_msk; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (struct hisi_hba*,int,int ) ;
 int FUNC_3 (struct hisi_hba*,int,int ,int) ;

__attribute__((used)) static void FUNC_4(struct hisi_hba *VAR_4)
{
 int VAR_5;
 u32 VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4->n_phy; VAR_5++) {
  if (!(VAR_4->reject_stp_links_msk & FUNC_0(VAR_5)))
   continue;

  VAR_6 = FUNC_2(VAR_4, VAR_5,
      VAR_2);
  if (VAR_6 & VAR_3) {
   u32 VAR_7 = FUNC_2(VAR_4,
    VAR_5, VAR_0);

   VAR_7 |= VAR_1;
   FUNC_3(VAR_4, VAR_5,
    VAR_0, VAR_7);
   FUNC_1(VAR_5, &VAR_4->reject_stp_links_msk);
  }
 }
}
