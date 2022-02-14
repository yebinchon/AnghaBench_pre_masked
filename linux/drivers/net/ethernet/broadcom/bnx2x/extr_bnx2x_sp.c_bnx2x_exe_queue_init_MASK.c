
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union bnx2x_qable_obj {int dummy; } bnx2x_qable_obj ;
struct bnx2x_exe_queue_obj {int exe_chunk_len; int get; int execute; int optimize; int remove; int validate; union bnx2x_qable_obj* owner; int lock; int pending_comp; int exe_queue; } ;
struct bnx2x {int dummy; } ;
typedef int exe_q_validate ;
typedef int exe_q_remove ;
typedef int exe_q_optimize ;
typedef int exe_q_get ;
typedef int exe_q_execute ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bnx2x_exe_queue_obj*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct bnx2x *VAR_1,
     struct bnx2x_exe_queue_obj *VAR_2,
     int VAR_3,
     union bnx2x_qable_obj *VAR_4,
     exe_q_validate VAR_5,
     exe_q_remove VAR_6,
     exe_q_optimize VAR_7,
     exe_q_execute VAR_8,
     exe_q_get VAR_9)
{
 FUNC_2(VAR_2, 0, sizeof(*VAR_2));

 FUNC_1(&VAR_2->exe_queue);
 FUNC_1(&VAR_2->pending_comp);

 FUNC_3(&VAR_2->lock);

 VAR_2->exe_chunk_len = VAR_3;
 VAR_2->owner = VAR_4;


 VAR_2->validate = VAR_5;
 VAR_2->remove = VAR_6;
 VAR_2->optimize = VAR_7;
 VAR_2->execute = VAR_8;
 VAR_2->get = VAR_9;

 FUNC_0(VAR_0, "Setup the execution queue with the chunk length of %d\n",
    VAR_3);
}
