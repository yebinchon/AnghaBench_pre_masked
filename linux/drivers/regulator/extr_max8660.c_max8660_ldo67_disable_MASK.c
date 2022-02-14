
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct max8660 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct max8660*,int ,int,int ) ;
 struct max8660* FUNC_1 (struct regulator_dev*) ;
 scalar_t__ FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_2)
{
 struct max8660 *VAR_3 = FUNC_1(VAR_2);
 u8 VAR_4 = (FUNC_2(VAR_2) == VAR_1) ? ~2 : ~4;

 return FUNC_0(VAR_3, VAR_0, VAR_4, 0);
}
