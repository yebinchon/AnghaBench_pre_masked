
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int size; int strength; int bytes; } ;
struct TYPE_4__ {TYPE_1__ ecc; } ;
struct omap_nand_info {TYPE_2__ nand; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static int FUNC_2(u_char *VAR_0, u_char *VAR_1,
  struct omap_nand_info *VAR_2)
{
 int VAR_3 = 0, VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->nand.ecc.size; VAR_4++) {
  VAR_3 += FUNC_0(~VAR_0[VAR_4]);
  if (VAR_3 > VAR_2->nand.ecc.strength)
   return 0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_2->nand.ecc.bytes - 1; VAR_4++) {
  VAR_3 += FUNC_0(~VAR_1[VAR_4]);
  if (VAR_3 > VAR_2->nand.ecc.strength)
   return 0;
 }





 if (VAR_3) {
  FUNC_1(VAR_0, 0xFF, VAR_2->nand.ecc.size);
  FUNC_1(VAR_1, 0xFF, VAR_2->nand.ecc.bytes);
 }

 return VAR_3;
}
