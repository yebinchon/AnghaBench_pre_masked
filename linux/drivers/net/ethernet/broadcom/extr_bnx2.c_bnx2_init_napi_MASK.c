
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2_napi {struct bnx2* bp; int napi; } ;
struct bnx2 {int irq_nvecs; struct bnx2_napi* bnx2_napi; int dev; } ;


 int FUNC_0 (struct napi_struct*,int) ;
 int FUNC_1 (struct napi_struct*,int) ;
 int FUNC_2 (int ,int *,int (*) (struct napi_struct*,int),int) ;

__attribute__((used)) static void
FUNC_3(struct bnx2 *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->irq_nvecs; VAR_1++) {
  struct bnx2_napi *VAR_2 = &VAR_0->bnx2_napi[VAR_1];
  int (*VAR_3)(struct napi_struct *, int);

  if (VAR_1 == 0)
   VAR_3 = FUNC_0;
  else
   VAR_3 = FUNC_1;

  FUNC_2(VAR_0->dev, &VAR_0->bnx2_napi[VAR_1].napi, VAR_3, 64);
  VAR_2->bp = VAR_0;
 }
}
