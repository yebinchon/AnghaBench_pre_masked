
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef int u16 ;
struct pkt_file {int pkt; } ;
struct pkt_attrib {int ether_type; int priority; int subtype; int hdrlen; } ;
struct iphdr {int tos; } ;
struct ethhdr {int dummy; } ;
typedef int ip_hdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct pkt_file*) ;
 int FUNC_1 (struct pkt_file*,unsigned char*,int) ;

void FUNC_2(struct pkt_file *VAR_3, struct pkt_attrib *VAR_4)
{
 struct ethhdr VAR_5;
 struct iphdr VAR_6;
 u16 VAR_7 = 0;

 FUNC_0(VAR_3->pkt, VAR_3);
 FUNC_1(VAR_3, (unsigned char *)&VAR_5, VAR_0);


 if (VAR_4->ether_type == 0x0800) {
  FUNC_1(VAR_3, (u8 *)&VAR_6, sizeof(VAR_6));

  VAR_7 = VAR_6.tos >> 5;
 } else {





  if (VAR_4->ether_type == 0x888e)
   VAR_7 = 7;
 }
 VAR_4->priority = VAR_7;
 VAR_4->hdrlen = VAR_2;
 VAR_4->subtype = VAR_1;
}
