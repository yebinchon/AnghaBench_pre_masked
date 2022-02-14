
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int flags; int rxdone_tasklet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

void FUNC_4(unsigned long VAR_2)
{
 struct rt2x00_dev *VAR_3 = (struct rt2x00_dev *)VAR_2;
 if (FUNC_1(VAR_3))
  FUNC_2(&VAR_3->rxdone_tasklet);
 else if (FUNC_3(VAR_0, &VAR_3->flags))
  FUNC_0(VAR_3, VAR_1);
}
