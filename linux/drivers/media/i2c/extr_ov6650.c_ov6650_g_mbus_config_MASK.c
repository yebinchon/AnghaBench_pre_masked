
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_config {int flags; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_9,
    struct v4l2_mbus_config *VAR_10)
{

 VAR_10->flags = VAR_3 |
  VAR_6 | VAR_5 |
  VAR_1 | VAR_2 |
  VAR_7 | VAR_8 |
  VAR_0;
 VAR_10->type = VAR_4;

 return 0;
}
