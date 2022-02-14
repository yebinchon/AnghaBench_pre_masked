
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_output_handle {TYPE_2__* event; TYPE_1__* rb; } ;
struct TYPE_4__ {int pending_wakeup; int pending; } ;
struct TYPE_3__ {int poll; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct perf_output_handle *VAR_1)
{
 FUNC_0(&VAR_1->rb->poll, VAR_0);

 VAR_1->event->pending_wakeup = 1;
 FUNC_1(&VAR_1->event->pending);
}
