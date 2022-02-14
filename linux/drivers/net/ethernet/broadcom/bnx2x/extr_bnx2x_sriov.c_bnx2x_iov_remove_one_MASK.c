
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnx2x {TYPE_1__* vfdb; } ;
struct TYPE_4__ {int total; scalar_t__ first_vf_in_pf; } ;
struct TYPE_3__ {TYPE_2__ sriov; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct bnx2x*,scalar_t__) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct bnx2x*,int ) ;
 int FUNC_7 (struct bnx2x*,int ) ;

void FUNC_8(struct bnx2x *VAR_1)
{
 int VAR_2;


 if (!FUNC_3(VAR_1))
  return;

 FUNC_5(VAR_1);


 for (VAR_2 = 0; VAR_2 < VAR_1->vfdb->sriov.total; VAR_2++) {
  FUNC_6(VAR_1,
       FUNC_2(VAR_1,
      VAR_1->vfdb->sriov.first_vf_in_pf +
      VAR_2));
  FUNC_1(VAR_0, "disabling internal access for vf %d\n",
     VAR_1->vfdb->sriov.first_vf_in_pf + VAR_2);
  FUNC_7(VAR_1, 0);
  FUNC_6(VAR_1, FUNC_0(VAR_1));
 }


 FUNC_4(VAR_1);
}
