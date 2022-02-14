
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct udphdr {void* len; int dest; int source; } ;
struct sk_buff {int len; void* protocol; } ;
struct iphdr {int version; int ihl; int ttl; scalar_t__ check; void* tot_len; scalar_t__ frag_off; void* daddr; void* saddr; int protocol; } ;
struct ethhdr {void* h_proto; int h_source; int h_dest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (unsigned char*,int) ;
 void* FUNC_6 (struct sk_buff*,int) ;
 struct udphdr* FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (struct sk_buff*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_11(void)
{
 int VAR_5, VAR_6 = VAR_4;
 struct sk_buff *VAR_7;
 struct udphdr *VAR_8;
 struct ethhdr *VAR_9;
 struct iphdr *VAR_10;

 VAR_7 = FUNC_0(VAR_3, VAR_1);
 if (!VAR_7)
  return ((void*)0);
 VAR_5 = sizeof(struct iphdr) + sizeof(struct udphdr) + VAR_6;

 FUNC_8(VAR_7);
 VAR_9 = FUNC_6(VAR_7, sizeof(struct ethhdr));
 FUNC_1(VAR_9->h_dest);
 FUNC_1(VAR_9->h_source);
 VAR_9->h_proto = FUNC_3(VAR_0);
 VAR_7->protocol = FUNC_3(VAR_0);

 FUNC_9(VAR_7, VAR_7->len);
 VAR_10 = FUNC_6(VAR_7, sizeof(struct iphdr));
 VAR_10->protocol = VAR_2;
 VAR_10->saddr = FUNC_4("192.0.2.1");
 VAR_10->daddr = FUNC_4("198.51.100.1");
 VAR_10->version = 0x4;
 VAR_10->frag_off = 0;
 VAR_10->ihl = 0x5;
 VAR_10->tot_len = FUNC_3(VAR_5);
 VAR_10->ttl = 100;
 VAR_10->check = 0;
 VAR_10->check = FUNC_5((unsigned char *)VAR_10, VAR_10->ihl);

 FUNC_10(VAR_7, VAR_7->len);
 VAR_8 = FUNC_7(VAR_7, sizeof(struct udphdr) + VAR_6);
 FUNC_2(&VAR_8->source, sizeof(u16));
 FUNC_2(&VAR_8->dest, sizeof(u16));
 VAR_8->len = FUNC_3(sizeof(struct udphdr) + VAR_6);

 return VAR_7;
}
