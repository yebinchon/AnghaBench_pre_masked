
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ ip_summed; int protocol; } ;
struct qm_fd {int cmd; } ;
struct ipv6hdr {int nexthdr; } ;
struct iphdr {int protocol; } ;
struct fman_prs_result {int* ip_off; int l4_off; int l4r; void* l3r; } ;
struct dpaa_priv {int net_dev; } ;
struct TYPE_2__ {int h_vlan_encapsulated_proto; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 struct iphdr* FUNC_3 (struct sk_buff*) ;
 struct ipv6hdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct dpaa_priv*,int ,int ,char*,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 int VAR_9 ;
 TYPE_1__* FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_12(struct dpaa_priv *VAR_10,
          struct sk_buff *VAR_11,
          struct qm_fd *VAR_12,
          char *VAR_13)
{
 struct fman_prs_result *VAR_14;
 u16 VAR_15 = FUNC_7(VAR_11->protocol);
 struct ipv6hdr *VAR_16 = ((void*)0);
 struct iphdr *VAR_17;
 int VAR_18 = 0;
 u8 VAR_19;

 if (VAR_11->ip_summed != VAR_0)
  return 0;
 VAR_14 = (struct fman_prs_result *)VAR_13;


 if (VAR_15 == VAR_2) {



  FUNC_9(VAR_11);
  VAR_15 = FUNC_7(FUNC_11(VAR_11)->h_vlan_encapsulated_proto);
 }




 switch (VAR_15) {
 case 131:
  VAR_14->l3r = FUNC_1(VAR_5);
  VAR_17 = FUNC_3(VAR_11);
  FUNC_0(!VAR_17);
  VAR_19 = VAR_17->protocol;
  break;
 case 130:
  VAR_14->l3r = FUNC_1(VAR_6);
  VAR_16 = FUNC_4(VAR_11);
  FUNC_0(!VAR_16);
  VAR_19 = VAR_16->nexthdr;
  break;
 default:

  if (FUNC_5())
   FUNC_6(VAR_10, VAR_9, VAR_10->net_dev,
        "Can't compute HW csum for L3 proto 0x%x\n",
        FUNC_7(VAR_11->protocol));
  VAR_18 = -VAR_1;
  goto return_error;
 }


 switch (VAR_19) {
 case 128:
  VAR_14->l4r = VAR_8;
  break;
 case 129:
  VAR_14->l4r = VAR_7;
  break;
 default:
  if (FUNC_5())
   FUNC_6(VAR_10, VAR_9, VAR_10->net_dev,
        "Can't compute HW csum for L4 proto 0x%x\n",
        VAR_19);
  VAR_18 = -VAR_1;
  goto return_error;
 }


 VAR_14->ip_off[0] = (u8)FUNC_8(VAR_11);
 VAR_14->l4_off = (u8)FUNC_10(VAR_11);


 VAR_12->cmd |= FUNC_2(VAR_4 | VAR_3);







return_error:
 return VAR_18;
}
