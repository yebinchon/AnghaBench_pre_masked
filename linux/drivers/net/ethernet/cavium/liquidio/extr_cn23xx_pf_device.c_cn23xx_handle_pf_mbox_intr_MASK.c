
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct TYPE_4__ {size_t num_vfs_alloced; size_t rings_per_vf; } ;
struct octeon_device {TYPE_3__** mbox; TYPE_1__ sriov_info; } ;
struct delayed_work {int dummy; } ;
struct TYPE_5__ {struct delayed_work work; } ;
struct TYPE_6__ {TYPE_2__ mbox_poll_wk; int mbox_int_reg; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct delayed_work*,int ) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct octeon_device *VAR_0)
{
 struct delayed_work *VAR_1;
 u64 VAR_2;
 u32 VAR_3, VAR_4;

 VAR_2 = FUNC_3(VAR_0->mbox[0]->mbox_int_reg);

 for (VAR_3 = 0; VAR_3 < VAR_0->sriov_info.num_vfs_alloced; VAR_3++) {
  VAR_4 = VAR_3 * VAR_0->sriov_info.rings_per_vf;

  if (VAR_2 & FUNC_0(VAR_4)) {
   FUNC_5(FUNC_0(VAR_4),
          VAR_0->mbox[0]->mbox_int_reg);
   if (FUNC_2(VAR_0->mbox[VAR_4])) {
    VAR_1 = &VAR_0->mbox[VAR_4]->mbox_poll_wk.work;
    FUNC_4(VAR_1,
            FUNC_1(0));
   }
  }
 }
}
