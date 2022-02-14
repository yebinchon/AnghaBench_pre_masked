
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_hwfn {TYPE_1__* simd_proto_handler; } ;
struct qed_dev {int num_hwfns; struct qed_hwfn* hwfns; } ;
struct TYPE_2__ {void (* func ) (void*) ;void* token; } ;



__attribute__((used)) static void FUNC_0(struct qed_dev *VAR_0, void *VAR_1,
        int VAR_2, void(*VAR_3)(void *))
{
 struct qed_hwfn *VAR_4 = &VAR_0->hwfns[VAR_2 % VAR_0->num_hwfns];
 int VAR_5 = VAR_2 / VAR_0->num_hwfns;

 VAR_4->simd_proto_handler[VAR_5].func = VAR_3;
 VAR_4->simd_proto_handler[VAR_5].token = VAR_1;
}
