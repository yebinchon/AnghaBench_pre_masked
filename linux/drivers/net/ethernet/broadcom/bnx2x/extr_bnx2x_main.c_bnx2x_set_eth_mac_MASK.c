
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bnx2x {TYPE_1__* fp; TYPE_3__* dev; TYPE_2__* sp_objs; } ;
struct TYPE_6__ {int dev_addr; } ;
struct TYPE_5__ {int mac_obj; } ;
struct TYPE_4__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,unsigned long*) ;
 int FUNC_3 (struct bnx2x*,int ,int *,int,int ,unsigned long*) ;
 int FUNC_4 (struct bnx2x*,int ,int ,int) ;

int FUNC_5(struct bnx2x *VAR_3, bool VAR_4)
{
 if (FUNC_1(VAR_3)) {
  unsigned long VAR_5 = 0;

  FUNC_0(VAR_1, "Adding Eth MAC\n");
  FUNC_2(VAR_2, &VAR_5);
  return FUNC_3(VAR_3, VAR_3->dev->dev_addr,
      &VAR_3->sp_objs->mac_obj, VAR_4,
      VAR_0, &VAR_5);
 } else {
  return FUNC_4(VAR_3, VAR_3->dev->dev_addr,
          VAR_3->fp->index, VAR_4);
 }
}
