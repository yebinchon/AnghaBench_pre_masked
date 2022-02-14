
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct MessageUnit_B {int drv2iop_doorbell; int iop2drv_doorbell; } ;
struct AdapterControlBlock {struct MessageUnit_B* pmuB; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static uint8_t FUNC_3(struct AdapterControlBlock *VAR_3)
{
 struct MessageUnit_B *VAR_4 = VAR_3->pmuB;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 2000; VAR_5++) {
  if (FUNC_1(VAR_4->iop2drv_doorbell)
   & VAR_1) {
   FUNC_2(VAR_2,
     VAR_4->iop2drv_doorbell);
   FUNC_2(VAR_0,
     VAR_4->drv2iop_doorbell);
   return 1;
  }
  FUNC_0(10);
 }

 return 0;
}
