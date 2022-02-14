
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {TYPE_1__* cdev; } ;
struct coalescing_timeset {int value; } ;
struct TYPE_2__ {scalar_t__ int_coalescing_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (void*,int ,size_t) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ,void*,size_t) ;

__attribute__((used)) static int FUNC_4(struct qed_hwfn *VAR_4, struct qed_ptt *VAR_5,
       u32 VAR_6, void *VAR_7,
       size_t VAR_8, u8 VAR_9)
{
 struct coalescing_timeset *VAR_10;

 if (VAR_4->cdev->int_coalescing_mode != VAR_3) {
  FUNC_0(VAR_4, "Coalescing configuration not enabled\n");
  return -VAR_2;
 }

 VAR_10 = VAR_7;
 FUNC_2(VAR_7, 0, VAR_8);
 FUNC_1(VAR_10->value, VAR_0, VAR_9);
 FUNC_1(VAR_10->value, VAR_1, 1);
 FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

 return 0;
}
