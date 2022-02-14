
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int num; int * lock; int tvnorms; int release; int ctrl_handler; int fops; int vfl_dir; TYPE_2__* v4l2_dev; int name; } ;
struct ivtv_stream {int type; char* name; TYPE_3__ vdev; struct ivtv* itv; } ;
struct TYPE_7__ {char* name; int ctrl_handler; } ;
struct TYPE_6__ {scalar_t__* kilobytes; } ;
struct ivtv {int instance; int v4l2_cap; int serialize_lock; TYPE_2__ v4l2_dev; TYPE_1__ options; struct ivtv_stream* streams; } ;
struct TYPE_9__ {int num_offset; char* name; scalar_t__ dma; int v4l2_caps; int fops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_4__* VAR_21 ;
 int FUNC_2 (struct ivtv*,int) ;
 int FUNC_3 (int ,int,char*,char*,char*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int VAR_22 ;

__attribute__((used)) static int FUNC_5(struct ivtv *VAR_23, int VAR_24)
{
 struct ivtv_stream *VAR_25 = &VAR_23->streams[VAR_24];
 int VAR_26 = VAR_21[VAR_24].num_offset;
 int VAR_27 = VAR_23->instance + VAR_20 + VAR_26;




 VAR_25->vdev.v4l2_dev = ((void*)0);
 VAR_25->itv = VAR_23;
 VAR_25->type = VAR_24;
 VAR_25->name = VAR_21[VAR_24].name;


 if (VAR_24 == VAR_2 && !(VAR_23->v4l2_cap & VAR_4))
  return 0;
 if (VAR_24 >= VAR_0 && !(VAR_23->v4l2_cap & VAR_6))
  return 0;



 if (VAR_21[VAR_24].dma != VAR_3 &&
     VAR_23->options.kilobytes[VAR_24] == 0) {
  FUNC_0("Disabled %s device\n", VAR_21[VAR_24].name);
  return 0;
 }

 FUNC_2(VAR_23, VAR_24);

 FUNC_3(VAR_25->vdev.name, sizeof(VAR_25->vdev.name), "%s %s",
   VAR_23->v4l2_dev.name, VAR_25->name);

 VAR_25->vdev.num = VAR_27;
 VAR_25->vdev.v4l2_dev = &VAR_23->v4l2_dev;
 if (VAR_21[VAR_24].v4l2_caps &
   (VAR_6 | VAR_5))
  VAR_25->vdev.vfl_dir = VAR_8;
 VAR_25->vdev.fops = VAR_21[VAR_24].fops;
 VAR_25->vdev.ctrl_handler = VAR_23->v4l2_dev.ctrl_handler;
 VAR_25->vdev.release = VAR_22;
 VAR_25->vdev.tvnorms = VAR_7;
 VAR_25->vdev.lock = &VAR_23->serialize_lock;
 if (VAR_25->type == VAR_1) {
  FUNC_4(&VAR_25->vdev, VAR_15);
  FUNC_4(&VAR_25->vdev, VAR_11);
  FUNC_4(&VAR_25->vdev, VAR_9);
  FUNC_4(&VAR_25->vdev, VAR_10);
  FUNC_4(&VAR_25->vdev, VAR_17);
  FUNC_4(&VAR_25->vdev, VAR_13);
  FUNC_4(&VAR_25->vdev, VAR_16);
  FUNC_4(&VAR_25->vdev, VAR_12);
  FUNC_4(&VAR_25->vdev, VAR_19);
  FUNC_4(&VAR_25->vdev, VAR_14);
  FUNC_4(&VAR_25->vdev, VAR_18);
 }
 FUNC_1(&VAR_25->vdev);
 return 0;
}
