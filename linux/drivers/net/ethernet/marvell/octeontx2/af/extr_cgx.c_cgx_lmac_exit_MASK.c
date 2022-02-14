
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lmac {struct lmac* name; } ;
struct cgx {int lmac_count; int pdev; struct lmac** lmac_idmap; int * cgx_cmd_workq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct lmac*) ;
 int FUNC_3 (struct lmac*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct cgx *VAR_1)
{
 struct lmac *VAR_2;
 int VAR_3;

 if (VAR_1->cgx_cmd_workq) {
  FUNC_1(VAR_1->cgx_cmd_workq);
  FUNC_0(VAR_1->cgx_cmd_workq);
  VAR_1->cgx_cmd_workq = ((void*)0);
 }


 for (VAR_3 = 0; VAR_3 < VAR_1->lmac_count; VAR_3++) {
  VAR_2 = VAR_1->lmac_idmap[VAR_3];
  if (!VAR_2)
   continue;
  FUNC_2(FUNC_4(VAR_1->pdev, VAR_0 + VAR_3 * 9), VAR_2);
  FUNC_3(VAR_2->name);
  FUNC_3(VAR_2);
 }

 return 0;
}
