
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct bnxt_ulp {unsigned long* async_events_bmap; scalar_t__ max_async_event_id; } ;
struct bnxt_en_dev {struct bnxt_ulp* ulp_tbl; struct net_device* net; } ;
struct bnxt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*,unsigned long*,scalar_t__) ;
 struct bnxt* FUNC_1 (struct net_device*) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct bnxt_en_dev *VAR_2, int VAR_3,
          unsigned long *VAR_4, u16 VAR_5)
{
 struct net_device *VAR_6 = VAR_2->net;
 struct bnxt *VAR_7 = FUNC_1(VAR_6);
 struct bnxt_ulp *VAR_8;

 if (VAR_3 >= VAR_0)
  return -VAR_1;

 VAR_8 = &VAR_2->ulp_tbl[VAR_3];
 VAR_8->async_events_bmap = VAR_4;

 FUNC_2();
 VAR_8->max_async_event_id = VAR_5;
 FUNC_0(VAR_7, VAR_4, VAR_5 + 1);
 return 0;
}
