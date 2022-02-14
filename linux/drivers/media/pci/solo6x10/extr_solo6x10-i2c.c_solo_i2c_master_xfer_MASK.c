
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {int i2c_id; int i2c_msg_num; scalar_t__ i2c_state; int i2c_mutex; int i2c_wait; scalar_t__ i2c_msg_ptr; struct i2c_msg* i2c_msg; struct i2c_adapter* i2c_adap; } ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {struct solo_dev* algo_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ) ;
 unsigned long FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct solo_dev*) ;
 int FUNC_8 (struct solo_dev*,int ) ;
 int FUNC_9 (struct solo_dev*,int ,int ) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_10(struct i2c_adapter *VAR_9,
    struct i2c_msg VAR_10[], int VAR_11)
{
 struct solo_dev *VAR_12 = VAR_9->algo_data;
 unsigned long VAR_13;
 int VAR_14;
 int VAR_15;
 FUNC_0(VAR_8);

 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
  if (&VAR_12->i2c_adap[VAR_15] == VAR_9)
   break;
 }

 if (VAR_15 == VAR_3)
  return VAR_11;

 FUNC_2(&VAR_12->i2c_mutex);
 VAR_12->i2c_id = VAR_15;
 VAR_12->i2c_msg = VAR_10;
 VAR_12->i2c_msg_num = VAR_11;
 VAR_12->i2c_msg_ptr = 0;

 FUNC_9(VAR_12, VAR_4, 0);
 FUNC_8(VAR_12, VAR_5);
 FUNC_7(VAR_12);

 VAR_13 = VAR_0 / 2;

 for (;;) {
  FUNC_4(&VAR_12->i2c_wait, &VAR_8,
    VAR_6);

  if (VAR_12->i2c_state == VAR_2)
   break;

  VAR_13 = FUNC_5(VAR_13);
  if (!VAR_13)
   break;

  if (FUNC_6(VAR_7))
   break;
 }

 FUNC_1(&VAR_12->i2c_wait, &VAR_8);
 VAR_14 = VAR_11 - VAR_12->i2c_msg_num;
 VAR_12->i2c_state = VAR_1;
 VAR_12->i2c_id = -1;

 FUNC_3(&VAR_12->i2c_mutex);

 return VAR_14;
}
