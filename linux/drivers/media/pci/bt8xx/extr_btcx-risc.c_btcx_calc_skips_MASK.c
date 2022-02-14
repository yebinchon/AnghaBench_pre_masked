
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int left; int width; int top; int height; } ;
struct v4l2_clip {TYPE_1__ c; } ;
struct btcx_skiplist {int end; scalar_t__ start; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(int VAR_1, int VAR_2, int *VAR_3,
  struct btcx_skiplist *VAR_4, unsigned int *VAR_5,
  const struct v4l2_clip *VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8,VAR_9;
 int VAR_10, VAR_11;

 VAR_9=0;
 VAR_11 = 9999;
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {


  if (VAR_6[VAR_8].c.left + VAR_6[VAR_8].c.width <= 0)
   continue;
  if (VAR_6[VAR_8].c.left > (signed)VAR_2)
   break;


  if (VAR_1 > VAR_6[VAR_8].c.top+VAR_6[VAR_8].c.height-1)
   continue;
  if (VAR_1 < VAR_6[VAR_8].c.top) {
   if (VAR_11 > VAR_6[VAR_8].c.top-1)
    VAR_11 = VAR_6[VAR_8].c.top-1;
   continue;
  }
  if (VAR_11 > VAR_6[VAR_8].c.top+VAR_6[VAR_8].c.height-1)
   VAR_11 = VAR_6[VAR_8].c.top+VAR_6[VAR_8].c.height-1;


  if (0 == VAR_9 || VAR_6[VAR_8].c.left > VAR_4[VAR_9-1].end) {

   VAR_4[VAR_9].start = VAR_6[VAR_8].c.left;
   if (VAR_4[VAR_9].start < 0)
    VAR_4[VAR_9].start = 0;
   VAR_4[VAR_9].end = VAR_6[VAR_8].c.left + VAR_6[VAR_8].c.width;
   if (VAR_4[VAR_9].end > VAR_2)
    VAR_4[VAR_9].end = VAR_2;
   VAR_9++;
  } else {

   VAR_10 = VAR_6[VAR_8].c.left + VAR_6[VAR_8].c.width;
   if (VAR_4[VAR_9-1].end < VAR_10)
    VAR_4[VAR_9-1].end = VAR_10;
   if (VAR_4[VAR_9-1].end > VAR_2)
    VAR_4[VAR_9-1].end = VAR_2;
  }
 }
 *VAR_5 = VAR_9;
 *VAR_3 = VAR_11;

 if (VAR_0) {
  FUNC_0("btcx: skips line %d-%d:", VAR_1, VAR_11);
  for (VAR_9 = 0; VAR_9 < *VAR_5; VAR_9++) {
   FUNC_1(" %d-%d", VAR_4[VAR_9].start, VAR_4[VAR_9].end);
  }
  FUNC_1("\n");
 }
}
