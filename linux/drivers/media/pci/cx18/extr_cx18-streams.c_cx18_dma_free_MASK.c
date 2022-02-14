
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_queue {int dummy; } ;
struct TYPE_3__ {int state; } ;
struct cx18_videobuf_buffer {TYPE_1__ vb; } ;
struct cx18_stream {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct videobuf_queue*,TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct videobuf_queue *VAR_1,
 struct cx18_stream *VAR_2, struct cx18_videobuf_buffer *VAR_3)
{
 FUNC_1(VAR_1, &VAR_3->vb, 0, 0);
 FUNC_0(&VAR_3->vb);
 VAR_3->vb.state = VAR_0;
}
