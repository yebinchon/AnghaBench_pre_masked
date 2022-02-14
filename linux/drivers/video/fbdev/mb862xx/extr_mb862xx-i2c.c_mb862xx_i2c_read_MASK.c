
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int len; int * buf; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_adapter*,int *,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_adapter *VAR_1, struct i2c_msg *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 int VAR_5 = VAR_2->len - 1;

 for (VAR_3 = 0; VAR_3 < VAR_2->len; VAR_3++) {
  if (!FUNC_0(VAR_1, &VAR_2->buf[VAR_3], VAR_3 == VAR_5)) {
   VAR_4 = -VAR_0;
   break;
  }
 }
 return VAR_4;
}
