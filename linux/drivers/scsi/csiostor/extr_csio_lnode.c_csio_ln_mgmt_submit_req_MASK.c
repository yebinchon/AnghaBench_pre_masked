
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int n_active; } ;
struct csio_mgmtm {TYPE_2__ stats; int active_q; int iq_idx; int eq_idx; } ;
struct TYPE_3__ {int sm_list; } ;
struct csio_ioreq {void (* io_cbfn ) (struct csio_hw*,struct csio_ioreq*) ;uintptr_t fw_handle; TYPE_1__ sm; int iq_idx; int eq_idx; int lnode; } ;
struct csio_hw {int dummy; } ;
struct csio_dma_buf {int len; } ;
typedef enum fcoe_cmn_type { ____Placeholder_fcoe_cmn_type } fcoe_cmn_type ;


 int FUNC_0 (int) ;
 struct csio_mgmtm* FUNC_1 (struct csio_hw*) ;
 int FUNC_2 (struct csio_mgmtm*,struct csio_ioreq*,int,struct csio_dma_buf*,int ) ;
 struct csio_hw* FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int
FUNC_5(struct csio_ioreq *VAR_0,
  void (*VAR_1) (struct csio_hw *, struct csio_ioreq *),
  enum fcoe_cmn_type VAR_2, struct csio_dma_buf *VAR_3,
  uint32_t VAR_4)
{
 struct csio_hw *VAR_5 = FUNC_3(VAR_0->lnode);
 struct csio_mgmtm *VAR_6 = FUNC_1(VAR_5);
 int VAR_7;

 FUNC_0(VAR_4 > VAR_3->len);

 VAR_0->io_cbfn = VAR_1;
 VAR_0->fw_handle = (uintptr_t) (VAR_0);
 VAR_0->eq_idx = VAR_6->eq_idx;
 VAR_0->iq_idx = VAR_6->iq_idx;

 VAR_7 = FUNC_2(VAR_6, VAR_0, VAR_2, VAR_3, VAR_4);
 if (VAR_7 == 0) {
  FUNC_4(&VAR_0->sm.sm_list, &VAR_6->active_q);
  VAR_6->stats.n_active++;
 }
 return VAR_7;
}
