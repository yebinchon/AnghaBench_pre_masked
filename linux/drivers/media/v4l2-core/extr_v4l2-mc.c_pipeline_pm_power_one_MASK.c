
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct media_entity {scalar_t__ use_count; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct media_entity*) ;
 struct v4l2_subdev* FUNC_2 (struct media_entity*) ;
 int VAR_2 ;
 int FUNC_3 (struct v4l2_subdev*,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct media_entity *VAR_3, int VAR_4)
{
 struct v4l2_subdev *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_3)
        ? FUNC_2(VAR_3) : ((void*)0);

 if (VAR_3->use_count == 0 && VAR_4 > 0 && VAR_5 != ((void*)0)) {
  VAR_6 = FUNC_3(VAR_5, VAR_1, VAR_2, 1);
  if (VAR_6 < 0 && VAR_6 != -VAR_0)
   return VAR_6;
 }

 VAR_3->use_count += VAR_4;
 FUNC_0(VAR_3->use_count < 0);

 if (VAR_3->use_count == 0 && VAR_4 < 0 && VAR_5 != ((void*)0))
  FUNC_3(VAR_5, VAR_1, VAR_2, 0);

 return 0;
}
