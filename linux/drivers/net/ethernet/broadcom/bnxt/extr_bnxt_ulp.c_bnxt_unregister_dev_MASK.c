
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct bnxt_ulp {int ref_count; int * async_events_bmap; scalar_t__ max_async_event_id; int ulp_ops; scalar_t__ msix_requested; } ;
struct bnxt_en_dev {TYPE_1__* en_ops; struct bnxt_ulp* ulp_tbl; struct net_device* net; } ;
struct bnxt {int dev; } ;
struct TYPE_2__ {int (* bnxt_free_msix ) (struct bnxt_en_dev*,int) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct bnxt*,int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int) ;
 struct bnxt* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct bnxt_en_dev*,int) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct bnxt_en_dev *VAR_3, int VAR_4)
{
 struct net_device *VAR_5 = VAR_3->net;
 struct bnxt *VAR_6 = FUNC_6(VAR_5);
 struct bnxt_ulp *VAR_7;
 int VAR_8 = 0;

 FUNC_0();
 if (VAR_4 >= VAR_0)
  return -VAR_2;

 VAR_7 = &VAR_3->ulp_tbl[VAR_4];
 if (!FUNC_7(VAR_7->ulp_ops)) {
  FUNC_5(VAR_6->dev, "ulp id %d not registered\n", VAR_4);
  return -VAR_2;
 }
 if (VAR_4 == VAR_1 && VAR_7->msix_requested)
  VAR_3->en_ops->bnxt_free_msix(VAR_3, VAR_4);

 if (VAR_7->max_async_event_id)
  FUNC_3(VAR_6, ((void*)0), 0);

 FUNC_1(VAR_7->ulp_ops, ((void*)0));
 FUNC_9();
 VAR_7->max_async_event_id = 0;
 VAR_7->async_events_bmap = ((void*)0);
 while (FUNC_2(&VAR_7->ref_count) != 0 && VAR_8 < 10) {
  FUNC_4(100);
  VAR_8++;
 }
 return 0;
}
