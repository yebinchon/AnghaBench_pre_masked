
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int dummy; } ;
struct ivtv {int i2c_bus_lock; } ;
struct i2c_msg {int flags; int len; int buf; int addr; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 struct v4l2_device* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct ivtv*,int ,int ,int ) ;
 int FUNC_2 (struct ivtv*,int ,int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ivtv* FUNC_5 (struct v4l2_device*) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_1, struct i2c_msg *VAR_2, int VAR_3)
{
 struct v4l2_device *VAR_4 = FUNC_0(VAR_1);
 struct ivtv *VAR_5 = FUNC_5(VAR_4);
 int VAR_6;
 int VAR_7;

 FUNC_3(&VAR_5->i2c_bus_lock);
 for (VAR_7 = VAR_6 = 0; VAR_6 == 0 && VAR_7 < VAR_3; VAR_7++) {
  if (VAR_2[VAR_7].flags & VAR_0)
   VAR_6 = FUNC_1(VAR_5, VAR_2[VAR_7].addr, VAR_2[VAR_7].buf, VAR_2[VAR_7].len);
  else {

   int VAR_8 = !(VAR_7 + 1 < VAR_3 && VAR_2[VAR_7 + 1].flags == VAR_0);

   VAR_6 = FUNC_2(VAR_5, VAR_2[VAR_7].addr, VAR_2[VAR_7].buf, VAR_2[VAR_7].len, VAR_8);
  }
 }
 FUNC_4(&VAR_5->i2c_bus_lock);
 return VAR_6 ? VAR_6 : VAR_3;
}
