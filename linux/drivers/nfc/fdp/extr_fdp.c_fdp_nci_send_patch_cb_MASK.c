
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_dev {int dummy; } ;
struct fdp_nci_info {int setup_patch_sent; int setup_wq; } ;


 struct fdp_nci_info* FUNC_0 (struct nci_dev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nci_dev *VAR_0)
{
 struct fdp_nci_info *VAR_1 = FUNC_0(VAR_0);

 VAR_1->setup_patch_sent = 1;
 FUNC_1(&VAR_1->setup_wq);
}
