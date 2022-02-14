
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int (* disable ) (struct r8152*) ;int (* enable ) (struct r8152*) ;} ;
struct napi_struct {int dummy; } ;
struct r8152 {scalar_t__ tx_qlen; int tx_tl; TYPE_1__ rtl_ops; int tx_queue; struct napi_struct napi; int flags; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (struct napi_struct*) ;
 int FUNC_3 (struct napi_struct*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct r8152*,int ,struct net_device*,char*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct r8152*) ;
 int FUNC_12 (struct r8152*) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (struct r8152*) ;
 int FUNC_15 (struct r8152*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static void FUNC_18(struct r8152 *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;
 struct napi_struct *VAR_5 = &VAR_3->napi;
 u8 VAR_6;

 VAR_6 = FUNC_11(VAR_3);

 if (VAR_6 & VAR_0) {
  if (!FUNC_5(VAR_4)) {
   VAR_3->rtl_ops.enable(VAR_3);
   FUNC_9(VAR_4);
   FUNC_2(VAR_5);
   FUNC_6(VAR_4);
   FUNC_12(VAR_3);
   FUNC_1(VAR_1, &VAR_3->flags);
   FUNC_0(VAR_4);
   FUNC_3(&VAR_3->napi);
   FUNC_10(VAR_4);
   FUNC_7(VAR_3, VAR_2, VAR_4, "carrier on\n");
  } else if (FUNC_8(VAR_4) &&
      FUNC_13(&VAR_3->tx_queue) < VAR_3->tx_qlen) {
   FUNC_10(VAR_4);
  }
 } else {
  if (FUNC_5(VAR_4)) {
   FUNC_4(VAR_4);
   FUNC_16(&VAR_3->tx_tl);
   FUNC_2(VAR_5);
   VAR_3->rtl_ops.disable(VAR_3);
   FUNC_3(VAR_5);
   FUNC_17(&VAR_3->tx_tl);
   FUNC_7(VAR_3, VAR_2, VAR_4, "carrier off\n");
  }
 }
}
