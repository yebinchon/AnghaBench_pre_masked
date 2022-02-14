
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m {int init_mutex; scalar_t__ alive; scalar_t__ updown; } ;


 int FUNC_0 (struct i2400m*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

__attribute__((used)) static
void FUNC_4(struct i2400m *VAR_0)
{
 FUNC_1(&VAR_0->init_mutex);
 if (VAR_0->updown) {
  FUNC_0(VAR_0);
  VAR_0->updown = 0;
  VAR_0->alive = 0;
  FUNC_3();
 }
 FUNC_2(&VAR_0->init_mutex);
}
