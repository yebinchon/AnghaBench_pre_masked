
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2_napi {int int_num; } ;
struct bnx2 {int irq_nvecs; struct bnx2_napi* bnx2_napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2*,int ) ;
 int FUNC_1 (struct bnx2*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct bnx2 *VAR_2)
{
 int VAR_3;
 struct bnx2_napi *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2->irq_nvecs; VAR_3++) {
  VAR_4 = &VAR_2->bnx2_napi[VAR_3];
  FUNC_1(VAR_2, VAR_0, VAR_4->int_num |
         VAR_1);
 }
 FUNC_0(VAR_2, VAR_0);
}
