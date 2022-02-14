
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct reg_value {int delay_ms; scalar_t__ mask; scalar_t__ val; int reg_addr; } ;
struct ov5640_mode_info {unsigned int reg_data_size; struct reg_value* reg_data; } ;
struct ov5640_dev {int dummy; } ;


 int FUNC_0 (struct ov5640_dev*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct ov5640_dev*,struct ov5640_mode_info const*) ;
 int FUNC_2 (struct ov5640_dev*,int ,scalar_t__) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct ov5640_dev *VAR_0,
       const struct ov5640_mode_info *VAR_1)
{
 const struct reg_value *VAR_2 = VAR_1->reg_data;
 unsigned int VAR_3;
 u32 VAR_4;
 u16 VAR_5;
 u8 VAR_6, VAR_7;
 int VAR_8 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->reg_data_size; ++VAR_3, ++VAR_2) {
  VAR_4 = VAR_2->delay_ms;
  VAR_5 = VAR_2->reg_addr;
  VAR_7 = VAR_2->val;
  VAR_6 = VAR_2->mask;

  if (VAR_6)
   VAR_8 = FUNC_0(VAR_0, VAR_5, VAR_6, VAR_7);
  else
   VAR_8 = FUNC_2(VAR_0, VAR_5, VAR_7);
  if (VAR_8)
   break;

  if (VAR_4)
   FUNC_3(1000 * VAR_4, 1000 * VAR_4 + 100);
 }

 return FUNC_1(VAR_0, VAR_1);
}
