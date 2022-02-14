
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int * data; } ;
struct freelQ_ce {struct sk_buff* skb; } ;
struct freelQ {size_t cidx; struct freelQ_ce* centries; } ;
struct adapter {int name; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct freelQ_ce*,int ) ;
 int FUNC_1 (struct freelQ_ce*,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct freelQ*,size_t) ;

__attribute__((used)) static void FUNC_5(struct adapter *VAR_3, struct freelQ *VAR_4)
{
 struct freelQ_ce *VAR_5 = &VAR_4->centries[VAR_4->cidx];
 struct sk_buff *VAR_6 = VAR_5->skb;

 FUNC_2(VAR_3->pdev, FUNC_0(VAR_5, VAR_1),
       FUNC_1(VAR_5, VAR_2), VAR_0);
 FUNC_3("%s: unexpected offload packet, cmd %u\n",
        VAR_3->name, *VAR_6->data);
 FUNC_4(VAR_4, VAR_4->cidx);
}
