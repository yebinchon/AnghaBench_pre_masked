
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iproc_msi {int inner_domain; int msi_domain; int nr_msi_vecs; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *,struct iproc_msi*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct device_node *VAR_3,
       struct iproc_msi *VAR_4)
{
 VAR_4->inner_domain = FUNC_0(((void*)0), VAR_4->nr_msi_vecs,
        &VAR_2, VAR_4);
 if (!VAR_4->inner_domain)
  return -VAR_0;

 VAR_4->msi_domain = FUNC_3(FUNC_2(VAR_3),
          &VAR_1,
          VAR_4->inner_domain);
 if (!VAR_4->msi_domain) {
  FUNC_1(VAR_4->inner_domain);
  return -VAR_0;
 }

 return 0;
}
