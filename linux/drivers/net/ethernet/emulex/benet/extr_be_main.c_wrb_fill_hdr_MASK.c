
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct be_wrb_params {int features; int vlan_tag; int lso_mss; } ;
struct be_eth_hdr_wrb {int dummy; } ;
struct be_adapter {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct be_eth_hdr_wrb*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct be_eth_hdr_wrb*,int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (struct sk_buff*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static void FUNC_4(struct be_adapter *VAR_22,
    struct be_eth_hdr_wrb *VAR_23,
    struct be_wrb_params *VAR_24,
    struct sk_buff *VAR_25)
{
 FUNC_2(VAR_23, 0, sizeof(*VAR_23));

 FUNC_1(VAR_9, VAR_23,
       FUNC_0(VAR_24->features, VAR_0));
 FUNC_1(VAR_11, VAR_23,
       FUNC_0(VAR_24->features, VAR_1));
 FUNC_1(VAR_18, VAR_23,
       FUNC_0(VAR_24->features, VAR_5));
 FUNC_1(VAR_19, VAR_23,
       FUNC_0(VAR_24->features, VAR_6));

 FUNC_1(VAR_13, VAR_23,
       FUNC_0(VAR_24->features, VAR_2));
 FUNC_1(VAR_14, VAR_23,
       FUNC_0(VAR_24->features, VAR_3));
 FUNC_1(VAR_15, VAR_23, VAR_24->lso_mss);




 FUNC_1(VAR_10, VAR_23,
       FUNC_0(VAR_24->features, VAR_8));
 FUNC_1(VAR_20, VAR_23,
       FUNC_0(VAR_24->features, VAR_7));
 FUNC_1(VAR_21, VAR_23, VAR_24->vlan_tag);

 FUNC_1(VAR_17, VAR_23, FUNC_3(VAR_25));
 FUNC_1(VAR_12, VAR_23, VAR_25->len);
 FUNC_1(VAR_16, VAR_23,
       FUNC_0(VAR_24->features, VAR_4));
}
