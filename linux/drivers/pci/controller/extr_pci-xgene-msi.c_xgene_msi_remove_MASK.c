
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_msi {int * bitmap; int * msi_groups; } ;
struct platform_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 struct xgene_msi* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct xgene_msi*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct xgene_msi *VAR_3 = FUNC_2(VAR_2);

 if (VAR_1)
  FUNC_0(VAR_1);
 FUNC_0(VAR_0);

 FUNC_1(VAR_3->msi_groups);

 FUNC_1(VAR_3->bitmap);
 VAR_3->bitmap = ((void*)0);

 FUNC_3(VAR_3);

 return 0;
}
