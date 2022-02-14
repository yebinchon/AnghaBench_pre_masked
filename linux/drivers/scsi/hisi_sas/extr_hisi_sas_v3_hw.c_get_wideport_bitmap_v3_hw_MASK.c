
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {int n_phy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hisi_hba*,int ) ;

__attribute__((used)) static int FUNC_2(struct hisi_hba *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = 0;
 u32 VAR_6 = FUNC_1(VAR_2, VAR_0);
 u32 VAR_7 = FUNC_1(VAR_2, VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_2->n_phy; VAR_4++)
  if (VAR_7 & FUNC_0(VAR_4))
   if (((VAR_6 >> (VAR_4 * 4)) & 0xf) == VAR_3)
    VAR_5 |= FUNC_0(VAR_4);

 return VAR_5;
}
