
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gb_i2c_functionality_response {int functionality; } ;
struct gb_i2c_device {int functionality; int connection; } ;
typedef int response ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int ,struct gb_i2c_functionality_response*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct gb_i2c_device *VAR_1)
{
 struct gb_i2c_functionality_response VAR_2;
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1->connection,
    VAR_0,
    ((void*)0), 0, &VAR_2, sizeof(VAR_2));
 if (VAR_4)
  return VAR_4;

 VAR_3 = FUNC_2(VAR_2.functionality);
 VAR_1->functionality = FUNC_0(VAR_3);

 return 0;
}
