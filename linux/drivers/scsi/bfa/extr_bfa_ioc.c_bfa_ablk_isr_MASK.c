
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ msg_class; int msg_id; } ;
struct bfi_mbmsg_s {TYPE_1__ mh; } ;
struct bfi_ablk_i2h_rsp_s {int status; int pcifn; int port_mode; } ;
struct TYPE_5__ {int kva; } ;
struct bfa_ablk_s {int cbarg; int (* cbfn ) (int ,int ) ;int busy; int * pcifn; TYPE_3__* ioc; int * cfg; TYPE_2__ dma_addr; } ;
struct bfa_ablk_cfg_s {int dummy; } ;
typedef int (* bfa_ablk_cbfn_t ) (int ,int ) ;
struct TYPE_6__ {int port_mode_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_3, struct bfi_mbmsg_s *VAR_4)
{
 struct bfa_ablk_s *VAR_5 = (struct bfa_ablk_s *)VAR_3;
 struct bfi_ablk_i2h_rsp_s *VAR_6 = (struct bfi_ablk_i2h_rsp_s *)VAR_4;
 bfa_ablk_cbfn_t VAR_7;

 FUNC_0(VAR_4->mh.msg_class != VAR_2);
 FUNC_2(VAR_5->ioc, VAR_4->mh.msg_id);

 switch (VAR_4->mh.msg_id) {
 case 128:
  if (VAR_6->status == VAR_1) {
   FUNC_3(VAR_5->cfg, VAR_5->dma_addr.kva,
    sizeof(struct bfa_ablk_cfg_s));
   FUNC_1(VAR_5->cfg);
   VAR_5->cfg = ((void*)0);
  }
  break;

 case 135:
 case 129:

  VAR_5->ioc->port_mode_cfg = VAR_6->port_mode;

 case 131:
 case 130:
 case 133:
 case 134:

  break;

 case 132:
  *(VAR_5->pcifn) = VAR_6->pcifn;
  VAR_5->pcifn = ((void*)0);
  break;

 default:
  FUNC_0(1);
 }

 VAR_5->busy = VAR_0;
 if (VAR_5->cbfn) {
  VAR_7 = VAR_5->cbfn;
  VAR_5->cbfn = ((void*)0);
  VAR_7(VAR_5->cbarg, VAR_6->status);
 }
}
