
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_ctrl {int id; int val; } ;
struct lm3560_flash {int led_mode; int lock; int regmap; } ;
typedef enum lm3560_led_id { ____Placeholder_lm3560_led_id } lm3560_led_id ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct lm3560_flash*,int,int) ;
 int FUNC_2 (struct lm3560_flash*) ;
 int FUNC_3 (struct lm3560_flash*,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int,int) ;
 struct lm3560_flash* FUNC_7 (struct v4l2_ctrl*,int) ;

__attribute__((used)) static int FUNC_8(struct v4l2_ctrl *VAR_6, enum lm3560_led_id VAR_7)
{
 struct lm3560_flash *VAR_8 = FUNC_7(VAR_6, VAR_7);
 u8 VAR_9;
 int VAR_10 = -VAR_1;

 FUNC_4(&VAR_8->lock);

 switch (VAR_6->id) {
 case 133:
  VAR_8->led_mode = VAR_6->val;
  if (VAR_8->led_mode != VAR_4)
   VAR_10 = FUNC_2(VAR_8);
  break;

 case 131:
  VAR_10 = FUNC_6(VAR_8->regmap,
       VAR_2, 0x04, (VAR_6->val) << 2);
  if (VAR_10 < 0)
   goto err_out;
  break;

 case 132:
  if (VAR_8->led_mode != VAR_4) {
   VAR_10 = -VAR_0;
   goto err_out;
  }
  VAR_8->led_mode = VAR_4;
  VAR_10 = FUNC_2(VAR_8);
  break;

 case 130:
  if (VAR_8->led_mode != VAR_4) {
   VAR_10 = -VAR_0;
   goto err_out;
  }
  VAR_8->led_mode = VAR_5;
  VAR_10 = FUNC_2(VAR_8);
  break;

 case 129:
  VAR_9 = FUNC_0(VAR_6->val);
  VAR_10 = FUNC_6(VAR_8->regmap,
       VAR_3, 0x1f, VAR_9);
  break;

 case 134:
  VAR_10 = FUNC_1(VAR_8, VAR_7, VAR_6->val);
  break;

 case 128:
  VAR_10 = FUNC_3(VAR_8, VAR_7, VAR_6->val);
  break;
 }

err_out:
 FUNC_5(&VAR_8->lock);
 return VAR_10;
}
