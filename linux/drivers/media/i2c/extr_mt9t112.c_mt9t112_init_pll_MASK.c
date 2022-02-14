
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mt9t112_priv {TYPE_2__* info; } ;
struct i2c_client {int dummy; } ;
struct TYPE_3__ {int p7; int p6; int p5; int p4; int p3; int p2; int p1; int n; int m; } ;
struct TYPE_4__ {TYPE_1__ divider; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,struct i2c_client const*,int,int,int) ;
 int FUNC_2 (int,struct i2c_client const*,int) ;
 int FUNC_3 (int,struct i2c_client const*,int,int) ;
 int FUNC_4 (struct i2c_client const*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 struct mt9t112_priv* FUNC_5 (struct i2c_client const*) ;

__attribute__((used)) static int FUNC_6(const struct i2c_client *VAR_0)
{
 struct mt9t112_priv *VAR_1 = FUNC_5(VAR_0);
 int VAR_2, VAR_3, VAR_4;

 FUNC_1(VAR_4, VAR_0, 0x0014, 0x003, 0x0001);


 FUNC_3(VAR_4, VAR_0, 0x0014, 0x2145);


 FUNC_4(VAR_0,
     VAR_1->info->divider.m, VAR_1->info->divider.n,
     VAR_1->info->divider.p1, VAR_1->info->divider.p2,
     VAR_1->info->divider.p3, VAR_1->info->divider.p4,
     VAR_1->info->divider.p5, VAR_1->info->divider.p6,
     VAR_1->info->divider.p7);







 FUNC_3(VAR_4, VAR_0, 0x0014, 0x2525);
 FUNC_3(VAR_4, VAR_0, 0x0014, 0x2527);
 FUNC_3(VAR_4, VAR_0, 0x0014, 0x3427);
 FUNC_3(VAR_4, VAR_0, 0x0014, 0x3027);

 FUNC_0(10);






 FUNC_3(VAR_4, VAR_0, 0x0014, 0x3046);

 FUNC_3(VAR_4, VAR_0, 0x0016, 0x0400);
 FUNC_3(VAR_4, VAR_0, 0x0022, 0x0190);
 FUNC_3(VAR_4, VAR_0, 0x3B84, 0x0212);


 FUNC_3(VAR_4, VAR_0, 0x002E, 0x0500);

 FUNC_1(VAR_4, VAR_0, 0x0018, 0x0002, 0x0002);
 FUNC_1(VAR_4, VAR_0, 0x3B82, 0x0004, 0x0004);


 FUNC_1(VAR_4, VAR_0, 0x0018, 0x0004, 0x0004);


 FUNC_1(VAR_4, VAR_0, 0x0018, 0x0001, 0);

 FUNC_0(50);





 FUNC_3(VAR_4, VAR_0, 0x0614, 0x0001);
 FUNC_0(1);
 FUNC_3(VAR_4, VAR_0, 0x0614, 0x0001);
 FUNC_0(1);
 FUNC_3(VAR_4, VAR_0, 0x0614, 0x0001);
 FUNC_0(1);
 FUNC_3(VAR_4, VAR_0, 0x0614, 0x0001);
 FUNC_0(1);
 FUNC_3(VAR_4, VAR_0, 0x0614, 0x0001);
 FUNC_0(1);
 FUNC_3(VAR_4, VAR_0, 0x0614, 0x0001);
 FUNC_0(1);


 for (VAR_3 = 0; VAR_3 < 100; VAR_3++) {
  FUNC_2(VAR_2, VAR_0, 0x0018);
  if (!(VAR_2 & 0x4000))
   break;

  FUNC_0(10);
 }

 return VAR_4;
}
