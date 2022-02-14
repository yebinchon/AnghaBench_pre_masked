
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dcbx_results {int dummy; } ;
typedef enum qed_pci_personality { ____Placeholder_qed_pci_personality } qed_pci_personality ;
typedef enum dcbx_protocol_type { ____Placeholder_dcbx_protocol_type } dcbx_protocol_type ;
struct TYPE_3__ {int id; int personality; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct qed_dcbx_results*,struct qed_hwfn*,struct qed_ptt*,int,int,int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct qed_dcbx_results *VAR_1,
    struct qed_hwfn *VAR_2, struct qed_ptt *VAR_3,
    bool VAR_4, bool VAR_5, u8 VAR_6, u8 VAR_7,
    enum dcbx_protocol_type VAR_8)
{
 enum qed_pci_personality VAR_9;
 enum dcbx_protocol_type VAR_10;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_0); VAR_11++) {
  VAR_10 = VAR_0[VAR_11].id;

  if (VAR_8 != VAR_10)
   continue;

  VAR_9 = VAR_0[VAR_11].personality;

  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
        VAR_6, VAR_7, VAR_8, VAR_9);
 }
}
