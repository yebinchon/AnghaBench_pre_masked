
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct rfc1042_hdr {int snap_type; } ;
struct ieee80211_hdr {int frame_control; } ;
struct ethhdr {int h_proto; int * h_source; int * h_dest; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (struct ieee80211_hdr*) ;
 int * FUNC_2 (struct ieee80211_hdr*) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,size_t) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_1)
{
 struct ieee80211_hdr *VAR_2;
 struct rfc1042_hdr *VAR_3;
 struct ethhdr *VAR_4;
 size_t VAR_5;
 u8 VAR_6[VAR_0];
 u8 VAR_7[VAR_0];
 __be16 VAR_8;

 VAR_2 = (void *)VAR_1->data;
 VAR_5 = FUNC_3(VAR_2->frame_control);
 VAR_3 = (void *)VAR_1->data + VAR_5;

 FUNC_0(VAR_6, FUNC_1(VAR_2));
 FUNC_0(VAR_7, FUNC_2(VAR_2));
 VAR_8 = VAR_3->snap_type;

 FUNC_4(VAR_1, VAR_5 + sizeof(*VAR_3));
 FUNC_5(VAR_1, sizeof(*VAR_4));

 VAR_4 = (void *)VAR_1->data;
 FUNC_0(VAR_4->h_dest, VAR_6);
 FUNC_0(VAR_4->h_source, VAR_7);
 VAR_4->h_proto = VAR_8;
}
