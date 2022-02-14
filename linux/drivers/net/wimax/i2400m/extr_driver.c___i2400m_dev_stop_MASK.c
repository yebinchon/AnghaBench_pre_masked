
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {int dummy; } ;
struct i2400m {int work_queue; int (* bus_dev_stop ) (struct i2400m*) ;scalar_t__ ready; int msg_completion; struct wimax_dev wimax_dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*) ;
 int FUNC_2 (int,struct device*,char*,struct i2400m*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct device* FUNC_5 (struct i2400m*) ;
 int FUNC_6 (struct i2400m*) ;
 int FUNC_7 (struct i2400m*,int ) ;
 int FUNC_8 (struct i2400m*) ;
 int FUNC_9 (struct i2400m*) ;
 int FUNC_10 (struct i2400m*) ;
 int FUNC_11 (struct i2400m*) ;
 int FUNC_12 (struct wimax_dev*,int ) ;
 int FUNC_13 () ;

__attribute__((used)) static
void FUNC_14(struct i2400m *VAR_3)
{
 struct wimax_dev *VAR_4 = &VAR_3->wimax_dev;
 struct device *VAR_5 = FUNC_5(VAR_3);

 FUNC_2(3, VAR_5, "(i2400m %p)\n", VAR_3);
 FUNC_12(VAR_4, VAR_2);
 FUNC_7(VAR_3, -VAR_0);
 FUNC_0(&VAR_3->msg_completion);
 FUNC_8(VAR_3);
 FUNC_6(VAR_3);




 VAR_3->ready = 0;
 FUNC_13();
 FUNC_4(VAR_3->work_queue);

 if (VAR_3->bus_dev_stop)
  VAR_3->bus_dev_stop(VAR_3);
 FUNC_3(VAR_3->work_queue);
 FUNC_9(VAR_3);
 FUNC_10(VAR_3);
 FUNC_12(VAR_4, VAR_1);
 FUNC_1(3, VAR_5, "(i2400m %p) = 0\n", VAR_3);
}
