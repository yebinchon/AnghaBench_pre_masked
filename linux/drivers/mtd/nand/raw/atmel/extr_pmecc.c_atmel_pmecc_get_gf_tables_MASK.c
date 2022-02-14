
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sectorsize; } ;
struct atmel_pmecc_user_req {TYPE_1__ ecc; } ;
struct atmel_pmecc_gf_tables {int dummy; } ;


 int FUNC_0 (struct atmel_pmecc_gf_tables const*) ;
 struct atmel_pmecc_gf_tables* FUNC_1 (struct atmel_pmecc_user_req const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct atmel_pmecc_gf_tables* VAR_0 ;
 struct atmel_pmecc_gf_tables* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static const struct atmel_pmecc_gf_tables *
FUNC_4(const struct atmel_pmecc_user_req *VAR_3)
{
 const struct atmel_pmecc_gf_tables **VAR_4, *VAR_5;

 FUNC_2(&VAR_2);
 if (VAR_3->ecc.sectorsize == 512)
  VAR_4 = &VAR_1;
 else
  VAR_4 = &VAR_0;

 VAR_5 = *VAR_4;

 if (!VAR_5) {
  VAR_5 = FUNC_1(VAR_3);
  if (!FUNC_0(VAR_5))
   *VAR_4 = VAR_5;
 }
 FUNC_3(&VAR_2);

 return VAR_5;
}
