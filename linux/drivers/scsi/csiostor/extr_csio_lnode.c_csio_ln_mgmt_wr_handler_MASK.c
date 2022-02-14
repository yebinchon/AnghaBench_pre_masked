
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct fw_fcoe_els_ct_wr {scalar_t__ cookie; } ;
struct TYPE_4__ {int n_active; int n_err; } ;
struct csio_mgmtm {TYPE_2__ stats; int hw; } ;
struct TYPE_3__ {int sm_list; } ;
struct csio_ioreq {int (* io_cbfn ) (struct csio_hw*,struct csio_ioreq*) ;TYPE_1__ sm; int wr_status; } ;
struct csio_hw {int lock; } ;


 int FUNC_0 (int ,char*,...) ;
 struct csio_mgmtm* FUNC_1 (struct csio_hw*) ;
 scalar_t__ FUNC_2 (struct csio_mgmtm*,struct csio_ioreq*) ;
 int FUNC_3 (struct fw_fcoe_els_ct_wr*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct csio_hw*,struct csio_ioreq*) ;

__attribute__((used)) static void
FUNC_8(struct csio_hw *VAR_0, void *VAR_1, uint32_t VAR_2)
{
 struct csio_mgmtm *VAR_3 = FUNC_1(VAR_0);
 struct csio_ioreq *VAR_4 = ((void*)0);
 struct fw_fcoe_els_ct_wr *VAR_5;


 VAR_5 = (struct fw_fcoe_els_ct_wr *) VAR_1;

 if (VAR_2 < sizeof(struct fw_fcoe_els_ct_wr)) {
  FUNC_0(VAR_3->hw,
    "Invalid ELS CT WR length recvd, len:%x\n", VAR_2);
  VAR_3->stats.n_err++;
  return;
 }

 VAR_4 = (struct csio_ioreq *) ((uintptr_t) VAR_5->cookie);
 VAR_4->wr_status = FUNC_3(VAR_5);


 FUNC_5(&VAR_0->lock);
 if (FUNC_2(VAR_3, VAR_4) != 0) {
  FUNC_0(VAR_3->hw,
   "Error- Invalid IO handle recv in WR. handle: %p\n",
   VAR_4);
  VAR_3->stats.n_err++;
  FUNC_6(&VAR_0->lock);
  return;
 }

 VAR_3 = FUNC_1(VAR_0);


 FUNC_4(&VAR_4->sm.sm_list);
 VAR_3->stats.n_active--;
 FUNC_6(&VAR_0->lock);


 if (VAR_4->io_cbfn)
  VAR_4->io_cbfn(VAR_0, VAR_4);
}
