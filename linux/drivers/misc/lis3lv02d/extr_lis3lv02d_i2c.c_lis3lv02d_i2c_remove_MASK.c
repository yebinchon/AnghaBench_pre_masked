
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lis3lv02d_platform_data {int (* release_resources ) () ;} ;
struct lis3lv02d {int regulators; } ;
struct TYPE_4__ {struct lis3lv02d_platform_data* platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct TYPE_5__ {int regulators; } ;


 int FUNC_0 (int ) ;
 struct lis3lv02d* FUNC_1 (struct i2c_client*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (struct lis3lv02d*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_1)
{
 struct lis3lv02d *VAR_2 = FUNC_1(VAR_1);
 struct lis3lv02d_platform_data *VAR_3 = VAR_1->dev.platform_data;

 if (VAR_3 && VAR_3->release_resources)
  VAR_3->release_resources();

 FUNC_2(VAR_2);
 FUNC_3(&VAR_0);

 FUNC_4(FUNC_0(VAR_2->regulators),
       VAR_0.regulators);
 return 0;
}
