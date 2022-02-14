
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct pkt_attrib {int ether_type; int priority; int subtype; int hdrlen; } ;
struct iphdr {int tos; } ;
typedef int ip_hdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,int ,struct iphdr*,int) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_4, struct pkt_attrib *VAR_5)
{
 if (VAR_5->ether_type == 0x0800) {
  struct iphdr VAR_6;

  FUNC_0(VAR_4, VAR_0, &VAR_6, sizeof(VAR_6));
  VAR_5->priority = VAR_6.tos >> 5;
 } else if (VAR_5->ether_type == VAR_1) {




  VAR_5->priority = 7;
 } else {
  VAR_5->priority = 0;
 }

 VAR_5->hdrlen = VAR_3;
 VAR_5->subtype = VAR_2;
}
