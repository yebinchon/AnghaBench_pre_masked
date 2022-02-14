
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_queue_state_params {struct bnx2x_queue_sp_obj* q_obj; } ;
struct bnx2x_queue_sp_obj {int cl_id; int * cids; } ;
struct bnx2x {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnx2x*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct bnx2x *VAR_3,
        struct bnx2x_queue_state_params *VAR_4)
{
 struct bnx2x_queue_sp_obj *VAR_5 = VAR_4->q_obj;

 return FUNC_0(VAR_3, VAR_2,
        VAR_5->cids[VAR_0], 0, VAR_5->cl_id,
        VAR_1);
}
