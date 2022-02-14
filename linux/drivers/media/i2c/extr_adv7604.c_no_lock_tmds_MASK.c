
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct adv76xx_state {struct adv76xx_chip_info* info; } ;
struct adv76xx_chip_info {int tdms_lock_mask; } ;


 int FUNC_0 (struct v4l2_subdev*,int) ;
 struct adv76xx_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static inline bool FUNC_2(struct v4l2_subdev *VAR_0)
{
 struct adv76xx_state *VAR_1 = FUNC_1(VAR_0);
 const struct adv76xx_chip_info *VAR_2 = VAR_1->info;

 return (FUNC_0(VAR_0, 0x6a) & VAR_2->tdms_lock_mask) != VAR_2->tdms_lock_mask;
}
