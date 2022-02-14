
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tid_info {int nftids; int ftid_lock; int ftid_bmap; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; struct tid_info tids; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 struct adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct net_device *VAR_1, int VAR_2)
{
 struct adapter *VAR_3 = FUNC_4(VAR_1);
 struct tid_info *VAR_4 = &VAR_3->tids;
 int VAR_5;

 FUNC_5(&VAR_4->ftid_lock);
 if (VAR_2 == VAR_0) {
  VAR_5 = FUNC_2(VAR_4->ftid_bmap, VAR_4->nftids);
  if (VAR_5 >= VAR_4->nftids)
   VAR_5 = -1;
 } else {
  if (FUNC_3(VAR_3->params.chip)) {
   VAR_5 = FUNC_0(VAR_4->ftid_bmap,
             VAR_4->nftids, 1);
   if (VAR_5 < 0)
    goto out_unlock;




   FUNC_1(VAR_4->ftid_bmap, VAR_5, 1);
  } else {
   VAR_5 = FUNC_0(VAR_4->ftid_bmap,
             VAR_4->nftids, 2);
   if (VAR_5 < 0)
    goto out_unlock;

   FUNC_1(VAR_4->ftid_bmap, VAR_5, 2);
  }
 }
out_unlock:
 FUNC_6(&VAR_4->ftid_lock);
 return VAR_5;
}
