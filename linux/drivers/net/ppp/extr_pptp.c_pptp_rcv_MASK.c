
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ pkt_type; scalar_t__ data; } ;
struct TYPE_2__ {scalar_t__ protocol; int flags; } ;
struct pptp_gre_header {int call_id; TYPE_1__ gre_hd; } ;
struct pppox_sock {int dummy; } ;
struct iphdr {int saddr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 struct iphdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct pppox_sock* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct pppox_sock*) ;
 int FUNC_10 (int ,struct sk_buff*,int ) ;
 int FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_4)
{
 struct pppox_sock *VAR_5;
 struct pptp_gre_header *VAR_6;
 struct iphdr *VAR_7;

 if (VAR_4->pkt_type != VAR_3)
  goto drop;

 if (!FUNC_8(VAR_4, 12))
  goto drop;

 VAR_7 = FUNC_4(VAR_4);

 VAR_6 = (struct pptp_gre_header *)VAR_4->data;

 if (VAR_6->gre_hd.protocol != VAR_1 ||
  FUNC_0(VAR_6->gre_hd.flags) ||
  FUNC_2(VAR_6->gre_hd.flags) ||
  !FUNC_1(VAR_6->gre_hd.flags) ||
  (VAR_6->gre_hd.flags & VAR_0))

  goto drop;

 VAR_5 = FUNC_6(FUNC_3(VAR_6->call_id), VAR_7->saddr);
 if (VAR_5) {
  FUNC_11(VAR_4);
  FUNC_7(VAR_4);
  return FUNC_10(FUNC_9(VAR_5), VAR_4, 0);
 }
drop:
 FUNC_5(VAR_4);
 return VAR_2;
}
