
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ethhdr {int* h_dest; int* h_source; int h_proto; } ;
typedef int hdr_tmp ;


 struct ethhdr* FUNC_0 (struct sk_buff*,int ,int,struct ethhdr*) ;

__attribute__((used)) static inline u32 FUNC_1(struct sk_buff *VAR_0)
{
 struct ethhdr *VAR_1, VAR_2;

 VAR_1 = FUNC_0(VAR_0, 0, sizeof(VAR_2), &VAR_2);
 if (VAR_1)
  return VAR_1->h_dest[5] ^ VAR_1->h_source[5] ^ VAR_1->h_proto;
 return 0;
}
