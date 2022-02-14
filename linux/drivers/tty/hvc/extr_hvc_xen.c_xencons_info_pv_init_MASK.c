
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xencons_info {int vtermno; int list; int intf; int evtchn; } ;
struct TYPE_4__ {int mfn; int evtchn; } ;
struct TYPE_5__ {TYPE_1__ domU; } ;
struct TYPE_6__ {TYPE_2__ console; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct xencons_info *VAR_2, int VAR_3)
{
 VAR_2->evtchn = VAR_0->console.domU.evtchn;

 VAR_2->intf = FUNC_0(VAR_0->console.domU.mfn);
 VAR_2->vtermno = VAR_3;

 FUNC_1(&VAR_2->list, &VAR_1);

 return 0;
}
