
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_virtf {int op_current; int abs_vfid; int op_mutex; } ;
struct bnx2x {int dummy; } ;
typedef enum channel_tlvs { ____Placeholder_channel_tlvs } channel_tlvs ;


 int FUNC_0 (char*,struct bnx2x_virtf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int,char*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct bnx2x *VAR_2, struct bnx2x_virtf *VAR_3,
    enum channel_tlvs VAR_4)
{
 enum channel_tlvs VAR_5;

 if (!VAR_3) {
  FUNC_0("VF was %p\n", VAR_3);
  return;
 }

 VAR_5 = VAR_3->op_current;


 if (!FUNC_3(VAR_4))
  return;

 FUNC_2(VAR_4 != VAR_3->op_current,
      "lock mismatch: expected %d found %d", VAR_4,
      VAR_3->op_current);


 VAR_3->op_current = VAR_1;


 FUNC_4(&VAR_3->op_mutex);


 FUNC_1(VAR_0, "VF[%d]: vf pf channel unlocked by %d\n",
    VAR_3->abs_vfid, VAR_5);
}
