
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int entity; TYPE_1__* v4l2_dev; } ;
struct tvp5150 {struct media_pad* input_pad; struct media_entity* input_ent; } ;
struct media_pad {int flags; } ;
struct media_entity {int name; } ;
struct TYPE_2__ {int mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct media_entity*,int ,int *,int ,int ) ;
 int FUNC_1 (int ,struct media_entity*) ;
 int FUNC_2 (struct media_entity*) ;
 int FUNC_3 (struct media_entity*,int,struct media_pad*) ;
 struct tvp5150* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_3)
{
 return 0;
}
