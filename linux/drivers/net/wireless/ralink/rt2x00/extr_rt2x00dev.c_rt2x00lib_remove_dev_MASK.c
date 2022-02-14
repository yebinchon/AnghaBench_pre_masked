
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int drv_data; int txstatus_fifo; scalar_t__ workqueue; int autowake_tasklet; int rxdone_tasklet; int tbtt_tasklet; int pretbtt_tasklet; int txstatus_tasklet; int txstatus_timer; int sleep_work; int autowakeup_work; int intf_work; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct rt2x00_dev*,int ) ;
 int FUNC_8 (struct rt2x00_dev*) ;
 int FUNC_9 (struct rt2x00_dev*) ;
 int FUNC_10 (struct rt2x00_dev*) ;
 int FUNC_11 (struct rt2x00_dev*) ;
 int FUNC_12 (struct rt2x00_dev*) ;
 int FUNC_13 (struct rt2x00_dev*) ;
 int FUNC_14 (struct rt2x00_dev*) ;
 int FUNC_15 (struct rt2x00_dev*) ;
 int FUNC_16 (int *) ;

void FUNC_17(struct rt2x00_dev *VAR_2)
{
 FUNC_2(VAR_0, &VAR_2->flags);




 if (!FUNC_7(VAR_2, VAR_1))
  FUNC_15(VAR_2);




 FUNC_10(VAR_2);




 FUNC_1(&VAR_2->intf_work);
 FUNC_0(&VAR_2->autowakeup_work);
 FUNC_1(&VAR_2->sleep_work);

 FUNC_4(&VAR_2->txstatus_timer);




 FUNC_16(&VAR_2->txstatus_tasklet);
 FUNC_16(&VAR_2->pretbtt_tasklet);
 FUNC_16(&VAR_2->tbtt_tasklet);
 FUNC_16(&VAR_2->rxdone_tasklet);
 FUNC_16(&VAR_2->autowake_tasklet);




 FUNC_13(VAR_2);

 if (VAR_2->workqueue)
  FUNC_3(VAR_2->workqueue);




 FUNC_5(&VAR_2->txstatus_fifo);




 FUNC_8(VAR_2);
 FUNC_9(VAR_2);




 FUNC_12(VAR_2);




 FUNC_11(VAR_2);




 FUNC_14(VAR_2);




 FUNC_6(VAR_2->drv_data);
}
