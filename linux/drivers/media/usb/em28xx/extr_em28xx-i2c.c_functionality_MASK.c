
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_adapter {struct em28xx_i2c_bus* algo_data; } ;
struct em28xx_i2c_bus {scalar_t__ algo_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static u32 FUNC_1(struct i2c_adapter *VAR_6)
{
 struct em28xx_i2c_bus *VAR_7 = VAR_6->algo_data;

 if (VAR_7->algo_type == VAR_2 ||
     VAR_7->algo_type == VAR_0) {
  return VAR_3 | VAR_4;
 } else if (VAR_7->algo_type == VAR_1) {
  return (VAR_3 | VAR_4) &
   ~VAR_5;
 }

 FUNC_0(1, "Unknown i2c bus algorithm.\n");
 return 0;
}
