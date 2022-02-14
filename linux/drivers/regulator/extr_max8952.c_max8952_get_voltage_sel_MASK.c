
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct max8952_data {scalar_t__ vid1; scalar_t__ vid0; } ;


 struct max8952_data* FUNC_0 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_0)
{
 struct max8952_data *VAR_1 = FUNC_0(VAR_0);
 u8 VAR_2 = 0;

 if (VAR_1->vid0)
  VAR_2 += 1;
 if (VAR_1->vid1)
  VAR_2 += 2;

 return VAR_2;
}
