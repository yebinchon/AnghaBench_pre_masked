
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int features; } ;
struct cqe_rx_t {int rss_alg; int rss_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct net_device *VAR_4,
        struct cqe_rx_t *VAR_5,
        struct sk_buff *VAR_6)
{
 u8 VAR_7;
 u32 VAR_8;

 if (!(VAR_4->features & VAR_0))
  return;

 switch (VAR_5->rss_alg) {
 case 129:
 case 128:
  VAR_7 = VAR_2;
  VAR_8 = VAR_5->rss_tag;
  break;
 case 130:
  VAR_7 = VAR_1;
  VAR_8 = VAR_5->rss_tag;
  break;
 default:
  VAR_7 = VAR_3;
  VAR_8 = 0;
 }

 FUNC_0(VAR_6, VAR_8, VAR_7);
}
