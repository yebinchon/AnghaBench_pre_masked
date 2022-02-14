
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef void* u16 ;
struct qed_ptt {int dummy; } ;
struct TYPE_5__ {scalar_t__ tc; } ;
struct qed_hwfn {TYPE_2__ ufp_info; TYPE_1__* cdev; } ;
struct qed_dcbx_results {TYPE_3__* arr; } ;
struct dcbx_app_priority_entry {int entry; } ;
typedef enum dcbx_protocol_type { ____Placeholder_dcbx_protocol_type } dcbx_protocol_type ;
struct TYPE_6__ {scalar_t__ tc; int priority; scalar_t__ update; } ;
struct TYPE_4__ {int mf_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int) ;
 void* FUNC_3 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct qed_hwfn*,int ,void*,int*,int) ;
 int FUNC_6 (struct qed_dcbx_results*,struct qed_hwfn*,struct qed_ptt*,int,int,int,scalar_t__,int) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int
FUNC_8(struct qed_hwfn *VAR_8, struct qed_ptt *VAR_9,
       struct qed_dcbx_results *VAR_10,
       struct dcbx_app_priority_entry *VAR_11,
       u32 VAR_12, int VAR_13, u8 VAR_14)
{
 enum dcbx_protocol_type VAR_15;
 bool VAR_16, VAR_17, VAR_18;
 u8 VAR_19, VAR_20;
 u16 VAR_21;
 int VAR_22;
 int VAR_23;

 FUNC_1(VAR_8, VAR_7, "Num APP entries = %d\n", VAR_13);

 VAR_17 = (VAR_14 == VAR_2);
 VAR_18 = 0;

 for (VAR_23 = 0; VAR_23 < VAR_13; VAR_23++) {
  VAR_21 = FUNC_3(VAR_11[VAR_23].entry,
      VAR_1);
  VAR_20 = FUNC_3(VAR_11[VAR_23].entry,
       VAR_0);
  VAR_22 = FUNC_4(VAR_20) - 1;
  if (VAR_22 < 0) {
   FUNC_0(VAR_8, "Invalid priority\n");
   return -VAR_5;
  }

  VAR_19 = FUNC_2(VAR_12, VAR_22);
  if (FUNC_5(VAR_8, VAR_11[VAR_23].entry,
         VAR_21, &VAR_15, VAR_17)) {






   if (VAR_15 == VAR_4) {
    VAR_16 = 0;
    VAR_18 = 1;
   } else {
    VAR_16 = 1;
   }

   FUNC_6(VAR_10, VAR_8, VAR_9, 1,
       VAR_16, VAR_22, VAR_19, VAR_15);
  }
 }


 if (FUNC_7(VAR_6, &VAR_8->cdev->mf_bits) && !VAR_18)
  VAR_10->arr[VAR_4].tc = VAR_8->ufp_info.tc;







 VAR_19 = VAR_10->arr[VAR_4].tc;
 VAR_22 = VAR_10->arr[VAR_4].priority;
 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
  if (VAR_10->arr[VAR_15].update)
   continue;

  VAR_16 = (VAR_15 == VAR_4) ? 0 : !!VAR_14;
  FUNC_6(VAR_10, VAR_8, VAR_9, 0, VAR_16,
      VAR_22, VAR_19, VAR_15);
 }

 return 0;
}
