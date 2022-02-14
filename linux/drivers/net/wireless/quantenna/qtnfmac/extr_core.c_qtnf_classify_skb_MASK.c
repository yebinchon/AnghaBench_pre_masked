
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct qtnf_wmac {struct qtnf_vif* iflist; } ;
struct TYPE_2__ {scalar_t__ iftype; } ;
struct qtnf_vif {struct net_device* netdev; TYPE_1__ wdev; } ;
struct qtnf_frame_meta_info {size_t magic_s; size_t magic_e; size_t macid; size_t ifidx; } ;
struct qtnf_bus {scalar_t__ fw_state; struct qtnf_wmac** mac; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct sk_buff*,scalar_t__) ;
 int FUNC_1 (char*,size_t,...) ;
 int FUNC_2 (struct qtnf_frame_meta_info*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;

struct net_device *FUNC_5(struct qtnf_bus *VAR_4, struct sk_buff *VAR_5)
{
 struct qtnf_frame_meta_info *VAR_6;
 struct net_device *VAR_7 = ((void*)0);
 struct qtnf_wmac *VAR_8;
 struct qtnf_vif *VAR_9;

 if (FUNC_4(VAR_4->fw_state != VAR_1))
  return ((void*)0);

 VAR_6 = (struct qtnf_frame_meta_info *)
  (FUNC_3(VAR_5) - sizeof(*VAR_6));

 if (FUNC_4(!FUNC_2(VAR_6))) {
  FUNC_1("invalid magic 0x%x:0x%x\n",
       VAR_6->magic_s, VAR_6->magic_e);
  goto out;
 }

 if (FUNC_4(VAR_6->macid >= VAR_3)) {
  FUNC_1("invalid mac(%u)\n", VAR_6->macid);
  goto out;
 }

 if (FUNC_4(VAR_6->ifidx >= VAR_2)) {
  FUNC_1("invalid vif(%u)\n", VAR_6->ifidx);
  goto out;
 }

 VAR_8 = VAR_4->mac[VAR_6->macid];

 if (FUNC_4(!VAR_8)) {
  FUNC_1("mac(%d) does not exist\n", VAR_6->macid);
  goto out;
 }

 VAR_9 = &VAR_8->iflist[VAR_6->ifidx];

 if (FUNC_4(VAR_9->wdev.iftype == VAR_0)) {
  FUNC_1("vif(%u) does not exists\n", VAR_6->ifidx);
  goto out;
 }

 VAR_7 = VAR_9->netdev;

 if (FUNC_4(!VAR_7)) {
  FUNC_1("netdev for wlan%u.%u does not exists\n",
       VAR_6->macid, VAR_6->ifidx);
  goto out;
 }

 FUNC_0(VAR_5, VAR_5->len - sizeof(*VAR_6));

out:
 return VAR_7;
}
