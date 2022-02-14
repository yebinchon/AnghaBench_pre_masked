
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct l2t_entry {int arpq; } ;
struct adapter {int dummy; } ;


 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (struct adapter*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_0, struct l2t_entry *VAR_1)
{
 struct sk_buff *VAR_2;

 while ((VAR_2 = FUNC_0(&VAR_1->arpq)) != ((void*)0))
  FUNC_1(VAR_0, VAR_2);
}
