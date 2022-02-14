
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int num; int device_caps; int * v4l2_dev; } ;
struct ivtv_stream {int name; TYPE_2__ vdev; int caps; } ;
struct TYPE_6__ {int * kilobytes; } ;
struct ivtv {TYPE_1__ options; int v4l2_cap; struct ivtv_stream* streams; scalar_t__ osd_video_pbase; } ;
struct TYPE_8__ {int vfl_type; int num_offset; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,char const*,int ,...) ;
 int VAR_4 ;



 TYPE_5__* VAR_5 ;
 char* FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int,int) ;
 int FUNC_4 (TYPE_2__*,struct ivtv_stream*) ;

__attribute__((used)) static int FUNC_5(struct ivtv *VAR_6, int VAR_7)
{
 struct ivtv_stream *VAR_8 = &VAR_6->streams[VAR_7];
 int VAR_9 = VAR_5[VAR_7].vfl_type;
 const char *VAR_10;
 int VAR_11;

 if (VAR_8->vdev.v4l2_dev == ((void*)0))
  return 0;

 VAR_11 = VAR_8->vdev.num;

 if (VAR_7 != VAR_3) {
  struct ivtv_stream *VAR_12 = &VAR_6->streams[VAR_3];

  if (VAR_12->vdev.v4l2_dev)
   VAR_11 = VAR_12->vdev.num + VAR_5[VAR_7].num_offset;
 }
 VAR_8->vdev.device_caps = VAR_8->caps;
 if (VAR_6->osd_video_pbase) {
  VAR_6->streams[VAR_2].vdev.device_caps |=
   VAR_4;
  VAR_6->streams[VAR_1].vdev.device_caps |=
   VAR_4;
  VAR_6->v4l2_cap |= VAR_4;
 }
 FUNC_4(&VAR_8->vdev, VAR_8);


 if (FUNC_3(&VAR_8->vdev, VAR_9, VAR_11)) {
  FUNC_0("Couldn't register v4l2 device for %s (device node number %d)\n",
    VAR_8->name, VAR_11);
  return -VAR_0;
 }
 VAR_10 = FUNC_2(&VAR_8->vdev);

 switch (VAR_9) {
 case 130:
  FUNC_1("Registered device %s for %s (%d kB)\n",
   VAR_10, VAR_8->name, VAR_6->options.kilobytes[VAR_7]);
  break;
 case 129:
  FUNC_1("Registered device %s for %s\n",
   VAR_10, VAR_8->name);
  break;
 case 128:
  if (VAR_6->options.kilobytes[VAR_7])
   FUNC_1("Registered device %s for %s (%d kB)\n",
    VAR_10, VAR_8->name, VAR_6->options.kilobytes[VAR_7]);
  else
   FUNC_1("Registered device %s for %s\n",
    VAR_10, VAR_8->name);
  break;
 }
 return 0;
}
