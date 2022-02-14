
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* autosuspend_en ) (struct r8152*,int) ;int (* disable ) (struct r8152*) ;} ;
struct napi_struct {int dummy; } ;
struct r8152 {int flags; TYPE_1__ rtl_ops; int intr_urb; struct napi_struct napi; int rx_done; struct net_device* netdev; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct napi_struct*) ;
 int FUNC_3 (struct napi_struct*) ;
 int FUNC_4 (struct napi_struct*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct r8152*,int ,struct net_device*,char*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct r8152*) ;
 int FUNC_10 (struct r8152*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 () ;
 int FUNC_13 (struct r8152*,int) ;
 int FUNC_14 (struct r8152*) ;
 int FUNC_15 (struct r8152*,int) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static int FUNC_17(struct r8152 *VAR_6)
{
 struct net_device *VAR_7 = VAR_6->netdev;

 if (FUNC_8(VAR_7) && VAR_7->flags & VAR_1) {
  struct napi_struct *VAR_8 = &VAR_6->napi;

  VAR_6->rtl_ops.autosuspend_en(VAR_6, 0);
  FUNC_2(VAR_8);
  FUNC_11(VAR_4, &VAR_6->flags);

  if (FUNC_6(VAR_7)) {
   if (FUNC_9(VAR_6) & VAR_2) {
    FUNC_10(VAR_6);
   } else {
    FUNC_5(VAR_7);
    VAR_6->rtl_ops.disable(VAR_6);
    FUNC_7(VAR_6, VAR_5, VAR_7, "linking down\n");
   }
  }

  FUNC_3(VAR_8);
  FUNC_0(VAR_3, &VAR_6->flags);
  FUNC_12();

  if (!FUNC_1(&VAR_6->rx_done))
   FUNC_4(&VAR_6->napi);

  FUNC_16(VAR_6->intr_urb, VAR_0);
 } else {
  if (VAR_7->flags & VAR_1)
   VAR_6->rtl_ops.autosuspend_en(VAR_6, 0);

  FUNC_0(VAR_3, &VAR_6->flags);
 }

 return 0;
}
