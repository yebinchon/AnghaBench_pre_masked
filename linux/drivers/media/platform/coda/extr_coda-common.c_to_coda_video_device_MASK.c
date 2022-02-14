
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct coda_video_device {int dummy; } ;
struct coda_dev {TYPE_1__* devtype; struct video_device* vfd; } ;
struct TYPE_2__ {unsigned int num_vdevs; struct coda_video_device const** vdevs; } ;


 struct coda_dev* FUNC_0 (struct video_device*) ;

__attribute__((used)) static const struct coda_video_device *FUNC_1(struct video_device
           *VAR_0)
{
 struct coda_dev *VAR_1 = FUNC_0(VAR_0);
 unsigned int VAR_2 = VAR_0 - VAR_1->vfd;

 if (VAR_2 >= VAR_1->devtype->num_vdevs)
  return ((void*)0);

 return VAR_1->devtype->vdevs[VAR_2];
}
