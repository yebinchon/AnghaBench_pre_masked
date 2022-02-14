
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int device_capabilities; } ;
struct qed_hwfn {TYPE_1__ hw_info; } ;
typedef enum qed_pci_personality { ____Placeholder_qed_pci_personality } qed_pci_personality ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct qed_hwfn *VAR_4,
          enum qed_pci_personality *VAR_5)
{



 if (FUNC_1(VAR_1, &VAR_4->hw_info.device_capabilities))
  *VAR_5 = VAR_3;
 else
  *VAR_5 = VAR_2;

 FUNC_0(VAR_4, VAR_0,
     "According to Legacy capabilities, L2 personality is %08x\n",
     (u32) *VAR_5);
}
