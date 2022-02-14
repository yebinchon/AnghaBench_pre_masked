
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int options; } ;
struct omap_nand_info {int buf_len; TYPE_1__ nand; int gpmc_cs; int comp; int gpmc_irq_fifo; int gpmc_irq_count; int * buf; int iomode; } ;
struct nand_chip {int dummy; } ;
struct mtd_info {int oobsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct omap_nand_info* FUNC_2 (struct mtd_info*) ;
 struct mtd_info* FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (int ,int,int,int,int,struct omap_nand_info*) ;
 int FUNC_5 (int ,struct omap_nand_info*) ;
 int FUNC_6 (struct mtd_info*,int *,int) ;
 int FUNC_7 (struct mtd_info*,int *,int) ;
 int FUNC_8 (struct nand_chip*,int *,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct nand_chip *VAR_3, u_char *VAR_4,
       int VAR_5)
{
 struct mtd_info *VAR_6 = FUNC_3(VAR_3);
 struct omap_nand_info *VAR_7 = FUNC_2(VAR_6);
 int VAR_8 = 0;

 if (VAR_5 <= VAR_6->oobsize) {
  FUNC_8(VAR_3, VAR_4, VAR_5);
  return;
 }

 VAR_7->iomode = VAR_1;
 VAR_7->buf = VAR_4;
 FUNC_1(&VAR_7->comp);


 VAR_8 = FUNC_4(VAR_7->gpmc_cs,
   VAR_2/2, 0x0, VAR_5, 0x0, VAR_7);
 if (VAR_8)

  goto out_copy;

 VAR_7->buf_len = VAR_5;

 FUNC_0(VAR_7->gpmc_irq_count);
 FUNC_0(VAR_7->gpmc_irq_fifo);


 FUNC_9(&VAR_7->comp);


 FUNC_5(VAR_7->gpmc_cs, VAR_7);
 return;

out_copy:
 if (VAR_7->nand.options & VAR_0)
  FUNC_6(VAR_6, VAR_4, VAR_5);
 else
  FUNC_7(VAR_6, VAR_4, VAR_5);
}
