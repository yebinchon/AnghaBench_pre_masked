
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethhdr {int h_proto; } ;
typedef struct ethhdr u8 ;
struct sk_buff {struct ethhdr* data; } ;
struct ath6kl_llc_snap_hdr {int eth_type; } ;
typedef int eth_hdr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ethhdr*,struct ethhdr*,int) ;
 int FUNC_2 (struct sk_buff*,int) ;

int FUNC_3(struct sk_buff *VAR_1)
{
 struct ath6kl_llc_snap_hdr *VAR_2;
 struct ethhdr VAR_3;
 u8 *VAR_4;

 if (FUNC_0(VAR_1 == ((void*)0)))
  return -VAR_0;

 VAR_4 = VAR_1->data;

 FUNC_1(&VAR_3, VAR_4, sizeof(VAR_3));

 VAR_2 = (struct ath6kl_llc_snap_hdr *) (VAR_4 + sizeof(VAR_3));
 VAR_3.h_proto = VAR_2->eth_type;

 FUNC_2(VAR_1, sizeof(struct ath6kl_llc_snap_hdr));
 VAR_4 = VAR_1->data;

 FUNC_1(VAR_4, &VAR_3, sizeof(VAR_3));

 return 0;
}
