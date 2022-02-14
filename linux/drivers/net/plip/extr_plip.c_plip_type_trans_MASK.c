
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* data; int pkt_type; } ;
struct net_device {int broadcast; int hard_header_len; } ;
struct ethhdr {int h_proto; int h_dest; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ethhdr* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static __be16 FUNC_7(struct sk_buff *VAR_5, struct net_device *VAR_6)
{
 struct ethhdr *VAR_7;
 unsigned char *VAR_8;

 FUNC_6(VAR_5);
 FUNC_5(VAR_5,VAR_6->hard_header_len);
 VAR_7 = FUNC_0(VAR_5);

 if(FUNC_3(VAR_7->h_dest))
 {
  if(FUNC_1(VAR_7->h_dest, VAR_6->broadcast))
   VAR_5->pkt_type=VAR_3;
  else
   VAR_5->pkt_type=VAR_4;
 }






 if (FUNC_4(VAR_7->h_proto) >= VAR_2)
  return VAR_7->h_proto;

 VAR_8 = VAR_5->data;







 if (*(unsigned short *)VAR_8 == 0xFFFF)
  return FUNC_2(VAR_1);




 return FUNC_2(VAR_0);
}
