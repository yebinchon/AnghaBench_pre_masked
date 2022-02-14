
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

__attribute__((used)) static int FUNC_0(struct v4l2_subdev *VAR_4,
    struct v4l2_mbus_config *VAR_5)
{
 VAR_5->type = VAR_3;
 VAR_5->flags = VAR_0 |
  VAR_1 |
  VAR_2;

 return 0;
}
