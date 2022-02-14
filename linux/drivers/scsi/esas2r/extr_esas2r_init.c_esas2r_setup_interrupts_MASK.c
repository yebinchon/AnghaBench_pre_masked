
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_adapter {int intr_mode; int flags2; int index; int pcid; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,char*,int ,...) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct esas2r_adapter *VAR_3, int VAR_4)
{
 int VAR_5;


 switch (VAR_4) {
 case 129:
use_legacy_interrupts:
  VAR_3->intr_mode = 129;
  break;

 case 128:
  VAR_5 = FUNC_1(VAR_3->pcid);
  if (VAR_5 != 0) {
   FUNC_0(VAR_1,
       "failed to enable MSI for adapter %d, "
       "falling back to legacy interrupts "
       "(err=%d)", VAR_3->index,
       VAR_5);
   goto use_legacy_interrupts;
  }
  VAR_3->intr_mode = 128;
  FUNC_2(VAR_0, &VAR_3->flags2);
  break;


 default:
  FUNC_0(VAR_1,
      "unknown interrupt_mode %d requested, "
      "falling back to legacy interrupt",
      VAR_2);
  goto use_legacy_interrupts;
 }
}
