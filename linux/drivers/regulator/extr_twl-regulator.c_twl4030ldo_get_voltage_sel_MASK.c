
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twlreg_info {int table_len; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct twlreg_info* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct twlreg_info*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_2)
{
 struct twlreg_info *VAR_3 = FUNC_0(VAR_2);
 int VAR_4 = FUNC_1(VAR_3, VAR_0, VAR_1);

 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 &= VAR_3->table_len - 1;
 return VAR_4;
}
