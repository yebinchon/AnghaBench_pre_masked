
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct myrb_hba {scalar_t__ new_ev_seq; int need_err_info; int need_ldev_info; int need_rbld; int rbld_first; int need_cc_status; int host; scalar_t__ secondary_monitor_time; int bgi_status_supported; int need_bgi_status; int old_ev_seq; struct myrb_enquiry* enquiry; int enquiry_addr; } ;
struct TYPE_2__ {scalar_t__ deferred; } ;
struct myrb_enquiry {int ldev_count; scalar_t__ ev_seq; scalar_t__ ldev_offline; scalar_t__ pdev_dead; scalar_t__ rbld; int ldev_critical; TYPE_1__ status; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;

 scalar_t__ VAR_3 ;
 unsigned short VAR_4 ;


 scalar_t__ VAR_5 ;
 int FUNC_0 (struct myrb_enquiry*,struct myrb_enquiry*,int) ;
 unsigned short FUNC_1 (struct myrb_hba*,int ,int ) ;
 int FUNC_2 (int ,int ,char*,...) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static unsigned short FUNC_4(struct myrb_hba *VAR_6)
{
 struct myrb_enquiry VAR_7, *VAR_8;
 unsigned short VAR_9;

 FUNC_0(&VAR_7, VAR_6->enquiry, sizeof(struct myrb_enquiry));

 VAR_9 = FUNC_1(VAR_6, VAR_2, VAR_6->enquiry_addr);
 if (VAR_9 != VAR_4)
  return VAR_9;

 VAR_8 = VAR_6->enquiry;
 if (VAR_8->ldev_count > VAR_7.ldev_count) {
  int VAR_10 = VAR_7.ldev_count - 1;

  while (++VAR_10 < VAR_8->ldev_count)
   FUNC_2(VAR_0, VAR_6->host,
         "Logical Drive %d Now Exists\n",
         VAR_10);
 }
 if (VAR_8->ldev_count < VAR_7.ldev_count) {
  int VAR_11 = VAR_8->ldev_count - 1;

  while (++VAR_11 < VAR_7.ldev_count)
   FUNC_2(VAR_0, VAR_6->host,
         "Logical Drive %d No Longer Exists\n",
         VAR_11);
 }
 if (VAR_8->status.deferred != VAR_7.status.deferred)
  FUNC_2(VAR_0, VAR_6->host,
        "Deferred Write Error Flag is now %s\n",
        (VAR_8->status.deferred ? "TRUE" : "FALSE"));
 if (VAR_8->ev_seq != VAR_7.ev_seq) {
  VAR_6->new_ev_seq = VAR_8->ev_seq;
  VAR_6->need_err_info = 1;
  FUNC_2(VAR_1, VAR_6->host,
        "Event log %d/%d (%d/%d) available\n",
        VAR_6->old_ev_seq, VAR_6->new_ev_seq,
        VAR_7.ev_seq, VAR_8->ev_seq);
 }
 if ((VAR_8->ldev_critical > 0 &&
      VAR_8->ldev_critical != VAR_7.ldev_critical) ||
     (VAR_8->ldev_offline > 0 &&
      VAR_8->ldev_offline != VAR_7.ldev_offline) ||
     (VAR_8->ldev_count != VAR_7.ldev_count)) {
  FUNC_2(VAR_1, VAR_6->host,
        "Logical drive count changed (%d/%d/%d)\n",
        VAR_8->ldev_critical,
        VAR_8->ldev_offline,
        VAR_8->ldev_count);
  VAR_6->need_ldev_info = 1;
 }
 if (VAR_8->pdev_dead > 0 ||
     VAR_8->pdev_dead != VAR_7.pdev_dead ||
     FUNC_3(VAR_5, VAR_6->secondary_monitor_time
     + VAR_3)) {
  VAR_6->need_bgi_status = VAR_6->bgi_status_supported;
  VAR_6->secondary_monitor_time = VAR_5;
 }
 if (VAR_8->rbld == 128 ||
     VAR_8->rbld == 135 ||
     VAR_7.rbld == 128 ||
     VAR_7.rbld == 135) {
  VAR_6->need_rbld = 1;
  VAR_6->rbld_first = (VAR_8->ldev_critical < VAR_7.ldev_critical);
 }
 if (VAR_7.rbld == 136)
  switch (VAR_8->rbld) {
  case 130:
   FUNC_2(VAR_1, VAR_6->host,
         "Consistency Check Completed Successfully\n");
   break;
  case 128:
  case 135:
   break;
  case 136:
   VAR_6->need_cc_status = 1;
   break;
  case 129:
   FUNC_2(VAR_1, VAR_6->host,
         "Consistency Check Completed with Error\n");
   break;
  case 134:
   FUNC_2(VAR_1, VAR_6->host,
         "Consistency Check Failed - Physical Device Failed\n");
   break;
  case 133:
   FUNC_2(VAR_1, VAR_6->host,
         "Consistency Check Failed - Logical Drive Failed\n");
   break;
  case 132:
   FUNC_2(VAR_1, VAR_6->host,
         "Consistency Check Failed - Other Causes\n");
   break;
  case 131:
   FUNC_2(VAR_1, VAR_6->host,
         "Consistency Check Successfully Terminated\n");
   break;
  }
 else if (VAR_8->rbld == 136)
  VAR_6->need_cc_status = 1;

 return VAR_4;
}
