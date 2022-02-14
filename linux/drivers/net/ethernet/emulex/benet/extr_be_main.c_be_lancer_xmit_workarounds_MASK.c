
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_ethhdr {scalar_t__ h_vlan_proto; } ;
struct sk_buff {int len; scalar_t__ ip_summed; int protocol; scalar_t__ data; } ;
struct iphdr {int tot_len; } ;
struct be_wrb_params {int features; } ;
struct be_adapter {scalar_t__ qnq_vid; scalar_t__ pvid; } ;


 int FUNC_0 (int ,int ,int) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_1 (struct be_adapter*,struct sk_buff*,struct be_wrb_params*) ;
 scalar_t__ FUNC_2 (struct be_adapter*,struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct be_adapter*) ;
 scalar_t__ FUNC_4 (struct be_adapter*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct be_adapter*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct sk_buff*,scalar_t__) ;
 int FUNC_12 (struct be_adapter*) ;
 scalar_t__ FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_15(struct be_adapter *VAR_5,
        struct sk_buff *VAR_6,
        struct be_wrb_params
        *VAR_7)
{
 struct vlan_ethhdr *VAR_8 = (struct vlan_ethhdr *)VAR_6->data;
 unsigned int VAR_9;
 struct iphdr *VAR_10;





 VAR_9 = FUNC_10(VAR_6->protocol) == VAR_2 ?
      VAR_3 : VAR_1;
 if (VAR_6->len <= 60 &&
     (FUNC_9(VAR_5) || FUNC_13(VAR_6)) &&
     FUNC_8(VAR_6)) {
  VAR_10 = (struct iphdr *)FUNC_7(VAR_6);
  FUNC_11(VAR_6, VAR_9 + FUNC_10(VAR_10->tot_len));
 }




 if (FUNC_3(VAR_5) &&
     VAR_8->h_vlan_proto == FUNC_6(VAR_2))
  FUNC_0(VAR_7->features, VAR_4, 1);





 if (VAR_6->ip_summed != VAR_0 &&
     FUNC_13(VAR_6)) {
  VAR_6 = FUNC_1(VAR_5, VAR_6, VAR_7);
  if (FUNC_14(!VAR_6))
   goto err;
 }





 if (FUNC_14(FUNC_2(VAR_5, VAR_6) &&
       (VAR_5->pvid || VAR_5->qnq_vid) &&
       !FUNC_12(VAR_5)))
  goto tx_drop;







 if (FUNC_2(VAR_5, VAR_6) &&
     FUNC_4(VAR_5, VAR_6)) {
  VAR_6 = FUNC_1(VAR_5, VAR_6, VAR_7);
  if (FUNC_14(!VAR_6))
   goto err;
 }

 return VAR_6;
tx_drop:
 FUNC_5(VAR_6);
err:
 return ((void*)0);
}
