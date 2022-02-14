
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct qtnf_wmac {struct qtnf_vif* iflist; } ;
struct qtnf_vif {int dummy; } ;
struct TYPE_2__ {int len; } ;
struct qlink_event {size_t vifid; TYPE_1__ mhdr; int event_id; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct qtnf_vif*,void const*,int) ;
 int FUNC_5 (struct qtnf_vif*,void const*,int) ;
 int FUNC_6 (struct qtnf_vif*,void const*,int) ;
 int FUNC_7 (struct qtnf_wmac*,void const*,int) ;
 int FUNC_8 (struct qtnf_vif*,void const*,int) ;
 int FUNC_9 (struct qtnf_vif*,void const*,int) ;
 int FUNC_10 (struct qtnf_wmac*,void const*,int) ;
 int FUNC_11 (struct qtnf_vif*,void const*,int) ;
 int FUNC_12 (struct qtnf_wmac*,struct qtnf_vif*,void const*,int) ;
 int FUNC_13 (struct qtnf_wmac*,struct qtnf_vif*,void const*,int) ;

__attribute__((used)) static int FUNC_14(struct qtnf_wmac *VAR_2,
       const struct sk_buff *VAR_3)
{
 const struct qlink_event *VAR_4;
 struct qtnf_vif *VAR_5 = ((void*)0);
 int VAR_6 = -1;
 u16 VAR_7;
 u16 VAR_8;

 VAR_4 = (const struct qlink_event *)VAR_3->data;
 VAR_7 = FUNC_0(VAR_4->event_id);
 VAR_8 = FUNC_0(VAR_4->mhdr.len);

 if (FUNC_1(VAR_4->vifid < VAR_1)) {
  VAR_5 = &VAR_2->iflist[VAR_4->vifid];
 } else {
  FUNC_2("invalid vif(%u)\n", VAR_4->vifid);
  return -VAR_0;
 }

 switch (VAR_7) {
 case 129:
  VAR_6 = FUNC_12(VAR_2, VAR_5, (const void *)VAR_4,
        VAR_8);
  break;
 case 128:
  VAR_6 = FUNC_13(VAR_2, VAR_5,
         (const void *)VAR_4,
         VAR_8);
  break;
 case 133:
  VAR_6 = FUNC_8(VAR_5, (const void *)VAR_4,
            VAR_8);
  break;
 case 130:
  VAR_6 = FUNC_11(VAR_5, (const void *)VAR_4,
           VAR_8);
  break;
 case 131:
  VAR_6 = FUNC_10(VAR_2, (const void *)VAR_4,
            VAR_8);
  break;
 case 137:
  VAR_6 = FUNC_4(VAR_5, (const void *)VAR_4,
       VAR_8);
  break;
 case 136:
  VAR_6 = FUNC_5(VAR_5, (const void *)VAR_4,
        VAR_8);
  break;
 case 134:
  VAR_6 = FUNC_7(VAR_2, (const void *)VAR_4,
          VAR_8);
  break;
 case 132:
  VAR_6 = FUNC_9(VAR_5, (const void *)VAR_4,
           VAR_8);
  break;
 case 135:
  VAR_6 = FUNC_6(VAR_5, (const void *)VAR_4,
            VAR_8);
  break;
 default:
  FUNC_3("unknown event type: %x\n", VAR_7);
  break;
 }

 return VAR_6;
}
