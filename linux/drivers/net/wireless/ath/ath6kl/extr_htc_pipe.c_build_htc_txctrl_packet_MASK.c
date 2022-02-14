
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct htc_packet {struct sk_buff* skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct htc_packet*) ;
 struct htc_packet* FUNC_2 (int,int ) ;

__attribute__((used)) static struct htc_packet *FUNC_3(void)
{
 struct htc_packet *VAR_2 = ((void*)0);
 struct sk_buff *VAR_3;

 VAR_2 = FUNC_2(sizeof(struct htc_packet), VAR_0);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_1, VAR_0);

 if (VAR_3 == ((void*)0)) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }
 VAR_2->skb = VAR_3;

 return VAR_2;
}
