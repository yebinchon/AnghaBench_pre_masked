
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx; int rx; } ;
struct wil6210_priv {TYPE_1__ mbox_ctl; scalar_t__ csr; } ;
struct wil6210_mbox_ctl {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct wil6210_priv *VAR_1)
{

 FUNC_1(&VAR_1->mbox_ctl, VAR_1->csr + VAR_0,
        sizeof(struct wil6210_mbox_ctl));
 FUNC_0(&VAR_1->mbox_ctl.rx);
 FUNC_0(&VAR_1->mbox_ctl.tx);
}
