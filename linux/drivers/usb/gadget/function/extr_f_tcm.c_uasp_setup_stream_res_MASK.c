
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uas_stream {TYPE_1__* req_status; TYPE_3__* req_out; TYPE_2__* req_in; } ;
struct f_uas {struct uas_stream* stream; } ;
struct TYPE_6__ {int stream_id; } ;
struct TYPE_5__ {int stream_id; } ;
struct TYPE_4__ {int stream_id; } ;



__attribute__((used)) static void FUNC_0(struct f_uas *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  struct uas_stream *VAR_3 = &VAR_0->stream[VAR_2];

  VAR_3->req_in->stream_id = VAR_2 + 1;
  VAR_3->req_out->stream_id = VAR_2 + 1;
  VAR_3->req_status->stream_id = VAR_2 + 1;
 }
}
