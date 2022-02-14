
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {TYPE_1__* cdev; } ;
typedef enum BAR_ID { ____Placeholder_BAR_ID } BAR_ID ;
struct TYPE_2__ {int num_hwfns; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int) ;
 int FUNC_3 (struct qed_hwfn*,int) ;

__attribute__((used)) static u32 FUNC_4(struct qed_hwfn *VAR_3,
      struct qed_ptt *VAR_4, enum BAR_ID VAR_5)
{
 u32 VAR_6 = (VAR_5 == VAR_0 ?
         VAR_1 : VAR_2);
 u32 VAR_7;

 if (FUNC_1(VAR_3->cdev))
  return FUNC_3(VAR_3, VAR_5);

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_6);
 if (VAR_7)
  return 1 << (VAR_7 + 15);


 if (VAR_3->cdev->num_hwfns > 1) {
  FUNC_0(VAR_3,
   "BAR size not configured. Assuming BAR size of 256kB for GRC and 512kB for DB\n");
   return VAR_0 ? 256 * 1024 : 512 * 1024;
 } else {
  FUNC_0(VAR_3,
   "BAR size not configured. Assuming BAR size of 512kB for GRC and 512kB for DB\n");
   return 512 * 1024;
 }
}
