
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {scalar_t__ dest; scalar_t__ source; } ;
struct sk_buff {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;

bool FUNC_2(struct sk_buff *VAR_2)
{
 struct udphdr *VAR_3 = (struct udphdr *)(VAR_2->data + VAR_0 +
           FUNC_0(VAR_2->data));

 return VAR_3->dest == FUNC_1(VAR_1) &&
  VAR_3->source == FUNC_1(VAR_1);
}
