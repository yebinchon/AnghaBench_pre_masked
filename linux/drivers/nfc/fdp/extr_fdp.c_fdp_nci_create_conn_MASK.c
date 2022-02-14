
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_dev {int dummy; } ;
struct fdp_nci_info {int ndev; } ;
struct core_conn_create_dest_spec_params {int length; int type; } ;
typedef int param ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int,struct core_conn_create_dest_spec_params*) ;
 int FUNC_1 (struct nci_dev*,int ,int *) ;
 struct fdp_nci_info* FUNC_2 (struct nci_dev*) ;

__attribute__((used)) static int FUNC_3(struct nci_dev *VAR_2)
{
 struct fdp_nci_info *VAR_3 = FUNC_2(VAR_2);
 struct core_conn_create_dest_spec_params VAR_4;
 int VAR_5;


 VAR_4.type = VAR_1;
 VAR_4.length = 0x00;

 VAR_5 = FUNC_0(VAR_3->ndev, VAR_0, 1,
     sizeof(VAR_4), &VAR_4);
 if (VAR_5)
  return VAR_5;

 return FUNC_1(VAR_2,
           VAR_0, ((void*)0));
}
