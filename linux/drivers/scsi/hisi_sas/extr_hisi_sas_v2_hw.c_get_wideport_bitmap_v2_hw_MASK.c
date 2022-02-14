
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {int n_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hisi_hba*,int ) ;

__attribute__((used)) static int FUNC_1(struct hisi_hba *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8 = 0;
 u32 VAR_9 = FUNC_0(VAR_5, VAR_0);
 u32 VAR_10 = FUNC_0(VAR_5, VAR_1);

 for (VAR_7 = 0; VAR_7 < (VAR_5->n_phy < 9 ? VAR_5->n_phy : 8); VAR_7++)
  if (VAR_10 & 1 << VAR_7)
   if (((VAR_9 >> (VAR_7 * 4)) & 0xf) == VAR_6)
    VAR_8 |= 1 << VAR_7;

 if (VAR_5->n_phy == 9) {
  u32 VAR_11 = FUNC_0(VAR_5, VAR_2);

  if (VAR_10 & 1 << 8)
   if (((VAR_11 & VAR_3) >>
        VAR_4) == VAR_6)
    VAR_8 |= 1 << 9;
 }

 return VAR_8;
}
