
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct lp8788_buck {int lp; } ;
typedef enum lp8788_buck_id { ____Placeholder_lp8788_buck_id } lp8788_buck_id ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_2 (int ,int ,int,int) ;
 struct lp8788_buck* FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_4, unsigned int VAR_5)
{
 struct lp8788_buck *VAR_6 = FUNC_3(VAR_4);
 enum lp8788_buck_id VAR_7 = FUNC_4(VAR_4);
 u8 VAR_8, VAR_9;

 VAR_8 = FUNC_0(VAR_7);
 switch (VAR_5) {
 case 129:
  VAR_9 = VAR_3 << FUNC_1(VAR_7);
  break;
 case 128:
  VAR_9 = VAR_1 << FUNC_1(VAR_7);
  break;
 default:
  return -VAR_0;
 }

 return FUNC_2(VAR_6->lp, VAR_2, VAR_8, VAR_9);
}
