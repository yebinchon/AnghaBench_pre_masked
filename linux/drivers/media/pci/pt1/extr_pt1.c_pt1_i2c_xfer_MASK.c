
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pt1 {int dummy; } ;
struct i2c_msg {int flags; int len; int* buf; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pt1* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct pt1*,int*) ;
 int FUNC_2 (struct pt1*,int) ;
 int FUNC_3 (struct pt1*,int,int*,struct i2c_msg*) ;
 int FUNC_4 (struct pt1*,int,int*,struct i2c_msg*) ;
 int FUNC_5 (struct pt1*,int) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_2, struct i2c_msg *VAR_3, int VAR_4)
{
 struct pt1 *VAR_5;
 int VAR_6;
 struct i2c_msg *VAR_7, *VAR_8;
 int VAR_9, VAR_10;
 u16 VAR_11;
 u32 VAR_12;

 VAR_5 = FUNC_0(VAR_2);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_7 = &VAR_3[VAR_6];
  if (VAR_7->flags & VAR_1)
   return -VAR_0;

  if (VAR_6 + 1 < VAR_4)
   VAR_8 = &VAR_3[VAR_6 + 1];
  else
   VAR_8 = ((void*)0);

  if (VAR_8 && VAR_8->flags & VAR_1) {
   VAR_6++;

   VAR_11 = VAR_8->len;
   if (VAR_11 > 4)
    return -VAR_0;

   FUNC_1(VAR_5, &VAR_9);
   FUNC_4(VAR_5, VAR_9, &VAR_9, VAR_7);
   FUNC_3(VAR_5, VAR_9, &VAR_9, VAR_8);
   VAR_10 = FUNC_2(VAR_5, VAR_9);
   if (VAR_10 < 0)
    return VAR_10;

   VAR_12 = FUNC_5(VAR_5, 2);
   while (VAR_11--) {
    VAR_8->buf[VAR_11] = VAR_12;
    VAR_12 >>= 8;
   }
  } else {
   FUNC_1(VAR_5, &VAR_9);
   FUNC_4(VAR_5, VAR_9, &VAR_9, VAR_7);
   VAR_10 = FUNC_2(VAR_5, VAR_9);
   if (VAR_10 < 0)
    return VAR_10;
  }
 }

 return VAR_4;
}
