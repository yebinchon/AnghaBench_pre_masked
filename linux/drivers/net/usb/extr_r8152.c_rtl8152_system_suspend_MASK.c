
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* down ) (struct r8152*) ;} ;
struct napi_struct {int dummy; } ;
struct r8152 {int tx_tl; TYPE_1__ rtl_ops; int schedule; int intr_urb; int flags; struct napi_struct napi; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct napi_struct*) ;
 int FUNC_3 (struct napi_struct*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct r8152*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct r8152 *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;

 FUNC_4(VAR_2);

 if (FUNC_5(VAR_2) && FUNC_9(VAR_0, &VAR_1->flags)) {
  struct napi_struct *VAR_3 = &VAR_1->napi;

  FUNC_1(VAR_0, &VAR_1->flags);
  FUNC_10(VAR_1->intr_urb);
  FUNC_7(&VAR_1->tx_tl);
  FUNC_2(VAR_3);
  FUNC_0(&VAR_1->schedule);
  VAR_1->rtl_ops.down(VAR_1);
  FUNC_3(VAR_3);
  FUNC_8(&VAR_1->tx_tl);
 }

 return 0;
}
