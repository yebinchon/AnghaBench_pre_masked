
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_lro_mgr {int lroq; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct t4_lro_mgr*,struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct t4_lro_mgr *VAR_0)
{
 struct sk_buff *VAR_1;

 while ((VAR_1 = FUNC_1(&VAR_0->lroq)))
  FUNC_0(VAR_0, VAR_1);
}
