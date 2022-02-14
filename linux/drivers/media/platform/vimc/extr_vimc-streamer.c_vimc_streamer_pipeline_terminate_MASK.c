
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vimc_stream {int pipe_size; struct vimc_ent_device** ved_pipeline; } ;
struct vimc_ent_device {int ent; } ;
struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (int ) ;
 struct v4l2_subdev* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct v4l2_subdev*,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct vimc_stream *VAR_2)
{
 struct vimc_ent_device *VAR_3;
 struct v4l2_subdev *VAR_4;

 while (VAR_2->pipe_size) {
  VAR_2->pipe_size--;
  VAR_3 = VAR_2->ved_pipeline[VAR_2->pipe_size];
  VAR_2->ved_pipeline[VAR_2->pipe_size] = ((void*)0);

  if (!FUNC_0(VAR_3->ent))
   continue;

  VAR_4 = FUNC_1(VAR_3->ent);
  FUNC_2(VAR_4, VAR_1, VAR_0, 0);
 }
}
