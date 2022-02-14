
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int tbtt_tasklet; int autowake_tasklet; int rxdone_tasklet; int txstatus_tasklet; int irqmask_lock; } ;
typedef enum dev_state { ____Placeholder_dev_state } dev_state ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct rt2x00_dev *VAR_20,
          enum dev_state VAR_21)
{
 int VAR_22 = (VAR_21 == VAR_18);
 u32 VAR_23;
 unsigned long VAR_24;





 if (VAR_21 == VAR_19) {
  VAR_23 = FUNC_1(VAR_20, VAR_6);
  FUNC_2(VAR_20, VAR_6, VAR_23);

  VAR_23 = FUNC_1(VAR_20, VAR_17);
  FUNC_2(VAR_20, VAR_17, VAR_23);
 }





 FUNC_3(&VAR_20->irqmask_lock, VAR_24);

 VAR_23 = FUNC_1(VAR_20, VAR_0);
 FUNC_0(&VAR_23, VAR_5, VAR_22);
 FUNC_0(&VAR_23, VAR_4, VAR_22);
 FUNC_0(&VAR_23, VAR_1, VAR_22);
 FUNC_0(&VAR_23, VAR_2, VAR_22);
 FUNC_0(&VAR_23, VAR_3, 0xff);
 FUNC_2(VAR_20, VAR_0, VAR_23);

 VAR_23 = FUNC_1(VAR_20, VAR_7);
 FUNC_0(&VAR_23, VAR_8, VAR_22);
 FUNC_0(&VAR_23, VAR_9, VAR_22);
 FUNC_0(&VAR_23, VAR_10, VAR_22);
 FUNC_0(&VAR_23, VAR_11, VAR_22);
 FUNC_0(&VAR_23, VAR_12, VAR_22);
 FUNC_0(&VAR_23, VAR_13, VAR_22);
 FUNC_0(&VAR_23, VAR_14, VAR_22);
 FUNC_0(&VAR_23, VAR_15, VAR_22);
 FUNC_0(&VAR_23, VAR_16, VAR_22);
 FUNC_2(VAR_20, VAR_7, VAR_23);

 FUNC_4(&VAR_20->irqmask_lock, VAR_24);

 if (VAR_21 == VAR_18) {



  FUNC_5(&VAR_20->txstatus_tasklet);
  FUNC_5(&VAR_20->rxdone_tasklet);
  FUNC_5(&VAR_20->autowake_tasklet);
  FUNC_5(&VAR_20->tbtt_tasklet);
 }
}
