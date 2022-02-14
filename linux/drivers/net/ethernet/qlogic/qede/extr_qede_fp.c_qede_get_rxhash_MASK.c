
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
typedef enum rss_hash_type { ____Placeholder_rss_hash_type } rss_hash_type ;
typedef enum pkt_hash_types { ____Placeholder_pkt_hash_types } pkt_hash_types ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_6, u8 VAR_7, __le32 VAR_8)
{
 enum pkt_hash_types VAR_9 = VAR_3;
 enum rss_hash_type VAR_10;
 u32 VAR_11 = 0;

 VAR_10 = FUNC_0(VAR_7, VAR_0);
 if (VAR_10) {
  VAR_9 = ((VAR_10 == VAR_4) ||
        (VAR_10 == VAR_5)) ?
       VAR_1 : VAR_2;
  VAR_11 = FUNC_1(VAR_8);
 }
 FUNC_2(VAR_6, VAR_11, VAR_9);
}
