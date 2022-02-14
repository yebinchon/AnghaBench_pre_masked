
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct qtnf_wmac {int dummy; } ;
struct qtnf_bus {int dummy; } ;
struct TYPE_2__ {int len; } ;
struct qlink_event {int vifid; int macid; TYPE_1__ mhdr; int event_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 struct qtnf_wmac* FUNC_3 (struct qtnf_bus*,int ) ;
 int FUNC_4 (struct qtnf_wmac*,struct sk_buff const*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct qtnf_bus *VAR_2,
      const struct sk_buff *VAR_3)
{
 const struct qlink_event *VAR_4;
 struct qtnf_wmac *VAR_5;
 int VAR_6;

 if (FUNC_7(!VAR_3 || VAR_3->len < sizeof(*VAR_4))) {
  FUNC_2("invalid event buffer\n");
  return -VAR_0;
 }

 VAR_4 = (struct qlink_event *)VAR_3->data;

 VAR_5 = FUNC_3(VAR_2, VAR_4->macid);

 FUNC_1("new event id:%x len:%u mac:%u vif:%u\n",
   FUNC_0(VAR_4->event_id), FUNC_0(VAR_4->mhdr.len),
   VAR_4->macid, VAR_4->vifid);

 if (FUNC_7(!VAR_5))
  return -VAR_1;

 FUNC_5();
 VAR_6 = FUNC_4(VAR_5, VAR_3);
 FUNC_6();

 return VAR_6;
}
