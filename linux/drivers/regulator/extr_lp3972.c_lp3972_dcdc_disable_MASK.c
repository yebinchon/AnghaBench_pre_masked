
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct regulator_dev {int dummy; } ;
struct lp3972 {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct lp3972*,int ,int,int ) ;
 struct lp3972* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_1)
{
 struct lp3972 *VAR_2 = FUNC_2(VAR_1);
 int VAR_3 = FUNC_3(VAR_1) - VAR_0;
 u16 VAR_4 = 1 << (VAR_3 * 2);
 u16 VAR_5;

 VAR_5 = FUNC_1(VAR_2, FUNC_0(VAR_3),
    VAR_4, 0);
 return VAR_5;
}
