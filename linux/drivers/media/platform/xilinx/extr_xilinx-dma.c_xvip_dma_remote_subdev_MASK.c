
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct media_pad {int entity; int index; } ;


 int FUNC_0 (int ) ;
 struct media_pad* FUNC_1 (struct media_pad*) ;
 struct v4l2_subdev* FUNC_2 (int ) ;

__attribute__((used)) static struct v4l2_subdev *
FUNC_3(struct media_pad *VAR_0, u32 *VAR_1)
{
 struct media_pad *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (!VAR_2 || !FUNC_0(VAR_2->entity))
  return ((void*)0);

 if (VAR_1)
  *VAR_1 = VAR_2->index;

 return FUNC_2(VAR_2->entity);
}
