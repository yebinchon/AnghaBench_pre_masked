
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {size_t max_vfs; size_t rings_per_vf; } ;
struct octeon_device {TYPE_3__** mbox; TYPE_1__ sriov_info; } ;
struct TYPE_5__ {int work; } ;
struct TYPE_6__ {TYPE_2__ mbox_poll_wk; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(struct octeon_device *VAR_0)
{
 u32 VAR_1, VAR_2;

 if (!VAR_0->sriov_info.max_vfs)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->sriov_info.max_vfs; VAR_2++) {
  VAR_1 = VAR_2 * VAR_0->sriov_info.rings_per_vf;
  FUNC_0(
      &VAR_0->mbox[VAR_1]->mbox_poll_wk.work);
  FUNC_1(VAR_0->mbox[VAR_1]);
 }

 return 0;
}
