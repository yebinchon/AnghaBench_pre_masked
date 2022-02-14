
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int fd_id; } ;
struct TYPE_11__ {TYPE_4__ hi_dword; } ;
struct TYPE_8__ {int status_error_len; } ;
struct TYPE_12__ {TYPE_5__ qword0; TYPE_2__ qword1; } ;
union i40e_rx_desc {TYPE_6__ wb; } ;
typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct pci_dev {int dev; } ;
struct i40e_ring {TYPE_1__* vsi; } ;
struct TYPE_9__ {int debug_mask; } ;
struct i40e_pf {scalar_t__ fdir_pf_filter_count; int flags; TYPE_3__ hw; int state; int fd_atr_cnt; int fd_add_err; int fd_inv; struct pci_dev* pdev; } ;
struct TYPE_7__ {struct i40e_pf* back; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (struct i40e_pf*) ;
 scalar_t__ FUNC_4 (struct i40e_pf*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;

void FUNC_10(struct i40e_ring *VAR_10,
      union i40e_rx_desc *VAR_11, u8 VAR_12)
{
 struct i40e_pf *VAR_13 = VAR_10->vsi->back;
 struct pci_dev *VAR_14 = VAR_13->pdev;
 u32 VAR_15, VAR_16;
 u32 VAR_17;
 u64 VAR_18;

 VAR_18 = FUNC_6(VAR_11->wb.qword1.status_error_len);
 VAR_17 = (VAR_18 & VAR_5) >>
  VAR_6;

 if (VAR_17 == FUNC_0(VAR_3)) {
  VAR_13->fd_inv = FUNC_5(VAR_11->wb.qword0.hi_dword.fd_id);
  if ((VAR_11->wb.qword0.hi_dword.fd_id != 0) ||
      (VAR_0 & VAR_13->hw.debug_mask))
   FUNC_2(&VAR_14->dev, "ntuple filter loc = %d, could not be added\n",
     VAR_13->fd_inv);







  if (FUNC_9(VAR_8, VAR_13->state))
   return;

  VAR_13->fd_add_err++;

  VAR_13->fd_atr_cnt = FUNC_3(VAR_13);

  if ((VAR_11->wb.qword0.hi_dword.fd_id == 0) &&
      FUNC_9(VAR_9, VAR_13->state)) {






   FUNC_7(VAR_7, VAR_13->state);
   FUNC_7(VAR_8, VAR_13->state);
  }


  VAR_15 = FUNC_4(VAR_13);
  VAR_16 = VAR_13->fdir_pf_filter_count;




  if (VAR_15 >= (VAR_16 - VAR_1)) {
   if ((VAR_13->flags & VAR_2) &&
       !FUNC_8(VAR_9,
           VAR_13->state))
    if (VAR_0 & VAR_13->hw.debug_mask)
     FUNC_2(&VAR_14->dev, "FD filter space full, new ntuple rules will not be added\n");
  }
 } else if (VAR_17 == FUNC_0(VAR_4)) {
  if (VAR_0 & VAR_13->hw.debug_mask)
   FUNC_1(&VAR_14->dev, "ntuple filter fd_id = %d, could not be removed\n",
     VAR_11->wb.qword0.hi_dword.fd_id);
 }
}
