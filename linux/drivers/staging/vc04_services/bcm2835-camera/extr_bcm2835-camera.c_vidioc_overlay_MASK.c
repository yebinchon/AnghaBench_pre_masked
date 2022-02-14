
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vchiq_mmal_port {int dummy; } ;
struct file {int dummy; } ;
struct bm2835_mmal_dev {int instance; int v4l2_dev; TYPE_1__** component; } ;
struct TYPE_3__ {struct vchiq_mmal_port* input; struct vchiq_mmal_port* output; scalar_t__ enabled; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bm2835_mmal_dev*) ;
 scalar_t__ FUNC_1 (struct bm2835_mmal_dev*) ;
 int FUNC_2 (struct bm2835_mmal_dev*,struct vchiq_mmal_port*) ;
 int FUNC_3 (int,int ,int *,char*,struct vchiq_mmal_port*,struct vchiq_mmal_port*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ,struct vchiq_mmal_port*,struct vchiq_mmal_port*) ;
 int FUNC_7 (int ,struct vchiq_mmal_port*) ;
 int FUNC_8 (int ,struct vchiq_mmal_port*,int *) ;
 int FUNC_9 (int ,struct vchiq_mmal_port*) ;
 struct bm2835_mmal_dev* FUNC_10 (struct file*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_5, void *VAR_6, unsigned int VAR_7)
{
 int VAR_8;
 struct bm2835_mmal_dev *VAR_9 = FUNC_10(VAR_5);
 struct vchiq_mmal_port *VAR_10;
 struct vchiq_mmal_port *VAR_11;

 if ((VAR_7 && VAR_9->component[VAR_2]->enabled) ||
     (!VAR_7 && !VAR_9->component[VAR_2]->enabled))
  return 0;

 VAR_10 =
     &VAR_9->component[VAR_1]->output[VAR_0];

 if (!VAR_7) {

  VAR_8 = FUNC_7(VAR_9->instance, VAR_10);
  if (!VAR_8)
   VAR_8 =
       FUNC_6(VAR_9->instance, VAR_10,
          ((void*)0));
  if (VAR_8 >= 0)
   VAR_8 = FUNC_4(
     VAR_9->instance,
     VAR_9->component[VAR_2]);

  FUNC_0(VAR_9);
  return VAR_8;
 }


 VAR_11 = &VAR_9->component[VAR_2]->input[0];

 VAR_8 = FUNC_9(VAR_9->instance, VAR_10);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_9, VAR_11);
 if (VAR_8 < 0)
  return VAR_8;

 if (FUNC_1(VAR_9) < 0)
  return -VAR_3;

 VAR_8 = FUNC_5(
   VAR_9->instance,
   VAR_9->component[VAR_2]);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_3(1, VAR_4, &VAR_9->v4l2_dev, "connecting %p to %p\n",
   VAR_10, VAR_11);
 VAR_8 = FUNC_6(VAR_9->instance, VAR_10, VAR_11);
 if (VAR_8)
  return VAR_8;

 return FUNC_8(VAR_9->instance, VAR_10, ((void*)0));
}
