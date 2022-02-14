
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_5__ {unsigned int sizeimage; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct TYPE_4__ {TYPE_3__ fmt; } ;
struct iss_video_fh {TYPE_1__ format; struct iss_video* video; } ;
struct iss_video {int capture_mem; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int,int) ;
 struct iss_video_fh* FUNC_2 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_3(struct vb2_queue *VAR_1,
     unsigned int *VAR_2, unsigned int *VAR_3,
     unsigned int VAR_4[],
     struct device *VAR_5[])
{
 struct iss_video_fh *VAR_6 = FUNC_2(VAR_1);
 struct iss_video *VAR_7 = VAR_6->video;


 *VAR_3 = 1;

 VAR_4[0] = VAR_6->format.fmt.pix.sizeimage;
 if (VAR_4[0] == 0)
  return -VAR_0;

 *VAR_2 = FUNC_1(*VAR_2, VAR_7->capture_mem / FUNC_0(VAR_4[0]));

 return 0;
}
