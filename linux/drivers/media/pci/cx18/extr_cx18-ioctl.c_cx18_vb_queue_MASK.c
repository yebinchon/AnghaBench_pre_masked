
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {int dummy; } ;
struct cx18_stream {int vb_type; struct videobuf_queue vbuf_q; } ;
struct cx18_open_id {size_t type; struct cx18* cx; } ;
struct cx18 {struct cx18_stream* streams; } ;





__attribute__((used)) static struct videobuf_queue *FUNC_0(struct cx18_open_id *VAR_0)
{
 struct videobuf_queue *VAR_1 = ((void*)0);
 struct cx18 *VAR_2 = VAR_0->cx;
 struct cx18_stream *VAR_3 = &VAR_2->streams[VAR_0->type];

 switch (VAR_3->vb_type) {
 case 128:
  VAR_1 = &VAR_3->vbuf_q;
  break;
 case 129:
  break;
 default:
  break;
 }
 return VAR_1;
}
