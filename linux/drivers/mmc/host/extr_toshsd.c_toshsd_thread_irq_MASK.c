
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sg_mapping_iter {unsigned short* addr; int length; int consumed; } ;
struct toshsd_host {int lock; scalar_t__ ioaddr; TYPE_2__* pdev; TYPE_1__* cmd; struct sg_mapping_iter sg_miter; struct mmc_data* data; } ;
struct mmc_data {int blksz; int flags; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (scalar_t__,unsigned short*,int) ;
 int FUNC_3 (scalar_t__,unsigned short*,int) ;
 int FUNC_4 (struct sg_mapping_iter*) ;
 int FUNC_5 (struct sg_mapping_iter*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct toshsd_host*) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_5, void *VAR_6)
{
 struct toshsd_host *VAR_7 = VAR_6;
 struct mmc_data *VAR_8 = VAR_7->data;
 struct sg_mapping_iter *VAR_9 = &VAR_7->sg_miter;
 unsigned short *VAR_10;
 int VAR_11;
 unsigned long VAR_12;

 if (!VAR_8) {
  FUNC_1(&VAR_7->pdev->dev, "Spurious Data IRQ\n");
  if (VAR_7->cmd) {
   VAR_7->cmd->error = -VAR_0;
   FUNC_8(VAR_7);
  }
  return VAR_2;
 }
 FUNC_6(&VAR_7->lock, VAR_12);

 if (!FUNC_4(VAR_9))
  goto done;

 VAR_10 = VAR_9->addr;




 VAR_11 = VAR_9->length;
 if (VAR_11 > VAR_8->blksz)
  VAR_11 = VAR_8->blksz;

 FUNC_0(&VAR_7->pdev->dev, "count: %08x, flags %08x\n", VAR_11,
  VAR_8->flags);


 if (VAR_8->flags & VAR_3)
  FUNC_2(VAR_7->ioaddr + VAR_4, VAR_10, VAR_11 >> 2);
 else
  FUNC_3(VAR_7->ioaddr + VAR_4, VAR_10, VAR_11 >> 2);

 VAR_9->consumed = VAR_11;
 FUNC_5(VAR_9);

done:
 FUNC_7(&VAR_7->lock, VAR_12);

 return VAR_1;
}
