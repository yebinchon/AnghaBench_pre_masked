
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_virtf {int op_current; int abs_vfid; int op_mutex; } ;
struct bnx2x {int dummy; } ;
typedef enum channel_tlvs { ____Placeholder_channel_tlvs } channel_tlvs ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct bnx2x *VAR_1, struct bnx2x_virtf *VAR_2,
         enum channel_tlvs VAR_3)
{

 if (!FUNC_2(VAR_3)) {
  FUNC_0("attempting to lock with unsupported tlv. Aborting\n");
  return;
 }


 FUNC_3(&VAR_2->op_mutex);


 VAR_2->op_current = VAR_3;


 FUNC_1(VAR_0, "VF[%d]: vf pf channel locked by %d\n",
    VAR_2->abs_vfid, VAR_3);
}
