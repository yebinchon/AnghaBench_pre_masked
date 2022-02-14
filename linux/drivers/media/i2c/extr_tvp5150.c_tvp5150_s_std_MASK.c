
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int height; } ;
struct tvp5150 {int norm; TYPE_1__ rect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tvp5150* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_3, v4l2_std_id VAR_4)
{
 struct tvp5150 *VAR_5 = FUNC_0(VAR_3);

 if (VAR_5->norm == VAR_4)
  return 0;


 if (VAR_4 & VAR_2)
  VAR_5->rect.height = VAR_0;
 else
  VAR_5->rect.height = VAR_1;

 VAR_5->norm = VAR_4;

 return FUNC_1(VAR_3, VAR_4);
}
