
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct reg_value {int val; int reg_addr; } ;
struct ov2680_mode_info {unsigned int reg_data_size; struct reg_value* reg_data; } ;
struct ov2680_dev {int dummy; } ;


 int FUNC_0 (struct ov2680_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ov2680_dev *VAR_0,
       const struct ov2680_mode_info *VAR_1)
{
 const struct reg_value *VAR_2 = VAR_1->reg_data;
 unsigned int VAR_3;
 int VAR_4 = 0;
 u16 VAR_5;
 u8 VAR_6;

 for (VAR_3 = 0; VAR_3 < VAR_1->reg_data_size; ++VAR_3, ++VAR_2) {
  VAR_5 = VAR_2->reg_addr;
  VAR_6 = VAR_2->val;

  VAR_4 = FUNC_0(VAR_0, VAR_5, VAR_6);
  if (VAR_4)
   break;
 }

 return VAR_4;
}
