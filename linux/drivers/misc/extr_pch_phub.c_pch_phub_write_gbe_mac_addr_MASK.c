
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pch_phub_reg {int ioh_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct pch_phub_reg*) ;
 int FUNC_1 (struct pch_phub_reg*) ;
 int FUNC_2 (struct pch_phub_reg*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct pch_phub_reg *VAR_1, u8 *VAR_2)
{
 int VAR_3;
 int VAR_4;

 if ((VAR_1->ioh_type == 1) || (VAR_1->ioh_type == 5))
  VAR_3 = FUNC_0(VAR_1);
 else
  VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  return VAR_3;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = FUNC_2(VAR_1, VAR_4, VAR_2[VAR_4]);
  if (VAR_3)
   return VAR_3;
 }

 return VAR_3;
}
