
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pvr2_stream {int dummy; } ;
struct TYPE_4__ {int hdw; TYPE_1__* stream; } ;
struct pvr2_dvb_adapter {scalar_t__ stream_run; int ** buffer_storage; TYPE_2__ channel; int * thread; } ;
struct TYPE_3__ {struct pvr2_stream* stream; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct pvr2_stream*) ;
 int FUNC_5 (struct pvr2_stream*,int ) ;
 int FUNC_6 (struct pvr2_stream*,int *,int *) ;

__attribute__((used)) static void FUNC_7(struct pvr2_dvb_adapter *VAR_1)
{
 unsigned int VAR_2;
 struct pvr2_stream *VAR_3;

 if (VAR_1->thread) {
  FUNC_1(VAR_1->thread);
  VAR_1->thread = ((void*)0);
 }

 if (VAR_1->channel.stream) {
  VAR_3 = VAR_1->channel.stream->stream;
 } else {
  VAR_3 = ((void*)0);
 }
 if (VAR_3) {
  FUNC_3(VAR_1->channel.hdw, 0);
  FUNC_6(VAR_3, ((void*)0), ((void*)0));
  FUNC_4(VAR_3);
  FUNC_5(VAR_3, 0);
  FUNC_2(&VAR_1->channel, ((void*)0));
 }

 if (VAR_1->stream_run) {
  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
   if (!(VAR_1->buffer_storage[VAR_2])) continue;
   FUNC_0(VAR_1->buffer_storage[VAR_2]);
   VAR_1->buffer_storage[VAR_2] = ((void*)0);
  }
  VAR_1->stream_run = 0;
 }
}
