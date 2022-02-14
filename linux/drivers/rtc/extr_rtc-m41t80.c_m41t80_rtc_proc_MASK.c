
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct m41t80_data {int features; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct m41t80_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct seq_file*,char*,char*) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, struct seq_file *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_3(VAR_3);
 struct m41t80_data *VAR_6 = FUNC_0(VAR_5);
 int VAR_7;

 if (VAR_6->features & VAR_0) {
  VAR_7 = FUNC_1(VAR_5, VAR_2);
  if (VAR_7 < 0)
   return VAR_7;
  FUNC_2(VAR_4, "battery\t\t: %s\n",
      (VAR_7 & VAR_1) ? "exhausted" : "ok");
 }
 return 0;
}
