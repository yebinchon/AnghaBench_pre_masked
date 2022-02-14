
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int flags; int txstatus_timer; int txdone_work; int workqueue; int txstatus_fifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (struct rt2x00_dev*) ;
 scalar_t__ FUNC_5 (struct rt2x00_dev*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct rt2x00_dev*,char*,...) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static bool FUNC_9(struct rt2x00_dev *VAR_4,
       int VAR_5, u32 VAR_6)
{
 bool VAR_7;

 if (VAR_5) {
  FUNC_7(VAR_4, "TX status read failed %d\n",
       VAR_5);

  goto stop_reading;
 }

 VAR_7 = FUNC_6(VAR_6, VAR_3);
 if (VAR_7) {
  if (!FUNC_2(&VAR_4->txstatus_fifo, VAR_6))
   FUNC_7(VAR_4, "TX status FIFO overrun\n");

  FUNC_3(VAR_4->workqueue, &VAR_4->txdone_work);


  return 1;
 }


 if (FUNC_5(VAR_4))
  FUNC_3(VAR_4->workqueue, &VAR_4->txdone_work);

 if (FUNC_4(VAR_4)) {

  FUNC_1(&VAR_4->txstatus_timer,
         VAR_1,
         VAR_0);
  return 0;
 }

stop_reading:
 FUNC_0(VAR_2, &VAR_4->flags);





 if (FUNC_4(VAR_4) &&
     !FUNC_8(VAR_2, &VAR_4->flags))
  return 1;
 else
  return 0;
}
