
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MessageUnit_D {int inbound_msgaddr0; } ;
struct AdapterControlBlock {TYPE_1__* host; int acb_flags; struct MessageUnit_D* pmuD; } ;
struct TYPE_2__ {int host_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct AdapterControlBlock*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct AdapterControlBlock *VAR_2)
{
 struct MessageUnit_D *VAR_3 = VAR_2->pmuD;

 VAR_2->acb_flags &= ~VAR_0;
 FUNC_2(VAR_1, VAR_3->inbound_msgaddr0);
 if (!FUNC_0(VAR_2))
  FUNC_1("arcmsr%d: wait 'stop adapter background rebuild' "
   "timeout\n", VAR_2->host->host_no);
}
