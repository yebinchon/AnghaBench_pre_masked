
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_config {int flags; int type; } ;
struct adv7180_state {TYPE_1__* chip_info; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct adv7180_state* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_9,
     struct v4l2_mbus_config *VAR_10)
{
 struct adv7180_state *VAR_11 = FUNC_0(VAR_9);

 if (VAR_11->chip_info->flags & VAR_0) {
  VAR_10->type = VAR_5;
  VAR_10->flags = VAR_2 |
    VAR_3 |
    VAR_4;
 } else {




  VAR_10->flags = VAR_7 | VAR_8 |
     VAR_6;
  VAR_10->type = VAR_1;
 }

 return 0;
}
