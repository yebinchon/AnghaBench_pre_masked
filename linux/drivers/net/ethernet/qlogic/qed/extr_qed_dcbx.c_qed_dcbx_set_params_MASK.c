
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct qed_ptt {int dummy; } ;
struct TYPE_6__ {int personality; } ;
struct qed_hwfn {TYPE_2__* cdev; TYPE_3__ hw_info; } ;
struct qed_dcbx_results {TYPE_1__* arr; } ;
typedef enum qed_pci_personality { ____Placeholder_qed_pci_personality } qed_pci_personality ;
typedef enum dcbx_protocol_type { ____Placeholder_dcbx_protocol_type } dcbx_protocol_type ;
struct TYPE_5__ {int mf_bits; } ;
struct TYPE_4__ {int enable; int priority; int tc; int dont_add_vlan0; int update; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct qed_dcbx_results *VAR_7,
      struct qed_hwfn *VAR_8, struct qed_ptt *VAR_9,
      bool VAR_10, bool VAR_11, u8 VAR_12, u8 VAR_13,
      enum dcbx_protocol_type VAR_14,
      enum qed_pci_personality VAR_15)
{

 VAR_7->arr[VAR_14].enable = VAR_11;
 VAR_7->arr[VAR_14].priority = VAR_12;
 VAR_7->arr[VAR_14].tc = VAR_13;
 if (VAR_11)
  VAR_7->arr[VAR_14].update = VAR_6;
 else
  VAR_7->arr[VAR_14].update = VAR_1;

 if (FUNC_2(VAR_4, &VAR_8->cdev->mf_bits))
  VAR_7->arr[VAR_14].dont_add_vlan0 = 1;


 if (VAR_10 && VAR_8->hw_info.personality == VAR_15)
  FUNC_0(&VAR_8->hw_info, VAR_13);


 if (FUNC_2(VAR_5, &VAR_8->cdev->mf_bits) &&
     VAR_14 == VAR_0) {
  FUNC_1(VAR_8, VAR_9, VAR_3, 1);
  FUNC_1(VAR_8, VAR_9, VAR_2, VAR_12 << 1);
 }
}
