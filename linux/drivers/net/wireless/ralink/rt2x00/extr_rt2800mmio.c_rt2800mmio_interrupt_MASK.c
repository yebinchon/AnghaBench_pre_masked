
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int irqmask_lock; int autowake_tasklet; int rxdone_tasklet; int tbtt_tasklet; int pretbtt_tasklet; int txstatus_tasklet; int txstatus_fifo; int flags; } ;
typedef int irqreturn_t ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct rt2x00_dev*,int ) ;
 int FUNC_5 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;

irqreturn_t FUNC_11(int VAR_11, void *VAR_12)
{
 struct rt2x00_dev *VAR_13 = VAR_12;
 u32 VAR_14, VAR_15;


 VAR_14 = FUNC_4(VAR_13, VAR_3);
 FUNC_5(VAR_13, VAR_3, VAR_14);

 if (!VAR_14)
  return VAR_10;

 if (!FUNC_10(VAR_0, &VAR_13->flags))
  return VAR_9;






 VAR_15 = ~VAR_14;

 if (FUNC_2(VAR_14, VAR_8)) {
  FUNC_3(&VAR_15, VAR_2, 1);
  FUNC_1(VAR_13);
  if (!FUNC_0(&VAR_13->txstatus_fifo))
   FUNC_9(&VAR_13->txstatus_tasklet);
 }

 if (FUNC_2(VAR_14, VAR_5))
  FUNC_8(&VAR_13->pretbtt_tasklet);

 if (FUNC_2(VAR_14, VAR_7))
  FUNC_8(&VAR_13->tbtt_tasklet);

 if (FUNC_2(VAR_14, VAR_6))
  FUNC_9(&VAR_13->rxdone_tasklet);

 if (FUNC_2(VAR_14, VAR_4))
  FUNC_9(&VAR_13->autowake_tasklet);





 FUNC_6(&VAR_13->irqmask_lock);
 VAR_14 = FUNC_4(VAR_13, VAR_1);
 VAR_14 &= VAR_15;
 FUNC_5(VAR_13, VAR_1, VAR_14);
 FUNC_7(&VAR_13->irqmask_lock);

 return VAR_9;
}
