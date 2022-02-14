
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_chip {int osc_status; int osc_vote; int osc_lock; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct pm860x_chip* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct i2c_client*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_6)
{
 struct pm860x_chip *VAR_7 = FUNC_0(VAR_6);

 FUNC_1(&VAR_7->osc_lock);


 FUNC_2(VAR_6, VAR_3, VAR_4, 0);

 FUNC_2(VAR_6, VAR_0, VAR_1, 0);

 VAR_7->osc_vote = VAR_5;
 VAR_7->osc_status = VAR_2;
}
