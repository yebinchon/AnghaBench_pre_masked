
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {int options; } ;
struct TYPE_3__ {int gpmc_prefetch_status; } ;
struct omap_nand_info {int buf_len; TYPE_2__ nand; int gpmc_cs; TYPE_1__ reg; int comp; int gpmc_irq_fifo; int gpmc_irq_count; int * buf; int iomode; } ;
struct nand_chip {int dummy; } ;
struct mtd_info {int oobsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_4 (int ) ;
 struct omap_nand_info* FUNC_5 (struct mtd_info*) ;
 struct mtd_info* FUNC_6 (struct nand_chip*) ;
 int FUNC_7 (int ,int,int,int,int,struct omap_nand_info*) ;
 int FUNC_8 (int ,struct omap_nand_info*) ;
 int FUNC_9 (struct mtd_info*,int const*,int) ;
 int FUNC_10 (struct mtd_info*,int const*,int) ;
 int FUNC_11 (struct nand_chip*,int const*,int) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct nand_chip *VAR_5, const u_char *VAR_6,
        int VAR_7)
{
 struct mtd_info *VAR_8 = FUNC_6(VAR_5);
 struct omap_nand_info *VAR_9 = FUNC_5(VAR_8);
 int VAR_10 = 0;
 unsigned long VAR_11, VAR_12;
 u32 VAR_13;

 if (VAR_7 <= VAR_8->oobsize) {
  FUNC_11(VAR_5, VAR_6, VAR_7);
  return;
 }

 VAR_9->iomode = VAR_1;
 VAR_9->buf = (u_char *) VAR_6;
 FUNC_3(&VAR_9->comp);


 VAR_10 = FUNC_7(VAR_9->gpmc_cs,
  (VAR_3 * 3) / 8, 0x0, VAR_7, 0x1, VAR_9);
 if (VAR_10)

  goto out_copy;

 VAR_9->buf_len = VAR_7;

 FUNC_2(VAR_9->gpmc_irq_count);
 FUNC_2(VAR_9->gpmc_irq_fifo);


 FUNC_13(&VAR_9->comp);


 VAR_11 = 0;
 VAR_12 = (VAR_4 * FUNC_4(VAR_2));
 do {
  VAR_13 = FUNC_12(VAR_9->reg.gpmc_prefetch_status);
  VAR_13 = FUNC_0(VAR_13);
  FUNC_1();
 } while (VAR_13 && (VAR_11++ < VAR_12));


 FUNC_8(VAR_9->gpmc_cs, VAR_9);
 return;

out_copy:
 if (VAR_9->nand.options & VAR_0)
  FUNC_9(VAR_8, VAR_6, VAR_7);
 else
  FUNC_10(VAR_8, VAR_6, VAR_7);
}
