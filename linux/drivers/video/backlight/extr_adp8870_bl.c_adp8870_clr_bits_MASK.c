
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct i2c_client {int dummy; } ;
struct adp8870_bl {int lock; } ;


 int FUNC_0 (struct i2c_client*,int,int*) ;
 int FUNC_1 (struct i2c_client*,int,int) ;
 struct adp8870_bl* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0, int VAR_1, uint8_t VAR_2)
{
 struct adp8870_bl *VAR_3 = FUNC_2(VAR_0);
 uint8_t VAR_4;
 int VAR_5;

 FUNC_3(&VAR_3->lock);

 VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_4);

 if (!VAR_5 && (VAR_4 & VAR_2)) {
  VAR_4 &= ~VAR_2;
  VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_4);
 }

 FUNC_4(&VAR_3->lock);
 return VAR_5;
}
