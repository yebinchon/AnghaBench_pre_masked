
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct MessageUnit_D {int inbound_msgaddr0; } ;
struct AdapterControlBlock {TYPE_1__* host; struct MessageUnit_D* pmuD; } ;
struct TYPE_2__ {int host_no; } ;


 int VAR_0 ;
 int FUNC_0 (struct AdapterControlBlock*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static uint8_t FUNC_3(struct AdapterControlBlock *VAR_1)
{
 struct MessageUnit_D *VAR_2 = VAR_1->pmuD;

 FUNC_2(VAR_0, VAR_2->inbound_msgaddr0);
 if (!FUNC_0(VAR_1)) {
  FUNC_1("arcmsr%d: wait 'abort all outstanding "
   "command' timeout\n", VAR_1->host->host_no);
  return 0;
 }
 return 1;
}
