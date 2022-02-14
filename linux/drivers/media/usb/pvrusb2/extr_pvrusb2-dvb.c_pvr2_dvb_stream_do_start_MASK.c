
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pvr2_stream {int dummy; } ;
struct TYPE_5__ {int hdw; TYPE_1__* stream; struct pvr2_context* mc_head; } ;
struct pvr2_dvb_adapter {int stream_run; int * thread; TYPE_2__ channel; int * buffer_storage; } ;
struct TYPE_6__ {int stream; } ;
struct pvr2_context {TYPE_3__ video_stream; } ;
struct pvr2_buffer {int dummy; } ;
typedef int pvr2_stream_callback ;
struct TYPE_4__ {struct pvr2_stream* stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ,struct pvr2_dvb_adapter*,char*) ;
 int FUNC_4 (struct pvr2_buffer*) ;
 int FUNC_5 (struct pvr2_buffer*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int ,int) ;
 struct pvr2_buffer* FUNC_8 (struct pvr2_stream*,unsigned int) ;
 struct pvr2_buffer* FUNC_9 (struct pvr2_stream*) ;
 int FUNC_10 (struct pvr2_stream*,unsigned int) ;
 int FUNC_11 (int ,int ,struct pvr2_dvb_adapter*) ;

__attribute__((used)) static int FUNC_12(struct pvr2_dvb_adapter *VAR_7)
{
 struct pvr2_context *VAR_8 = VAR_7->channel.mc_head;
 unsigned int VAR_9;
 int VAR_10;
 struct pvr2_buffer *VAR_11;
 struct pvr2_stream *VAR_12 = ((void*)0);

 if (VAR_7->stream_run) return -VAR_0;

 VAR_10 = FUNC_6(&VAR_7->channel, &VAR_8->video_stream);

 if (VAR_10 < 0) return VAR_10;

 VAR_12 = VAR_7->channel.stream->stream;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_7->buffer_storage[VAR_9] = FUNC_2(VAR_4,
          VAR_2);
  if (!(VAR_7->buffer_storage[VAR_9])) return -VAR_1;
 }

 FUNC_11(VAR_8->video_stream.stream,
     (pvr2_stream_callback) VAR_6, VAR_7);

 VAR_10 = FUNC_10(VAR_12, VAR_3);
 if (VAR_10 < 0) return VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_11 = FUNC_8(VAR_12, VAR_9);
  FUNC_5(VAR_11,
           VAR_7->buffer_storage[VAR_9],
           VAR_4);
 }

 VAR_10 = FUNC_7(VAR_7->channel.hdw, 1);
 if (VAR_10 < 0) return VAR_10;

 while ((VAR_11 = FUNC_9(VAR_12)) != ((void*)0)) {
  VAR_10 = FUNC_4(VAR_11);
  if (VAR_10 < 0) return VAR_10;
 }

 VAR_7->thread = FUNC_3(VAR_5, VAR_7, "pvrusb2-dvb");

 if (FUNC_0(VAR_7->thread)) {
  VAR_10 = FUNC_1(VAR_7->thread);
  VAR_7->thread = ((void*)0);
  return VAR_10;
 }

 VAR_7->stream_run = !0;

 return 0;
}
