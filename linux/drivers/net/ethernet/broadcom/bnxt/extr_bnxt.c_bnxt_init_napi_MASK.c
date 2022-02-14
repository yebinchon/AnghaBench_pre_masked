
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_napi {int napi; } ;
struct bnxt {unsigned int cp_nr_rings; int flags; int dev; struct bnxt_napi** bnapi; } ;


 scalar_t__ FUNC_0 (struct bnxt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct napi_struct*,int) ;
 int FUNC_2 (struct napi_struct*,int) ;
 int FUNC_3 (struct napi_struct*,int) ;
 int FUNC_4 (int ,int *,int (*) (struct napi_struct*,int),int) ;

__attribute__((used)) static void FUNC_5(struct bnxt *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4 = VAR_2->cp_nr_rings;
 struct bnxt_napi *VAR_5;

 if (VAR_2->flags & VAR_1) {
  int (*VAR_6)(struct napi_struct *, int) = FUNC_1;

  if (VAR_2->flags & VAR_0)
   VAR_6 = FUNC_3;
  else if (FUNC_0(VAR_2))
   VAR_4--;
  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
   VAR_5 = VAR_2->bnapi[VAR_3];
   FUNC_4(VAR_2->dev, &VAR_5->napi, VAR_6, 64);
  }
  if (FUNC_0(VAR_2)) {
   VAR_5 = VAR_2->bnapi[VAR_4];
   FUNC_4(VAR_2->dev, &VAR_5->napi,
           FUNC_2, 64);
  }
 } else {
  VAR_5 = VAR_2->bnapi[0];
  FUNC_4(VAR_2->dev, &VAR_5->napi, FUNC_1, 64);
 }
}
