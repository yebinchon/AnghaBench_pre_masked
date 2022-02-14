
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct work_struct {int dummy; } ;
struct octeon_mbox {int mbox_write_reg; int mbox_int_reg; struct octeon_device* oct_dev; } ;
struct TYPE_2__ {size_t num_vfs_alloced; size_t rings_per_vf; } ;
struct octeon_device {scalar_t__ rev_id; struct octeon_mbox** mbox; TYPE_1__ sriov_info; } ;
struct cavium_wk {int work; scalar_t__ ctxptr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct octeon_mbox*) ;
 scalar_t__ FUNC_2 (struct octeon_mbox*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_6(struct work_struct *VAR_2)
{
 struct cavium_wk *VAR_3 = (struct cavium_wk *)VAR_2;
 struct octeon_mbox *VAR_4 = (struct octeon_mbox *)VAR_3->ctxptr;
 struct octeon_device *VAR_5 = VAR_4->oct_dev;
 u64 VAR_6, VAR_7;
 u32 VAR_8, VAR_9;

 if (VAR_5->rev_id < VAR_0) {

  VAR_6 = FUNC_3(VAR_4->mbox_int_reg);
  FUNC_5(VAR_6, VAR_4->mbox_int_reg);

  for (VAR_9 = 0; VAR_9 < VAR_5->sriov_info.num_vfs_alloced; VAR_9++) {
   VAR_8 = VAR_9 * VAR_5->sriov_info.rings_per_vf;

   VAR_7 = FUNC_3(VAR_5->mbox[VAR_8]->mbox_write_reg);

   if (VAR_7 && (VAR_7 != VAR_1)) {
    if (FUNC_2(VAR_5->mbox[VAR_8]))
     FUNC_1(
         VAR_5->mbox[VAR_8]);
   }
  }

  FUNC_4(&VAR_3->work, FUNC_0(10));
 } else {
  FUNC_1(VAR_4);
 }
}
