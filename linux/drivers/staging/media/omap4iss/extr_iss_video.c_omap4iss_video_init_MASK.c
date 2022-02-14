
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * ioctl_ops; int release; int vfl_type; int name; int * fops; int entity; } ;
struct TYPE_4__ {int stream_state; int lock; } ;
struct TYPE_6__ {int flags; } ;
struct iss_video {int type; TYPE_2__ video; TYPE_1__ pipe; int * ops; int stream_lock; int active; int mutex; int qlock; TYPE_3__ pad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int,TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,char*,char const*,char const*) ;
 int FUNC_4 (int *) ;
 int VAR_8 ;
 int FUNC_5 (TYPE_2__*,struct iss_video*) ;

int FUNC_6(struct iss_video *VAR_9, const char *VAR_10)
{
 const char *VAR_11;
 int VAR_12;

 switch (VAR_9->type) {
 case 129:
  VAR_11 = "output";
  VAR_9->pad.flags = VAR_2;
  break;
 case 128:
  VAR_11 = "input";
  VAR_9->pad.flags = VAR_3;
  break;

 default:
  return -VAR_0;
 }

 VAR_12 = FUNC_1(&VAR_9->video.entity, 1, &VAR_9->pad);
 if (VAR_12 < 0)
  return VAR_12;

 FUNC_4(&VAR_9->qlock);
 FUNC_2(&VAR_9->mutex);
 FUNC_0(&VAR_9->active, 0);

 FUNC_4(&VAR_9->pipe.lock);
 FUNC_2(&VAR_9->stream_lock);


 if (!VAR_9->ops)
  VAR_9->ops = &VAR_5;

 VAR_9->video.fops = &VAR_6;
 FUNC_3(VAR_9->video.name, sizeof(VAR_9->video.name),
   "OMAP4 ISS %s %s", VAR_10, VAR_11);
 VAR_9->video.vfl_type = VAR_4;
 VAR_9->video.release = VAR_8;
 VAR_9->video.ioctl_ops = &VAR_7;
 VAR_9->pipe.stream_state = VAR_1;

 FUNC_5(&VAR_9->video, VAR_9);

 return 0;
}
