
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct htc_target {int dummy; } ;
struct htc_packet {scalar_t__ endpoint; int status; struct sk_buff* skb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct htc_target *VAR_2,
    struct htc_packet *VAR_3)
{
 struct sk_buff *VAR_4 = VAR_3->skb;

 if (VAR_3->endpoint == VAR_1 &&
     VAR_3->status == -VAR_0 &&
     VAR_4 != ((void*)0))
  FUNC_0(VAR_4);
}
