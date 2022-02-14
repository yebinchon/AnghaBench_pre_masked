
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
typedef void* u32 ;
typedef int u16 ;
struct TYPE_6__ {int gpmc_prefetch_status; } ;
struct TYPE_4__ {int IO_ADDR_W; } ;
struct TYPE_5__ {int options; TYPE_1__ legacy; } ;
struct omap_nand_info {int gpmc_cs; TYPE_3__ reg; TYPE_2__ nand; } ;
struct nand_chip {int dummy; } ;
struct mtd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_4 (int ) ;
 struct omap_nand_info* FUNC_5 (struct mtd_info*) ;
 struct mtd_info* FUNC_6 (struct nand_chip*) ;
 int FUNC_7 (int ,int ,int,int,int,struct omap_nand_info*) ;
 int FUNC_8 (int ,struct omap_nand_info*) ;
 int FUNC_9 (struct mtd_info*,int *,int) ;
 int FUNC_10 (struct mtd_info*,int *,int) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (int const,int ) ;

__attribute__((used)) static void FUNC_13(struct nand_chip *VAR_4, const u_char *VAR_5,
    int VAR_6)
{
 struct mtd_info *VAR_7 = FUNC_6(VAR_4);
 struct omap_nand_info *VAR_8 = FUNC_5(VAR_7);
 uint32_t VAR_9 = 0;
 int VAR_10 = 0, VAR_11 = 0;
 u16 *VAR_12 = (u16 *)VAR_5;
 unsigned long VAR_13, VAR_14;
 u32 VAR_15;


 if (VAR_6 % 2 != 0) {
  FUNC_12(*VAR_5, VAR_8->nand.legacy.IO_ADDR_W);
  VAR_12 = (u16 *)(VAR_5 + 1);
  VAR_6--;
 }


 VAR_11 = FUNC_7(VAR_8->gpmc_cs,
   VAR_2, 0x0, VAR_6, 0x1, VAR_8);
 if (VAR_11) {

  if (VAR_8->nand.options & VAR_0)
   FUNC_9(VAR_7, (u_char *)VAR_12, VAR_6);
  else
   FUNC_10(VAR_7, (u_char *)VAR_12, VAR_6);
 } else {
  while (VAR_6) {
   VAR_9 = FUNC_11(VAR_8->reg.gpmc_prefetch_status);
   VAR_9 = FUNC_1(VAR_9);
   VAR_9 = VAR_9 >> 1;
   for (VAR_10 = 0; (VAR_10 < VAR_9) && VAR_6; VAR_10++, VAR_6 -= 2)
    FUNC_3(*VAR_12++, VAR_8->nand.legacy.IO_ADDR_W);
  }

  VAR_13 = 0;
  VAR_14 = (VAR_3 *
     FUNC_4(VAR_1));
  do {
   FUNC_2();
   VAR_15 = FUNC_11(VAR_8->reg.gpmc_prefetch_status);
   VAR_15 = FUNC_0(VAR_15);
  } while (VAR_15 && (VAR_13++ < VAR_14));


  FUNC_8(VAR_8->gpmc_cs, VAR_8);
 }
}
