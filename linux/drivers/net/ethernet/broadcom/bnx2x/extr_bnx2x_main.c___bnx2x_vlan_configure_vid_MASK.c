
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct bnx2x {TYPE_2__* fp; TYPE_1__* sp_objs; } ;
struct TYPE_4__ {int index; } ;
struct TYPE_3__ {int vlan_obj; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned long*) ;
 int FUNC_2 (struct bnx2x*,int ,int *,int,unsigned long*) ;
 int FUNC_3 (struct bnx2x*,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct bnx2x *VAR_1, u16 VAR_2, bool VAR_3)
{
 int VAR_4;

 if (FUNC_0(VAR_1)) {
  unsigned long VAR_5 = 0;

  FUNC_1(VAR_0, &VAR_5);
  VAR_4 = FUNC_2(VAR_1, VAR_2, &VAR_1->sp_objs->vlan_obj,
     VAR_3, &VAR_5);
 } else {
  VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_1->fp->index, VAR_3);
 }

 return VAR_4;
}
