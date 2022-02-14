
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct tifm_sd {size_t sg_pos; size_t sg_len; int cmd_flags; unsigned int block_pos; struct scatterlist bounce_buf; struct tifm_dev* dev; } ;
struct tifm_dev {scalar_t__ addr; int dev; } ;
struct mmc_data {unsigned int blksz; int flags; struct scatterlist* sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 unsigned int FUNC_3 (struct scatterlist*) ;
 unsigned int FUNC_4 (struct scatterlist*) ;
 int FUNC_5 (struct tifm_sd*,struct mmc_data*) ;
 int FUNC_6 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct tifm_sd *VAR_7, struct mmc_data *VAR_8)
{
 struct tifm_dev *VAR_9 = VAR_7->dev;
 unsigned int VAR_10 = VAR_5 * VAR_8->blksz;
 unsigned int VAR_11, VAR_12, VAR_13;
 struct scatterlist *VAR_14 = ((void*)0);
 unsigned long VAR_15;

 if (VAR_7->sg_pos == VAR_7->sg_len)
  return 1;

 if (VAR_7->cmd_flags & VAR_0) {
  VAR_7->cmd_flags &= ~VAR_0;
  FUNC_2(VAR_15);
  FUNC_5(VAR_7, VAR_8);
  FUNC_1(VAR_15);
  if (VAR_7->sg_pos == VAR_7->sg_len)
   return 1;
 }

 VAR_11 = FUNC_4(&VAR_8->sg[VAR_7->sg_pos]) - VAR_7->block_pos;
 if (!VAR_11) {
  VAR_7->block_pos = 0;
  VAR_7->sg_pos++;
  if (VAR_7->sg_pos == VAR_7->sg_len)
   return 1;
  VAR_11 = FUNC_4(&VAR_8->sg[VAR_7->sg_pos]);
 }

 if (VAR_11 < VAR_10) {
  VAR_12 = VAR_11 / VAR_8->blksz;
  VAR_13 = VAR_7->block_pos;
  VAR_7->block_pos += VAR_12 * VAR_8->blksz;
 } else {
  VAR_12 = VAR_5;
  VAR_13 = VAR_7->block_pos;
  VAR_7->block_pos += VAR_10;
 }

 if (VAR_12)
  VAR_14 = &VAR_8->sg[VAR_7->sg_pos];
 else if (VAR_11) {
  if (VAR_8->flags & VAR_1) {
   FUNC_2(VAR_15);
   FUNC_5(VAR_7, VAR_8);
   FUNC_1(VAR_15);
  } else
   VAR_7->cmd_flags |= VAR_0;

  VAR_14 = &VAR_7->bounce_buf;
  VAR_13 = 0;
  VAR_12 = 1;
 } else
  return 1;

 FUNC_0(&VAR_9->dev, "setting dma for %d blocks\n", VAR_12);
 FUNC_6(FUNC_3(VAR_14) + VAR_13, VAR_9->addr + VAR_2);
 if (VAR_8->flags & VAR_1)
  FUNC_6((VAR_12 << 8) | VAR_6 | VAR_4,
         VAR_9->addr + VAR_3);
 else
  FUNC_6((VAR_12 << 8) | VAR_4,
         VAR_9->addr + VAR_3);

 return 0;
}
