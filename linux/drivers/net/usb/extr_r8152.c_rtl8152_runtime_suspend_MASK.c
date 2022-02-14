
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct napi_struct {int dummy; } ;
struct TYPE_2__ {int (* autosuspend_en ) (struct r8152*,int) ;} ;
struct r8152 {struct napi_struct napi; TYPE_1__ rtl_ops; int intr_urb; int flags; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct r8152*) ;
 int FUNC_2 (struct napi_struct*) ;
 int FUNC_3 (struct napi_struct*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct r8152*,int ,int ) ;
 int FUNC_7 (struct r8152*,int ,int ) ;
 int FUNC_8 (struct r8152*,int ,int ,int) ;
 int FUNC_9 (struct r8152*) ;
 int FUNC_10 (struct r8152*) ;
 int FUNC_11 (struct r8152*,int) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 () ;
 int FUNC_14 (struct r8152*,int) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct r8152 *VAR_8)
{
 struct net_device *VAR_9 = VAR_8->netdev;
 int VAR_10 = 0;

 FUNC_12(VAR_6, &VAR_8->flags);
 FUNC_13();

 if (FUNC_5(VAR_9) && FUNC_15(VAR_7, &VAR_8->flags)) {
  u32 VAR_11 = 0;

  if (FUNC_4(VAR_9)) {
   u32 VAR_12;

   VAR_11 = FUNC_7(VAR_8, VAR_1, VAR_3);
   VAR_12 = VAR_11 & ~VAR_4;
   FUNC_8(VAR_8, VAR_1, VAR_3, VAR_12);
   FUNC_11(VAR_8, 1);
   VAR_12 = FUNC_6(VAR_8, VAR_1,
       VAR_2);
   if (!(VAR_12 & VAR_5)) {
    FUNC_11(VAR_8, 0);
    FUNC_8(VAR_8, VAR_1, VAR_3, VAR_11);
    FUNC_0(VAR_6, &VAR_8->flags);
    FUNC_13();
    VAR_10 = -VAR_0;
    goto out1;
   }
  }

  FUNC_0(VAR_7, &VAR_8->flags);
  FUNC_16(VAR_8->intr_urb);

  VAR_8->rtl_ops.autosuspend_en(VAR_8, 1);

  if (FUNC_4(VAR_9)) {
   struct napi_struct *VAR_13 = &VAR_8->napi;

   FUNC_2(VAR_13);
   FUNC_10(VAR_8);
   FUNC_11(VAR_8, 0);
   FUNC_8(VAR_8, VAR_1, VAR_3, VAR_11);
   FUNC_3(VAR_13);
  }

  if (FUNC_1(VAR_8)) {
   FUNC_9(VAR_8);
   VAR_10 = -VAR_0;
  }
 }

out1:
 return VAR_10;
}
