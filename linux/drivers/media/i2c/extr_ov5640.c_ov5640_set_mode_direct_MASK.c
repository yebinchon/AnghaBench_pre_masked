
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov5640_mode_info {int reg_data; } ;
struct ov5640_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ov5640_dev*,struct ov5640_mode_info const*) ;

__attribute__((used)) static int FUNC_1(struct ov5640_dev *VAR_1,
      const struct ov5640_mode_info *VAR_2)
{
 if (!VAR_2->reg_data)
  return -VAR_0;


 return FUNC_0(VAR_1, VAR_2);
}
