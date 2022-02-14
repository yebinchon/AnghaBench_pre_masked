
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int open_count; int * supply; int dev; int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct regulator_dev*,int *,char*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*,char*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_2,
        struct regulator_dev *VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_2, "supplied by %s\n", FUNC_1(VAR_3));

 if (!FUNC_3(VAR_3->owner))
  return -VAR_0;

 VAR_2->supply = FUNC_0(VAR_3, &VAR_2->dev, "SUPPLY");
 if (VAR_2->supply == ((void*)0)) {
  VAR_4 = -VAR_1;
  return VAR_4;
 }
 VAR_3->open_count++;

 return 0;
}
