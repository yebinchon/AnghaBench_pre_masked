
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct napi_struct {int dummy; } ;
struct bnad_rx_ctrl {int rx_schedule; struct napi_struct napi; } ;
struct bnad {int dummy; } ;
struct bna_ccb {scalar_t__ ctrl; } ;


 int FUNC_0 (struct napi_struct*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct napi_struct*) ;

__attribute__((used)) static void
FUNC_3(struct bnad *VAR_0, struct bna_ccb *VAR_1)
{
 struct bnad_rx_ctrl *VAR_2 = (struct bnad_rx_ctrl *)(VAR_1->ctrl);
 struct napi_struct *VAR_3 = &VAR_2->napi;

 if (FUNC_1(FUNC_2(VAR_3))) {
  FUNC_0(VAR_3);
  VAR_2->rx_schedule++;
 }
}
