
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_stream {int dummy; } ;
struct pvr2_buffer {unsigned int id; int purb; int list_overhead; int state; struct pvr2_stream* stream; int signature; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (struct pvr2_buffer*,int ,int) ;
 int FUNC_2 (struct pvr2_buffer*,char*) ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,struct pvr2_buffer*,struct pvr2_stream*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct pvr2_buffer *VAR_5,
       struct pvr2_stream *VAR_6,
       unsigned int VAR_7)
{
 FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->signature = VAR_0;
 VAR_5->id = VAR_7;
 FUNC_3(VAR_3,
     "/*---TRACE_FLOW---*/ bufferInit     %p stream=%p", VAR_5, VAR_6);
 VAR_5->stream = VAR_6;
 VAR_5->state = VAR_4;
 FUNC_0(&VAR_5->list_overhead);
 VAR_5->purb = FUNC_4(0, VAR_2);
 if (! VAR_5->purb) return -VAR_1;



 return 0;
}
