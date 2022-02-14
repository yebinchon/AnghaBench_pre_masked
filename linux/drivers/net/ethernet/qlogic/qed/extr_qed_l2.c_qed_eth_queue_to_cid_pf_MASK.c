
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qed_queue_start_common_params {int dummy; } ;
struct qed_queue_cid {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 struct qed_queue_cid* FUNC_0 (struct qed_hwfn*,int ,struct qed_queue_start_common_params*,int,int *) ;

__attribute__((used)) static struct qed_queue_cid *
FUNC_1(struct qed_hwfn *VAR_0,
   u16 VAR_1,
   bool VAR_2,
   struct qed_queue_start_common_params *VAR_3)
{
 return FUNC_0(VAR_0, VAR_1, VAR_3, VAR_2,
        ((void*)0));
}
