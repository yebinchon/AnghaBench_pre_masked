
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct TYPE_6__ {int work; void* ctxptr; } ;
struct octeon_mbox {size_t q_no; TYPE_3__ mbox_poll_wk; int * mbox_read_reg; int * mbox_write_reg; int * mbox_int_reg; int state; struct octeon_device* oct_dev; int lock; } ;
struct TYPE_4__ {size_t max_vfs; size_t rings_per_vf; } ;
struct octeon_device {scalar_t__ rev_id; struct octeon_mbox** mbox; TYPE_2__* mmio; TYPE_1__ sriov_info; int pf_num; int pcie_port; } ;
struct TYPE_5__ {scalar_t__ hw_addr; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct octeon_mbox*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct octeon_mbox*) ;
 struct octeon_mbox* FUNC_8 (int) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct octeon_device *VAR_4)
{
 struct octeon_mbox *VAR_5 = ((void*)0);
 u16 VAR_6 = VAR_4->pcie_port;
 u16 VAR_7 = VAR_4->pf_num;
 u32 VAR_8, VAR_9;

 if (!VAR_4->sriov_info.max_vfs)
  return 0;

 for (VAR_9 = 0; VAR_9 < VAR_4->sriov_info.max_vfs; VAR_9++) {
  VAR_8 = VAR_9 * VAR_4->sriov_info.rings_per_vf;

  VAR_5 = FUNC_8(sizeof(*VAR_5));
  if (!VAR_5)
   goto free_mbox;

  FUNC_3(VAR_5, 0, sizeof(struct octeon_mbox));

  FUNC_6(&VAR_5->lock);

  VAR_5->oct_dev = VAR_4;

  VAR_5->q_no = VAR_8;

  VAR_5->state = VAR_1;


  VAR_5->mbox_int_reg = (u8 *)VAR_4->mmio[0].hw_addr +
         FUNC_0(VAR_6, VAR_7);


  VAR_5->mbox_write_reg = (u8 *)VAR_4->mmio[0].hw_addr +
           FUNC_1(VAR_8, 0);


  VAR_5->mbox_read_reg = (u8 *)VAR_4->mmio[0].hw_addr +
          FUNC_1(VAR_8, 1);


  FUNC_2(&VAR_5->mbox_poll_wk.work,
      VAR_3);
  VAR_5->mbox_poll_wk.ctxptr = (void *)VAR_5;

  VAR_4->mbox[VAR_8] = VAR_5;

  FUNC_9(VAR_2, VAR_5->mbox_read_reg);
 }

 if (VAR_4->rev_id < VAR_0)
  FUNC_5(&VAR_4->mbox[0]->mbox_poll_wk.work,
          FUNC_4(0));

 return 0;

free_mbox:
 while (VAR_9) {
  VAR_9--;
  FUNC_7(VAR_4->mbox[VAR_9]);
 }

 return 1;
}
