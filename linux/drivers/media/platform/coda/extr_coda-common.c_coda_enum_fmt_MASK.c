
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct video_device {int dummy; } ;
struct v4l2_fmtdesc {scalar_t__ type; size_t index; scalar_t__ pixelformat; } ;
struct file {int dummy; } ;
struct coda_video_device {scalar_t__* src_formats; scalar_t__* dst_formats; } ;
struct coda_ctx {int vdoa; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ const VAR_4 ;
 struct coda_ctx* FUNC_0 (void*) ;
 struct coda_video_device* FUNC_1 (struct video_device*) ;
 struct video_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6,
    struct v4l2_fmtdesc *VAR_7)
{
 struct video_device *VAR_8 = FUNC_2(VAR_5);
 const struct coda_video_device *VAR_9 = FUNC_1(VAR_8);
 struct coda_ctx *VAR_10 = FUNC_0(VAR_6);
 const u32 *VAR_11;

 if (VAR_7->type == VAR_3)
  VAR_11 = VAR_9->src_formats;
 else if (VAR_7->type == VAR_2)
  VAR_11 = VAR_9->dst_formats;
 else
  return -VAR_1;

 if (VAR_7->index >= VAR_0 || VAR_11[VAR_7->index] == 0)
  return -VAR_1;


 if (!VAR_10->vdoa && VAR_7->type == VAR_2 &&
     VAR_11[VAR_7->index] == VAR_4)
  return -VAR_1;

 VAR_7->pixelformat = VAR_11[VAR_7->index];

 return 0;
}
