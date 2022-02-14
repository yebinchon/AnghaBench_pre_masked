
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MessageUnit_D {int outbound_doorbell; } ;
struct AdapterControlBlock {struct MessageUnit_D* pmuD; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static bool FUNC_3(struct AdapterControlBlock *VAR_1)
{
 struct MessageUnit_D *VAR_2 = VAR_1->pmuD;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 2000; VAR_3++) {
  if (FUNC_1(VAR_2->outbound_doorbell)
   & VAR_0) {
   FUNC_2(VAR_0,
    VAR_2->outbound_doorbell);
   return 1;
  }
  FUNC_0(10);
 }
 return 0;
}
