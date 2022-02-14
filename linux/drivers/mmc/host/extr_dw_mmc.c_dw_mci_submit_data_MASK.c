
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_data {int flags; scalar_t__ blksz; int * sg; int sg_len; int error; } ;
struct dw_mci {int fifoth_val; scalar_t__ prev_blksz; scalar_t__ wm_aligned; int irq_lock; scalar_t__ part_buf_count; scalar_t__ part_buf_start; int * sg; int sg_miter; struct mmc_data* data; int dir_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct mmc_data*) ;
 int FUNC_1 (struct dw_mci*,struct mmc_data*) ;
 int FUNC_2 (struct dw_mci*,struct mmc_data*) ;
 scalar_t__ FUNC_3 (struct dw_mci*,struct mmc_data*) ;
 int FUNC_4 (struct dw_mci*,int ) ;
 int FUNC_5 (struct dw_mci*,int ,int) ;
 int FUNC_6 (int *,int *,int ,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct dw_mci *VAR_14, struct mmc_data *VAR_15)
{
 unsigned long VAR_16;
 int VAR_17 = VAR_11;
 u32 VAR_18;

 VAR_15->error = -VAR_3;

 FUNC_0(VAR_14->data);
 VAR_14->sg = ((void*)0);
 VAR_14->data = VAR_15;

 if (VAR_15->flags & VAR_6)
  VAR_14->dir_status = VAR_1;
 else
  VAR_14->dir_status = VAR_2;

 FUNC_2(VAR_14, VAR_15);

 if (FUNC_3(VAR_14, VAR_15)) {
  if (VAR_14->data->flags & VAR_6)
   VAR_17 |= VAR_13;
  else
   VAR_17 |= VAR_12;

  FUNC_6(&VAR_14->sg_miter, VAR_15->sg, VAR_15->sg_len, VAR_17);
  VAR_14->sg = VAR_15->sg;
  VAR_14->part_buf_start = 0;
  VAR_14->part_buf_count = 0;

  FUNC_5(VAR_14, VAR_7, VAR_10 | VAR_9);

  FUNC_7(&VAR_14->irq_lock, VAR_16);
  VAR_18 = FUNC_4(VAR_14, VAR_5);
  VAR_18 |= VAR_10 | VAR_9;
  FUNC_5(VAR_14, VAR_5, VAR_18);
  FUNC_8(&VAR_14->irq_lock, VAR_16);

  VAR_18 = FUNC_4(VAR_14, VAR_0);
  VAR_18 &= ~VAR_8;
  FUNC_5(VAR_14, VAR_0, VAR_18);







  if (VAR_14->wm_aligned)
   FUNC_1(VAR_14, VAR_15);
  else
   FUNC_5(VAR_14, VAR_4, VAR_14->fifoth_val);
  VAR_14->prev_blksz = 0;
 } else {





  VAR_14->prev_blksz = VAR_15->blksz;
 }
}
