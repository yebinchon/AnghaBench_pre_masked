
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_adapter {int use_req_threshold; struct PVSCSIRingsState* rings_state; } ;
struct PVSCSIRingsState {scalar_t__ reqProdIdx; scalar_t__ reqConsIdx; scalar_t__ reqCallThreshold; } ;


 int FUNC_0 (struct pvscsi_adapter const*) ;
 int FUNC_1 (struct pvscsi_adapter const*) ;
 scalar_t__ FUNC_2 (unsigned char) ;

__attribute__((used)) static void FUNC_3(const struct pvscsi_adapter *VAR_0,
      unsigned char VAR_1)
{
 if (FUNC_2(VAR_1)) {
  struct PVSCSIRingsState *VAR_2 = VAR_0->rings_state;

  if (!VAR_0->use_req_threshold ||
      VAR_2->reqProdIdx - VAR_2->reqConsIdx >= VAR_2->reqCallThreshold)
   FUNC_0(VAR_0);
 } else {
  FUNC_1(VAR_0);
 }
}
