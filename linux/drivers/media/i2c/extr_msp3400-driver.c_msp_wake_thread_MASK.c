
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp_state {int restart; int wq; scalar_t__ watch_stereo; int * kthread; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*) ;
 struct msp_state* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_0)
{
 struct msp_state *VAR_1 = FUNC_1(FUNC_0(VAR_0));

 if (((void*)0) == VAR_1->kthread)
  return;
 VAR_1->watch_stereo = 0;
 VAR_1->restart = 1;
 FUNC_2(&VAR_1->wq);
}
