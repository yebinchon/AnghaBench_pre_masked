
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xgene_enet_pdata {int mss_lock; int * mss; TYPE_1__* mac_ops; int * mss_refcnt; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int (* set_mss ) (struct xgene_enet_pdata*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct xgene_enet_pdata* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct xgene_enet_pdata*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, u32 VAR_3)
{
 struct xgene_enet_pdata *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = -VAR_0;
 int VAR_6;

 FUNC_1(&VAR_4->mss_lock);


 for (VAR_6 = 0; VAR_5 < 0 && VAR_6 < VAR_1; VAR_6++) {
  if (VAR_4->mss[VAR_6] == VAR_3) {
   VAR_4->mss_refcnt[VAR_6]++;
   VAR_5 = VAR_6;
  }
 }


 for (VAR_6 = 0; VAR_5 < 0 && VAR_6 < VAR_1; VAR_6++) {
  if (!VAR_4->mss_refcnt[VAR_6]) {
   VAR_4->mss_refcnt[VAR_6]++;
   VAR_4->mac_ops->set_mss(VAR_4, VAR_3, VAR_6);
   VAR_4->mss[VAR_6] = VAR_3;
   VAR_5 = VAR_6;
  }
 }

 FUNC_2(&VAR_4->mss_lock);

 return VAR_5;
}
