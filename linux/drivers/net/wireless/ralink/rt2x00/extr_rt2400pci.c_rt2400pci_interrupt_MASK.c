
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int irqmask_lock; int txstatus_tasklet; int rxdone_tasklet; int tbtt_tasklet; int flags; } ;
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
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct rt2x00_dev*,int ) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_13, void *VAR_14)
{
 struct rt2x00_dev *VAR_15 = VAR_14;
 u32 VAR_16, VAR_17;





 VAR_16 = FUNC_2(VAR_15, VAR_0);
 FUNC_3(VAR_15, VAR_0, VAR_16);

 if (!VAR_16)
  return VAR_12;

 if (!FUNC_8(VAR_10, &VAR_15->flags))
  return VAR_11;

 VAR_17 = VAR_16;




 if (FUNC_0(VAR_16, VAR_2))
  FUNC_6(&VAR_15->tbtt_tasklet);

 if (FUNC_0(VAR_16, VAR_1))
  FUNC_7(&VAR_15->rxdone_tasklet);

 if (FUNC_0(VAR_16, VAR_3) ||
     FUNC_0(VAR_16, VAR_4) ||
     FUNC_0(VAR_16, VAR_5)) {
  FUNC_7(&VAR_15->txstatus_tasklet);



  FUNC_1(&VAR_17, VAR_9, 1);
  FUNC_1(&VAR_17, VAR_7, 1);
  FUNC_1(&VAR_17, VAR_8, 1);
 }





 FUNC_4(&VAR_15->irqmask_lock);

 VAR_16 = FUNC_2(VAR_15, VAR_6);
 VAR_16 |= VAR_17;
 FUNC_3(VAR_15, VAR_6, VAR_16);

 FUNC_5(&VAR_15->irqmask_lock);



 return VAR_11;
}
