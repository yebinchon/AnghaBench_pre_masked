
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {int n_phy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hisi_hba*,int ) ;

__attribute__((used)) static int FUNC_1(struct hisi_hba *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = 0;
 u32 VAR_5 = FUNC_0(VAR_1, VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_1->n_phy; VAR_3++)
  if (((VAR_5 >> (VAR_3 * 4)) & 0xf) == VAR_2)
   VAR_4 |= 1 << VAR_3;

 return VAR_4;
}
