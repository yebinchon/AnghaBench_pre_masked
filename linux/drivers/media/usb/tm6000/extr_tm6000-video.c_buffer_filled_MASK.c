
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tm6000_dmaqueue {int dummy; } ;
struct tm6000_core {int dummy; } ;
struct TYPE_2__ {int done; int queue; int ts; int field_count; int state; int i; } ;
struct tm6000_buffer {TYPE_1__ vb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tm6000_core*,int ,char*,struct tm6000_buffer*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct tm6000_core *VAR_2,
     struct tm6000_dmaqueue *VAR_3,
     struct tm6000_buffer *VAR_4)
{

 FUNC_0(VAR_2, VAR_0, "[%p/%d] wakeup\n", VAR_4, VAR_4->vb.i);
 VAR_4->vb.state = VAR_1;
 VAR_4->vb.field_count++;
 VAR_4->vb.ts = FUNC_1();

 FUNC_2(&VAR_4->vb.queue);
 FUNC_3(&VAR_4->vb.done);
}
