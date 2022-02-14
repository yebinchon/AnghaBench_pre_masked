
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct iphdr {int ihl; scalar_t__ check; } ;


 scalar_t__ FUNC_0 (struct iphdr*,int ) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_0)
{
 struct iphdr *VAR_1 = (struct iphdr *)VAR_0->data;

 VAR_1->check = 0;
 VAR_1->check = FUNC_0(VAR_1, VAR_1->ihl);
}
