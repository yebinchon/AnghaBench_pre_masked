
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sk_buff {int ip_summed; } ;
struct iphdr {unsigned int protocol; int tot_len; int ihl; int saddr; int daddr; } ;
struct ethhdr {scalar_t__ h_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct ethhdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct iphdr*) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_5, u32 VAR_6, int VAR_7)
{
 struct ethhdr *VAR_8 = FUNC_0(VAR_5);
 unsigned int VAR_9;
 unsigned char *VAR_10;
 struct iphdr *VAR_11;
 u32 VAR_12, VAR_13;
 u16 *VAR_14;
 if (VAR_8->h_proto != FUNC_1(VAR_2))
  return;

 VAR_11 = (struct iphdr *)((char *)VAR_8 + VAR_1);
 if (FUNC_2(VAR_11))
  return;

 VAR_9 = VAR_11->protocol;
 if (VAR_9 != VAR_3 && VAR_9 != VAR_4)
  return;


 VAR_12 = VAR_6 +
        (VAR_11->tot_len - (VAR_11->ihl << 2)) +
        FUNC_1((u16)VAR_11->protocol) +
        (VAR_11->saddr >> 16) + (VAR_11->saddr & 0xffff) +
        (VAR_11->daddr >> 16) + (VAR_11->daddr & 0xffff);


 VAR_14 = (u16 *)VAR_8;
 VAR_13 = VAR_14[0] + VAR_14[1] + VAR_14[2] + VAR_14[3] + VAR_14[4] + VAR_14[5] + VAR_14[6];

 VAR_13 = (VAR_13 & 0xffff) + (VAR_13 >> 16);
 VAR_13 = (VAR_13 & 0xffff) + (VAR_13 >> 16);

 VAR_12 += 0xffff ^ VAR_13;




 VAR_10 = (char *)VAR_8 + VAR_7;
 if (VAR_7 & 1) {
  VAR_12 += 0xffff ^ (u16)((VAR_10[1] << 8) | VAR_10[0]);
  VAR_12 += 0xffff ^ (u16)((VAR_10[3] << 8) | VAR_10[2]);
 } else {
  VAR_12 += 0xffff ^ (u16)((VAR_10[0] << 8) | VAR_10[1]);
  VAR_12 += 0xffff ^ (u16)((VAR_10[2] << 8) | VAR_10[3]);
 }

 VAR_12 = (VAR_12 & 0xffff) + (VAR_12 >> 16);
 VAR_12 = (VAR_12 & 0xffff) + (VAR_12 >> 16);

 if (VAR_12 == 0xffff)
  VAR_5->ip_summed = VAR_0;
}
