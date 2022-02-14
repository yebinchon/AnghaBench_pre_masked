
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_msi {int inner_domain; int msi_domain; int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *,struct xgene_msi*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct xgene_msi *VAR_4)
{
 VAR_4->inner_domain = FUNC_0(((void*)0), VAR_1,
        &VAR_2, VAR_4);
 if (!VAR_4->inner_domain)
  return -VAR_0;

 VAR_4->msi_domain = FUNC_3(FUNC_2(VAR_4->node),
          &VAR_3,
          VAR_4->inner_domain);

 if (!VAR_4->msi_domain) {
  FUNC_1(VAR_4->inner_domain);
  return -VAR_0;
 }

 return 0;
}
