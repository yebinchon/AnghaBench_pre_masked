
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rs5c372 {unsigned char* regs; int has_irq; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 unsigned char VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (struct device*,char*) ;
 struct rs5c372* FUNC_2 (struct i2c_client*) ;
 scalar_t__ FUNC_3 (struct i2c_client*,int,unsigned char) ;
 int FUNC_4 (struct rs5c372*) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_4, unsigned int VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_5(VAR_4);
 struct rs5c372 *VAR_7 = FUNC_2(VAR_6);
 unsigned char VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = VAR_7->regs[VAR_3];

 if (!VAR_7->has_irq)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_10 = FUNC_0(VAR_3);
 if (VAR_5)
  VAR_8 |= VAR_2;
 else
  VAR_8 &= ~VAR_2;

 if (FUNC_3(VAR_6, VAR_10, VAR_8) < 0) {
  FUNC_1(VAR_4, "can't update alarm\n");
  VAR_9 = -VAR_1;
 } else
  VAR_7->regs[VAR_3] = VAR_8;

 return VAR_9;
}
