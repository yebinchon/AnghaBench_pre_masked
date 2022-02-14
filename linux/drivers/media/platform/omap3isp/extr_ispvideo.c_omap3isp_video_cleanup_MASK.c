
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entity; } ;
struct isp_video {int mutex; int stream_lock; int queue_lock; TYPE_1__ video; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct isp_video *VAR_0)
{
 FUNC_0(&VAR_0->video.entity);
 FUNC_1(&VAR_0->queue_lock);
 FUNC_1(&VAR_0->stream_lock);
 FUNC_1(&VAR_0->mutex);
}
