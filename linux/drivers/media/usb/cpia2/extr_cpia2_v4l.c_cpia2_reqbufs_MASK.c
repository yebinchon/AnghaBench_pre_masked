
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_requestbuffers {scalar_t__ type; scalar_t__ memory; int reserved; int count; } ;
struct file {int dummy; } ;
struct camera_data {int num_frames; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ,int) ;
 struct camera_data* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4, struct v4l2_requestbuffers *VAR_5)
{
 struct camera_data *VAR_6 = FUNC_2(VAR_3);

 if(VAR_5->type != VAR_1 ||
    VAR_5->memory != VAR_2)
  return -VAR_0;

 FUNC_0("REQBUFS requested:%d returning:%d\n", VAR_5->count, VAR_6->num_frames);
 VAR_5->count = VAR_6->num_frames;
 FUNC_1(&VAR_5->reserved, 0, sizeof(VAR_5->reserved));

 return 0;
}
