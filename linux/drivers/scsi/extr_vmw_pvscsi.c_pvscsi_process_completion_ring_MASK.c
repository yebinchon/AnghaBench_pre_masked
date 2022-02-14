
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pvscsi_adapter {struct PVSCSIRingCmpDesc* cmp_ring; struct PVSCSIRingsState* rings_state; } ;
struct PVSCSIRingsState {int cmpConsIdx; int cmpProdIdx; int cmpNumEntriesLog2; } ;
struct PVSCSIRingCmpDesc {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct pvscsi_adapter*,struct PVSCSIRingCmpDesc*) ;

__attribute__((used)) static void FUNC_3(struct pvscsi_adapter *VAR_0)
{
 struct PVSCSIRingsState *VAR_1 = VAR_0->rings_state;
 struct PVSCSIRingCmpDesc *VAR_2 = VAR_0->cmp_ring;
 u32 VAR_3 = VAR_1->cmpNumEntriesLog2;

 while (VAR_1->cmpConsIdx != VAR_1->cmpProdIdx) {
  struct PVSCSIRingCmpDesc *VAR_4 = VAR_2 + (VAR_1->cmpConsIdx &
            FUNC_0(VAR_3));






  FUNC_1();
  FUNC_2(VAR_0, VAR_4);






  FUNC_1();
  VAR_1->cmpConsIdx++;
 }
}
