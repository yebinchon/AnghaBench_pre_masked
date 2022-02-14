
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_pf {TYPE_1__* pdev; int cpp; } ;
struct nfp_nsp {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (struct nfp_nsp*) ;
 int FUNC_1 (struct nfp_nsp*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct nfp_nsp*) ;
 scalar_t__ FUNC_4 (struct nfp_nsp*) ;
 scalar_t__ FUNC_5 (struct nfp_nsp*) ;
 struct nfp_nsp* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct nfp_pf *VAR_0)
{
 struct nfp_nsp *VAR_1;
 bool VAR_2;
 int VAR_3;

 VAR_1 = FUNC_6(VAR_0->cpp);
 if (FUNC_0(VAR_1)) {
  VAR_3 = FUNC_1(VAR_1);
  FUNC_2(&VAR_0->pdev->dev, "Failed to access the NSP: %d\n", VAR_3);
  return VAR_3;
 }

 VAR_2 = FUNC_4(VAR_1) &&
      FUNC_5(VAR_1);

 FUNC_3(VAR_1);
 return VAR_2;
}
