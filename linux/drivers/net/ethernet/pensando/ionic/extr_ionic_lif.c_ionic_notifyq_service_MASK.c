
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int ecode; int eid; } ;
struct TYPE_7__ {int state; int reset_code; } ;
union ionic_notifyq_comp {TYPE_4__ event; TYPE_3__ reset; } ;
typedef scalar_t__ u64 ;
struct net_device {int dummy; } ;
struct ionic_queue {TYPE_1__* info; } ;
struct ionic_lif {scalar_t__ last_eid; TYPE_2__* ionic; struct net_device* netdev; } ;
struct ionic_cq_info {union ionic_notifyq_comp* cq_desc; } ;
struct ionic_cq {struct ionic_queue* bound_q; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {struct ionic_lif* cb_arg; } ;


 int VAR_0 ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int ,int,int,union ionic_notifyq_comp*,int,int) ;
 int FUNC_2 (struct ionic_lif*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*,char*,scalar_t__,...) ;
 int FUNC_6 (struct net_device*,char*,int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_7(struct ionic_cq *VAR_1,
      struct ionic_cq_info *VAR_2)
{
 union ionic_notifyq_comp *VAR_3 = VAR_2->cq_desc;
 struct net_device *VAR_4;
 struct ionic_queue *VAR_5;
 struct ionic_lif *VAR_6;
 u64 VAR_7;

 VAR_5 = VAR_1->bound_q;
 VAR_6 = VAR_5->info[0].cb_arg;
 VAR_4 = VAR_6->netdev;
 VAR_7 = FUNC_4(VAR_3->event.eid);


 if (VAR_7 <= VAR_6->last_eid)
  return 0;

 VAR_6->last_eid = VAR_7;

 FUNC_0(VAR_6->ionic->dev, "notifyq event:\n");
 FUNC_1("event ", VAR_0, 16, 1,
    VAR_3, sizeof(*VAR_3), 1);

 switch (FUNC_3(VAR_3->event.ecode)) {
 case 129:
  FUNC_2(VAR_6);
  break;
 case 128:
  FUNC_5(VAR_4, "Notifyq IONIC_EVENT_RESET eid=%lld\n",
       VAR_7);
  FUNC_5(VAR_4, "  reset_code=%d state=%d\n",
       VAR_3->reset.reset_code,
       VAR_3->reset.state);
  break;
 default:
  FUNC_6(VAR_4, "Notifyq unknown event ecode=%d eid=%lld\n",
       VAR_3->event.ecode, VAR_7);
  break;
 }

 return 1;
}
