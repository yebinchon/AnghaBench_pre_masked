
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; } ;
struct regulator_dev {TYPE_1__ mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct regulator_dev*,int,int *) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct regulator_dev*,char*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_6)
{
 int VAR_7 = 0;

 FUNC_2(&VAR_6->mutex.base);

 VAR_7 = FUNC_0(VAR_6, VAR_4 |
   VAR_5, ((void*)0));
 if (VAR_7 & VAR_1)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7 < 0) {
  FUNC_3(VAR_6, "failed to force disable\n");
  FUNC_0(VAR_6, VAR_4 |
    VAR_2, ((void*)0));
  return VAR_7;
 }

 FUNC_0(VAR_6, VAR_4 |
   VAR_3, ((void*)0));

 return 0;
}
