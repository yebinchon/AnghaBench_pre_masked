
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct zd_reg_alpha2_map {scalar_t__ reg; char* alpha2; } ;


 unsigned int FUNC_0 (struct zd_reg_alpha2_map*) ;
 struct zd_reg_alpha2_map* VAR_0 ;

__attribute__((used)) static int FUNC_1(u8 VAR_1, char *VAR_2)
{
 unsigned int VAR_3;
 struct zd_reg_alpha2_map *VAR_4;
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_4 = &VAR_0[VAR_3];
  if (VAR_1 == VAR_4->reg) {
   VAR_2[0] = VAR_4->alpha2[0];
   VAR_2[1] = VAR_4->alpha2[1];
   return 0;
  }
 }
 return 1;
}
