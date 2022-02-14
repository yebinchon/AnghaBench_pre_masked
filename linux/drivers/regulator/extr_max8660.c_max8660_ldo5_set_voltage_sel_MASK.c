
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct max8660 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct max8660*,int ,int,int) ;
 struct max8660* FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_2,
     unsigned int VAR_3)
{
 struct max8660 *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_0, 0, VAR_3);
 if (VAR_5)
  return VAR_5;


 return FUNC_0(VAR_4, VAR_1, 0xff, 0xc0);
}
