
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct adv748x_state {int mutex; int txb; int txa; int hdmi; int afe; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct adv748x_state*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct adv748x_state*) ;
 struct adv748x_state* FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_0)
{
 struct adv748x_state *VAR_1 = FUNC_5(VAR_0);

 FUNC_0(&VAR_1->afe);
 FUNC_3(&VAR_1->hdmi);

 FUNC_1(&VAR_1->txa);
 FUNC_1(&VAR_1->txb);

 FUNC_4(VAR_1);
 FUNC_2(VAR_1);
 FUNC_6(&VAR_1->mutex);

 return 0;
}
