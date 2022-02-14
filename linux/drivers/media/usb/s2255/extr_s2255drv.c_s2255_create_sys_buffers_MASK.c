
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long dwFrames; TYPE_1__* frame; } ;
struct s2255_vc {int last_frame; scalar_t__ cur_frame; TYPE_2__ buffer; } ;
struct TYPE_3__ {unsigned long size; scalar_t__ cur_size; scalar_t__ ulState; int * lpvbits; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (unsigned long) ;

__attribute__((used)) static int FUNC_2(struct s2255_vc *VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;
 VAR_2->buffer.dwFrames = VAR_0;

 VAR_4 = VAR_1;

 if (VAR_4 > VAR_1)
  VAR_4 = VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {

  VAR_2->buffer.frame[VAR_3].lpvbits = FUNC_1(VAR_4);
  VAR_2->buffer.frame[VAR_3].size = VAR_4;
  if (VAR_2->buffer.frame[VAR_3].lpvbits == ((void*)0)) {
   FUNC_0("out of memory.  using less frames\n");
   VAR_2->buffer.dwFrames = VAR_3;
   break;
  }
 }


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2->buffer.frame[VAR_3].ulState = 0;
  VAR_2->buffer.frame[VAR_3].cur_size = 0;
 }

 VAR_2->cur_frame = 0;
 VAR_2->last_frame = -1;
 return 0;
}
