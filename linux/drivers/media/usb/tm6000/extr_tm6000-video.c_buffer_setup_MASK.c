
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_queue {struct tm6000_fh* priv_data; } ;
struct tm6000_fh {int width; int height; TYPE_1__* fmt; } ;
struct TYPE_2__ {int depth; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct videobuf_queue *VAR_3, unsigned int *VAR_4, unsigned int *VAR_5)
{
 struct tm6000_fh *VAR_6 = VAR_3->priv_data;

 *VAR_5 = VAR_6->fmt->depth * VAR_6->width * VAR_6->height >> 3;
 if (0 == *VAR_4)
  *VAR_4 = VAR_0;

 if (*VAR_4 < VAR_1)
  *VAR_4 = VAR_1;

 while (*VAR_5 * *VAR_4 > VAR_2 * 1024 * 1024)
  (*VAR_4)--;

 return 0;
}
