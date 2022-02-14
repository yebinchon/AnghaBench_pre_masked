
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int protocol; } ;
struct enetc_bdr {int ndev; int index; } ;


 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_2(struct enetc_bdr *VAR_0,
         struct sk_buff *VAR_1)
{
 FUNC_1(VAR_1, VAR_0->index);
 VAR_1->protocol = FUNC_0(VAR_1, VAR_0->ndev);
}
