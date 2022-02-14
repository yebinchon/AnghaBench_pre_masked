
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ dev; } ;
struct bnxt_napi {int napi; int index; } ;
struct bnxt {scalar_t__ dev; } ;


 int FUNC_0 (struct bnxt*,struct sk_buff*) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_3(struct bnxt *VAR_0, struct bnxt_napi *VAR_1,
        struct sk_buff *VAR_2)
{
 if (VAR_2->dev != VAR_0->dev) {

  FUNC_0(VAR_0, VAR_2);
  return;
 }
 FUNC_2(VAR_2, VAR_1->index);
 FUNC_1(&VAR_1->napi, VAR_2);
}
