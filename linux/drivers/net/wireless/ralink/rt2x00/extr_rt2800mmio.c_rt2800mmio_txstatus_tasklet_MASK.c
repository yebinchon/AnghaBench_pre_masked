
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int txstatus_tasklet; int txstatus_fifo; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rt2x00_dev*,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(unsigned long VAR_0)
{
 struct rt2x00_dev *VAR_1 = (struct rt2x00_dev *)VAR_0;

 FUNC_1(VAR_1, 16);

 if (!FUNC_0(&VAR_1->txstatus_fifo))
  FUNC_2(&VAR_1->txstatus_tasklet);

}
