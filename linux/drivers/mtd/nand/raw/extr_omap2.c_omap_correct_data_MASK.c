
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {scalar_t__ mode; int size; } ;
struct TYPE_4__ {TYPE_1__ ecc; } ;
struct omap_nand_info {TYPE_2__ nand; } ;
struct nand_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;
 struct omap_nand_info* FUNC_1 (int ) ;
 int FUNC_2 (struct nand_chip*) ;
 int FUNC_3 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_1, u_char *VAR_2,
        u_char *VAR_3, u_char *VAR_4)
{
 struct omap_nand_info *VAR_5 = FUNC_1(FUNC_2(VAR_1));
 int VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
 int VAR_9 = 0;


 if ((VAR_5->nand.ecc.mode == VAR_0) &&
   (VAR_5->nand.ecc.size == 2048))
  VAR_6 = 4;
 else
  VAR_6 = 1;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  if (FUNC_0(VAR_3, VAR_4, 3) != 0) {
   VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_2);
   if (VAR_8 < 0)
    return VAR_8;

   VAR_9 += VAR_8;
  }
  VAR_3 += 3;
  VAR_4 += 3;
  VAR_2 += 512;
 }
 return VAR_9;
}
