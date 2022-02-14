
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct xencons_info {scalar_t__ evtchn; } ;
struct TYPE_4__ {scalar_t__ evtchn; } ;
struct TYPE_5__ {TYPE_1__ domU; } ;
struct TYPE_6__ {TYPE_2__ console; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__*) ;
 scalar_t__ FUNC_1 () ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct xencons_info *VAR_2)
{
 if (FUNC_1()) {
  uint64_t VAR_3 = 0;
  int VAR_4;

  VAR_4 = FUNC_0(VAR_0, &VAR_3);
  if (!VAR_4 && VAR_3)
   VAR_2->evtchn = VAR_3;
 } else
  VAR_2->evtchn = VAR_1->console.domU.evtchn;
}
