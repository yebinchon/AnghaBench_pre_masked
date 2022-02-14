
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct regulator_dev {int dummy; } ;
struct lp3972 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct lp3972*,int ) ;
 struct lp3972* FUNC_4 (struct regulator_dev*) ;
 int FUNC_5 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_1)
{
 struct lp3972 *VAR_2 = FUNC_4(VAR_1);
 int VAR_3 = FUNC_5(VAR_1) - VAR_0;
 u16 VAR_4 = FUNC_2(VAR_3);
 u16 VAR_5, VAR_6;

 VAR_6 = FUNC_3(VAR_2, FUNC_0(VAR_3));
 VAR_5 = (VAR_6 >> FUNC_1(VAR_3)) & VAR_4;

 return VAR_5;
}
