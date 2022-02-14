
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MessageUnit_D {int inbound_msgaddr0; } ;
struct AdapterControlBlock {TYPE_1__* host; struct MessageUnit_D* pmuD; } ;
struct TYPE_2__ {int host_no; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct AdapterControlBlock*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct AdapterControlBlock *VAR_1)
{
 int VAR_2 = 15;
 struct MessageUnit_D *VAR_3 = VAR_1->pmuD;

 FUNC_2(VAR_0, VAR_3->inbound_msgaddr0);
 do {
  if (FUNC_0(VAR_1))
   break;

  VAR_2--;
  FUNC_1("arcmsr%d: wait 'flush adapter "
   "cache' timeout, retry count down = %d\n",
   VAR_1->host->host_no, VAR_2);
 } while (VAR_2 != 0);
}
