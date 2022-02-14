
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_exportbuffer {int dummy; } ;
struct iss_video_fh {int queue; } ;
struct file {int dummy; } ;


 struct iss_video_fh* FUNC_0 (void*) ;
 int FUNC_1 (int *,struct v4l2_exportbuffer*) ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_0, void *VAR_1, struct v4l2_exportbuffer *VAR_2)
{
 struct iss_video_fh *VAR_3 = FUNC_0(VAR_1);

 return FUNC_1(&VAR_3->queue, VAR_2);
}
