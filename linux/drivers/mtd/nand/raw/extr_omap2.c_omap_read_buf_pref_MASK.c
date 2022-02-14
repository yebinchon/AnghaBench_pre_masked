
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
typedef int u32 ;
struct TYPE_5__ {int IO_ADDR_R; } ;
struct TYPE_6__ {int options; TYPE_2__ legacy; } ;
struct TYPE_4__ {int gpmc_prefetch_status; } ;
struct omap_nand_info {int gpmc_cs; TYPE_3__ nand; TYPE_1__ reg; } ;
struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int) ;
 struct omap_nand_info* FUNC_2 (struct mtd_info*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (int ,int ,int,int,int,struct omap_nand_info*) ;
 int FUNC_5 (int ,struct omap_nand_info*) ;
 int FUNC_6 (struct mtd_info*,int *,int) ;
 int FUNC_7 (struct mtd_info*,int *,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct nand_chip *VAR_2, u_char *VAR_3, int VAR_4)
{
 struct mtd_info *VAR_5 = FUNC_3(VAR_2);
 struct omap_nand_info *VAR_6 = FUNC_2(VAR_5);
 uint32_t VAR_7 = 0;
 int VAR_8 = 0;
 u32 *VAR_9 = (u32 *)VAR_3;


 if (VAR_4 % 4) {
  if (VAR_6->nand.options & VAR_0)
   FUNC_6(VAR_5, VAR_3, VAR_4 % 4);
  else
   FUNC_7(VAR_5, VAR_3, VAR_4 % 4);
  VAR_9 = (u32 *) (VAR_3 + VAR_4 % 4);
  VAR_4 -= VAR_4 % 4;
 }


 VAR_8 = FUNC_4(VAR_6->gpmc_cs,
   VAR_1, 0x0, VAR_4, 0x0, VAR_6);
 if (VAR_8) {

  if (VAR_6->nand.options & VAR_0)
   FUNC_6(VAR_5, (u_char *)VAR_9, VAR_4);
  else
   FUNC_7(VAR_5, (u_char *)VAR_9, VAR_4);
 } else {
  do {
   VAR_7 = FUNC_8(VAR_6->reg.gpmc_prefetch_status);
   VAR_7 = FUNC_0(VAR_7);
   VAR_7 = VAR_7 >> 2;
   FUNC_1(VAR_6->nand.legacy.IO_ADDR_R, VAR_9, VAR_7);
   VAR_9 += VAR_7;
   VAR_4 -= VAR_7 << 2;
  } while (VAR_4);

  FUNC_5(VAR_6->gpmc_cs, VAR_6);
 }
}
