
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct media_pad {int entity; } ;


 struct media_pad* FUNC_0 (struct media_pad*) ;
 struct v4l2_subdev* FUNC_1 (int ) ;

__attribute__((used)) static inline struct v4l2_subdev *FUNC_2(struct media_pad *VAR_0)
{
 VAR_0 = FUNC_0(VAR_0);
 if (!VAR_0)
  return ((void*)0);

 return FUNC_1(VAR_0->entity);
}
