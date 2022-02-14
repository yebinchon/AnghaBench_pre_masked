
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct media_entity {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 struct video_device* FUNC_0 (int ) ;
 struct media_entity* FUNC_1 (struct media_entity*,int ,int,int) ;
 struct video_device* FUNC_2 (struct media_entity*) ;

struct video_device *
FUNC_3(struct media_entity *VAR_1,
    enum v4l2_buf_type VAR_2, bool VAR_3)
{
 struct media_entity *VAR_4;

 VAR_4 = FUNC_1(VAR_1, 0, VAR_2, VAR_3);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 return FUNC_2(VAR_4);
}
