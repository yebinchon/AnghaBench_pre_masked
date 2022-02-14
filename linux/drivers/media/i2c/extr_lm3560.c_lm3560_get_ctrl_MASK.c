
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int val; } ;
struct v4l2_ctrl {scalar_t__ id; TYPE_1__ cur; } ;
struct lm3560_flash {int lock; int regmap; } ;
typedef int s32 ;
typedef enum lm3560_led_id { ____Placeholder_lm3560_led_id } lm3560_led_id ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 struct lm3560_flash* FUNC_3 (struct v4l2_ctrl*,int) ;

__attribute__((used)) static int FUNC_4(struct v4l2_ctrl *VAR_9, enum lm3560_led_id VAR_10)
{
 struct lm3560_flash *VAR_11 = FUNC_3(VAR_9, VAR_10);
 int VAR_12 = -VAR_0;

 FUNC_0(&VAR_11->lock);

 if (VAR_9->id == VAR_5) {
  s32 VAR_13 = 0;
  unsigned int VAR_14;
  VAR_12 = FUNC_2(VAR_11->regmap, VAR_4, &VAR_14);
  if (VAR_12 < 0)
   goto out;
  if (VAR_14 & VAR_2)
   VAR_13 |= VAR_7;
  if (VAR_14 & VAR_1)
   VAR_13 |= VAR_6;
  if (VAR_14 & VAR_3)
   VAR_13 |= VAR_8;
  VAR_9->cur.val = VAR_13;
 }

out:
 FUNC_1(&VAR_11->lock);
 return VAR_12;
}
