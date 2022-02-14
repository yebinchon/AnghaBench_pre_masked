
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {void* last; void* field; struct cx18_stream* priv_data; } ;
struct cx18_stream {struct cx18* cx; } ;
struct TYPE_2__ {int width; int height; } ;
struct cx18 {TYPE_1__ cxhdl; } ;


 void* VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct videobuf_queue *VAR_3,
 unsigned int *VAR_4, unsigned int *VAR_5)
{
 struct cx18_stream *VAR_6 = VAR_3->priv_data;
 struct cx18 *VAR_7 = VAR_6->cx;

 *VAR_5 = 2 * VAR_7->cxhdl.width * VAR_7->cxhdl.height;
 if (*VAR_4 == 0)
  *VAR_4 = VAR_1;

 while (*VAR_5 * *VAR_4 > VAR_1 * VAR_2)
  (*VAR_4)--;

 VAR_3->field = VAR_0;
 VAR_3->last = VAR_0;

 return 0;
}
