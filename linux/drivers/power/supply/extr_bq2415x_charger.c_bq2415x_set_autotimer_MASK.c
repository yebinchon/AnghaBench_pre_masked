
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq2415x_device {int autotimer; int work; int * timer_error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bq2415x_device*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(struct bq2415x_device *VAR_4, int VAR_5)
{
 FUNC_2(&VAR_3);

 if (VAR_4->autotimer == VAR_5) {
  FUNC_3(&VAR_3);
  return;
 }

 VAR_4->autotimer = VAR_5;

 if (VAR_5) {
  FUNC_4(&VAR_4->work, VAR_1 * VAR_2);
  FUNC_0(VAR_4, VAR_0);
  VAR_4->timer_error = ((void*)0);
 } else {
  FUNC_1(&VAR_4->work);
 }

 FUNC_3(&VAR_3);
}
