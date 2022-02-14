
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_virtf {int state; int abs_vfid; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;




 int FUNC_2 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_virtf*) ;

int FUNC_4(struct bnx2x *VAR_1, struct bnx2x_virtf *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_0, "VF[%d] STATE: %s\n", VAR_2->abs_vfid,
    VAR_2->state == 129 ? "Free" :
    VAR_2->state == 131 ? "Acquired" :
    VAR_2->state == 130 ? "Enabled" :
    VAR_2->state == 128 ? "Reset" :
    "Unknown");

 switch (VAR_2->state) {
 case 130:
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  if (VAR_3)
   goto op_err;

 case 131:
  FUNC_1(VAR_0, "about to free resources\n");
  FUNC_3(VAR_1, VAR_2);
  break;

 case 129:
 case 128:
 default:
  break;
 }
 return 0;
op_err:
 FUNC_0("VF[%d] RELEASE error: rc %d\n", VAR_2->abs_vfid, VAR_3);
 return VAR_3;
}
