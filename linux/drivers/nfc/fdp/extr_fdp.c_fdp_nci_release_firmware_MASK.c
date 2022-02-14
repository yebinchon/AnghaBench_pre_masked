
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_dev {int dummy; } ;
struct fdp_nci_info {int * ram_patch; int * otp_patch; } ;


 struct fdp_nci_info* FUNC_0 (struct nci_dev*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nci_dev *VAR_0)
{
 struct fdp_nci_info *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->otp_patch) {
  FUNC_1(VAR_1->otp_patch);
  VAR_1->otp_patch = ((void*)0);
 }

 if (VAR_1->ram_patch) {
  FUNC_1(VAR_1->ram_patch);
  VAR_1->ram_patch = ((void*)0);
 }
}
