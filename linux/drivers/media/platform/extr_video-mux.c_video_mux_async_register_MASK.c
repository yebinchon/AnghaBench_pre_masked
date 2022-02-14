
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_mux {int subdev; } ;
struct v4l2_async_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int* FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (unsigned int*) ;
 int FUNC_2 (int *,int,unsigned int*,unsigned int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct video_mux *VAR_3,
        unsigned int VAR_4)
{
 unsigned int VAR_5, *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_4, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  VAR_6[VAR_5] = VAR_5;

 VAR_7 = FUNC_2(
  &VAR_3->subdev, sizeof(struct v4l2_async_subdev),
  VAR_6, VAR_4, VAR_2);

 FUNC_1(VAR_6);
 return VAR_7;
}
