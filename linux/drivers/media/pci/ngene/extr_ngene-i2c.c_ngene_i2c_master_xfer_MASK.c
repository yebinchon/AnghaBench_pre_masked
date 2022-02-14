
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ngene_channel {int number; struct ngene* dev; } ;
struct ngene {int i2c_switch_mutex; } ;
struct i2c_msg {int flags; int len; int * buf; int addr; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ngene*,int ,int *,int ,int *,int ,int ) ;
 int FUNC_4 (struct ngene*,int ,int *,int ) ;
 int FUNC_5 (struct ngene*,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_2,
     struct i2c_msg VAR_3[], int VAR_4)
{
 struct ngene_channel *VAR_5 =
  (struct ngene_channel *)FUNC_0(VAR_2);
 struct ngene *VAR_6 = VAR_5->dev;

 FUNC_1(&VAR_6->i2c_switch_mutex);
 FUNC_5(VAR_6, VAR_5->number);

 if (VAR_4 == 2 && VAR_3[1].flags & VAR_1 && !(VAR_3[0].flags & VAR_1))
  if (!FUNC_3(VAR_6, VAR_3[0].addr,
         VAR_3[0].buf, VAR_3[0].len,
         VAR_3[1].buf, VAR_3[1].len, 0))
   goto done;

 if (VAR_4 == 1 && !(VAR_3[0].flags & VAR_1))
  if (!FUNC_4(VAR_6, VAR_3[0].addr,
          VAR_3[0].buf, VAR_3[0].len))
   goto done;
 if (VAR_4 == 1 && (VAR_3[0].flags & VAR_1))
  if (!FUNC_3(VAR_6, VAR_3[0].addr, ((void*)0), 0,
         VAR_3[0].buf, VAR_3[0].len, 0))
   goto done;

 FUNC_2(&VAR_6->i2c_switch_mutex);
 return -VAR_0;

done:
 FUNC_2(&VAR_6->i2c_switch_mutex);
 return VAR_4;
}
