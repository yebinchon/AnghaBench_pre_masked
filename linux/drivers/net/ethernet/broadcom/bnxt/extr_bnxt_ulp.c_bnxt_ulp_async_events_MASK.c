
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hwrm_async_event_cmpl {int event_id; } ;
struct bnxt_ulp_ops {int (* ulp_async_notifier ) (int ,struct hwrm_async_event_cmpl*) ;} ;
struct bnxt_ulp {scalar_t__ max_async_event_id; int handle; int async_events_bmap; int ulp_ops; } ;
struct bnxt_en_dev {struct bnxt_ulp* ulp_tbl; } ;
struct bnxt {struct bnxt_en_dev* edev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct bnxt_ulp_ops* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,struct hwrm_async_event_cmpl*) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;

void FUNC_7(struct bnxt *VAR_1, struct hwrm_async_event_cmpl *VAR_2)
{
 u16 VAR_3 = FUNC_0(VAR_2->event_id);
 struct bnxt_en_dev *VAR_4 = VAR_1->edev;
 struct bnxt_ulp_ops *VAR_5;
 int VAR_6;

 if (!VAR_4)
  return;

 FUNC_2();
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  struct bnxt_ulp *VAR_7 = &VAR_4->ulp_tbl[VAR_6];

  VAR_5 = FUNC_1(VAR_7->ulp_ops);
  if (!VAR_5 || !VAR_5->ulp_async_notifier)
   continue;
  if (!VAR_7->async_events_bmap ||
      VAR_3 > VAR_7->max_async_event_id)
   continue;


  FUNC_4();
  if (FUNC_6(VAR_3, VAR_7->async_events_bmap))
   VAR_5->ulp_async_notifier(VAR_7->handle, VAR_2);
 }
 FUNC_3();
}
