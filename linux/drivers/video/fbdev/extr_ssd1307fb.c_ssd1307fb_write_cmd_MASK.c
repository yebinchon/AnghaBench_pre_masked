
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ssd1307fb_array {int * data; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ssd1307fb_array*) ;
 struct ssd1307fb_array* FUNC_1 (int,int ) ;
 int FUNC_2 (struct i2c_client*,struct ssd1307fb_array*,int) ;

__attribute__((used)) static inline int FUNC_3(struct i2c_client *VAR_2, u8 VAR_3)
{
 struct ssd1307fb_array *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(1, VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->data[0] = VAR_3;

 VAR_5 = FUNC_2(VAR_2, VAR_4, 1);
 FUNC_0(VAR_4);

 return VAR_5;
}
