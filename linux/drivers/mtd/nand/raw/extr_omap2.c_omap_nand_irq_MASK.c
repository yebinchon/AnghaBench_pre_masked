
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int IO_ADDR_R; int IO_ADDR_W; } ;
struct TYPE_6__ {TYPE_2__ legacy; } ;
struct TYPE_4__ {int gpmc_prefetch_status; } ;
struct omap_nand_info {scalar_t__ iomode; int gpmc_irq_count; int buf_len; int gpmc_irq_fifo; int comp; scalar_t__ buf; TYPE_3__ nand; TYPE_1__ reg; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 struct omap_nand_info *VAR_4 = (struct omap_nand_info *) VAR_3;
 u32 VAR_5;

 VAR_5 = FUNC_5(VAR_4->reg.gpmc_prefetch_status);
 VAR_5 = FUNC_0(VAR_5);
 VAR_5 = VAR_5 & 0xFFFC;
 if (VAR_4->iomode == VAR_1) {
  if (VAR_2 == VAR_4->gpmc_irq_count)
   goto done;

  if (VAR_4->buf_len && (VAR_4->buf_len < VAR_5))
   VAR_5 = VAR_4->buf_len;
  else if (!VAR_4->buf_len)
   VAR_5 = 0;
  FUNC_4(VAR_4->nand.legacy.IO_ADDR_W, (u32 *)VAR_4->buf,
         VAR_5 >> 2);
  VAR_4->buf = VAR_4->buf + VAR_5;
  VAR_4->buf_len -= VAR_5;

 } else {
  FUNC_3(VAR_4->nand.legacy.IO_ADDR_R, (u32 *)VAR_4->buf,
        VAR_5 >> 2);
  VAR_4->buf = VAR_4->buf + VAR_5;

  if (VAR_2 == VAR_4->gpmc_irq_count)
   goto done;
 }

 return VAR_0;

done:
 FUNC_1(&VAR_4->comp);

 FUNC_2(VAR_4->gpmc_irq_fifo);
 FUNC_2(VAR_4->gpmc_irq_count);

 return VAR_0;
}
