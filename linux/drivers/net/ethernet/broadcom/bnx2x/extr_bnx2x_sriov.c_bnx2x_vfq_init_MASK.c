
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct bnx2x_virtf {int abs_vfid; } ;
struct TYPE_2__ {int func_id; } ;
struct bnx2x_vf_queue {int sp_initialized; int cid; TYPE_1__ sp_obj; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bnx2x*,TYPE_1__*,int ,int *,int,int ,int ,int ,unsigned long) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_virtf*,int ) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_virtf*,int ) ;
 int VAR_3 ;
 int FUNC_5 (int ,unsigned long*) ;
 int FUNC_6 (struct bnx2x_virtf*,struct bnx2x_vf_queue*) ;

__attribute__((used)) static void FUNC_7(struct bnx2x *VAR_4, struct bnx2x_virtf *VAR_5,
      struct bnx2x_vf_queue *VAR_6)
{
 u8 VAR_7 = FUNC_6(VAR_5, VAR_6);
 u8 VAR_8 = FUNC_1(VAR_5->abs_vfid);
 unsigned long VAR_9 = 0;

 FUNC_5(VAR_2, &VAR_9);
 FUNC_5(VAR_1, &VAR_9);


 FUNC_2(VAR_4, &VAR_6->sp_obj,
        VAR_7, &VAR_6->cid, 1, VAR_8,
        FUNC_3(VAR_4, VAR_5, VAR_3),
        FUNC_4(VAR_4, VAR_5, VAR_3),
        VAR_9);


 VAR_6->sp_initialized = 0;

 FUNC_0(VAR_0,
    "initialized vf %d's queue object. func id set to %d. cid set to 0x%x\n",
    VAR_5->abs_vfid, VAR_6->sp_obj.func_id, VAR_6->cid);
}
