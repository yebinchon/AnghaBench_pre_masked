
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_5__ {int reason; } ;
struct TYPE_4__ {int bytes_requested; } ;
struct TYPE_6__ {TYPE_2__ ofa_cancelled; TYPE_1__ ofa_memory_allocation; } ;
struct pqi_event_response {TYPE_3__ data; } ;
struct pqi_event {scalar_t__ event_type; int ofa_cancel_reason; int ofa_bytes_requested; int event_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct pqi_event *VAR_3,
 struct pqi_event_response *VAR_4)
{
 u16 VAR_5;

 VAR_5 = FUNC_0(&VAR_3->event_id);

 if (VAR_3->event_type == VAR_2) {
  if (VAR_5 == VAR_1) {
   VAR_3->ofa_bytes_requested =
   VAR_4->data.ofa_memory_allocation.bytes_requested;
  } else if (VAR_5 == VAR_0) {
   VAR_3->ofa_cancel_reason =
   VAR_4->data.ofa_cancelled.reason;
  }
 }
}
