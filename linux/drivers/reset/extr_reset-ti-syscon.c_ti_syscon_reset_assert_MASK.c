
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_syscon_reset_data {unsigned long nr_controls; int regmap; struct ti_syscon_reset_control* controls; } ;
struct ti_syscon_reset_control {int flags; int assert_offset; int assert_bit; } ;
struct reset_controller_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int) ;
 struct ti_syscon_reset_data* FUNC_2 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_3(struct reset_controller_dev *VAR_4,
      unsigned long VAR_5)
{
 struct ti_syscon_reset_data *VAR_6 = FUNC_2(VAR_4);
 struct ti_syscon_reset_control *VAR_7;
 unsigned int VAR_8, VAR_9;

 if (VAR_5 >= VAR_6->nr_controls)
  return -VAR_2;

 VAR_7 = &VAR_6->controls[VAR_5];

 if (VAR_7->flags & VAR_0)
  return -VAR_3;

 VAR_8 = FUNC_0(VAR_7->assert_bit);
 VAR_9 = (VAR_7->flags & VAR_1) ? VAR_8 : 0x0;

 return FUNC_1(VAR_6->regmap, VAR_7->assert_offset, VAR_8, VAR_9);
}
