
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int num; int * lock; int tvnorms; int release; int * fops; TYPE_1__* v4l2_dev; int name; } ;
struct cx18_stream {int type; char* name; TYPE_5__ video_dev; scalar_t__ buffers; int * dvb; struct cx18* cx; } ;
struct cx18_dvb {int dummy; } ;
struct TYPE_6__ {char* name; } ;
struct cx18 {int v4l2_cap; int instance; scalar_t__* stream_buffers; int serialize_lock; int tuner_std; TYPE_3__* card; TYPE_1__ v4l2_dev; struct cx18_stream* streams; } ;
struct TYPE_9__ {int num_offset; char* name; scalar_t__ dma; } ;
struct TYPE_8__ {int hw_all; TYPE_2__* video_inputs; } ;
struct TYPE_7__ {scalar_t__ video_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 int VAR_4 ;
 int FUNC_1 (char*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (TYPE_5__*) ;
 TYPE_4__* VAR_13 ;
 int FUNC_3 (struct cx18*,int) ;
 int VAR_14 ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int,char*,char*,char*) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_6(struct cx18 *VAR_16, int VAR_17)
{
 struct cx18_stream *VAR_18 = &VAR_16->streams[VAR_17];
 u32 VAR_19 = VAR_16->v4l2_cap;
 int VAR_20 = VAR_13[VAR_17].num_offset;
 int VAR_21 = VAR_16->instance + VAR_12 + VAR_20;
 VAR_18->video_dev.v4l2_dev = ((void*)0);
 VAR_18->dvb = ((void*)0);
 VAR_18->cx = VAR_16;
 VAR_18->type = VAR_17;
 VAR_18->name = VAR_13[VAR_17].name;


 if (VAR_17 == VAR_1 && !(VAR_19 & VAR_8))
  return 0;


 if (VAR_17 == VAR_3 &&
     !(VAR_19 & (VAR_10 | VAR_9)))
  return 0;



 if (VAR_13[VAR_17].dma != VAR_7 &&
     VAR_16->stream_buffers[VAR_17] == 0) {
  FUNC_1("Disabled %s device\n", VAR_13[VAR_17].name);
  return 0;
 }

 FUNC_3(VAR_16, VAR_17);


 if (VAR_17 == VAR_2) {
  if (VAR_16->card->hw_all & VAR_4) {
   VAR_18->dvb = FUNC_4(sizeof(struct cx18_dvb), VAR_6);
   if (VAR_18->dvb == ((void*)0)) {
    FUNC_0("Couldn't allocate cx18_dvb structure for %s\n",
      VAR_18->name);
    return -VAR_5;
   }
  } else {

   VAR_18->buffers = 0;
  }
 }

 if (VAR_20 == -1)
  return 0;


 FUNC_5(VAR_18->video_dev.name, sizeof(VAR_18->video_dev.name), "%s %s",
   VAR_16->v4l2_dev.name, VAR_18->name);

 VAR_18->video_dev.num = VAR_21;
 VAR_18->video_dev.v4l2_dev = &VAR_16->v4l2_dev;
 VAR_18->video_dev.fops = &VAR_14;
 VAR_18->video_dev.release = VAR_15;
 if (VAR_16->card->video_inputs->video_type == VAR_0)
  VAR_18->video_dev.tvnorms = VAR_16->tuner_std;
 else
  VAR_18->video_dev.tvnorms = VAR_11;
 VAR_18->video_dev.lock = &VAR_16->serialize_lock;
 FUNC_2(&VAR_18->video_dev);
 return 0;
}
