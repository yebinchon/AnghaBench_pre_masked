
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct adv7180_state {int input; int mutex; TYPE_1__* chip_info; } ;
struct TYPE_2__ {int valid_input_mask; int (* select_input ) (struct adv7180_state*,int) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct adv7180_state*,int) ;
 struct adv7180_state* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_1, u32 VAR_2,
        u32 VAR_3, u32 VAR_4)
{
 struct adv7180_state *VAR_5 = FUNC_4(VAR_1);
 int VAR_6 = FUNC_1(&VAR_5->mutex);

 if (VAR_6)
  return VAR_6;

 if (VAR_2 > 31 || !(FUNC_0(VAR_2) & VAR_5->chip_info->valid_input_mask)) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_6 = VAR_5->chip_info->select_input(VAR_5, VAR_2);

 if (VAR_6 == 0)
  VAR_5->input = VAR_2;
out:
 FUNC_2(&VAR_5->mutex);
 return VAR_6;
}
