
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_parameters {int get_feature_list; int set_feature_list; scalar_t__ supports_set_get_features; TYPE_1__* onfi; } ;
struct nand_onfi_vendor_macronix {int reliability_func; } ;
struct nand_chip {int setup_read_retry; int read_retries; struct nand_parameters parameters; } ;
struct TYPE_2__ {scalar_t__ vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct nand_chip *VAR_4)
{
 struct nand_parameters *VAR_5 = &VAR_4->parameters;
 struct nand_onfi_vendor_macronix *VAR_6;

 if (!VAR_5->onfi)
  return;

 VAR_6 = (struct nand_onfi_vendor_macronix *)VAR_5->onfi->vendor;
 if ((VAR_6->reliability_func & VAR_1) == 0)
  return;

 VAR_4->read_retries = VAR_0;
 VAR_4->setup_read_retry = VAR_3;

 if (VAR_5->supports_set_get_features) {
  FUNC_0(VAR_5->set_feature_list,
      VAR_2, 1);
  FUNC_0(VAR_5->get_feature_list,
      VAR_2, 1);
 }
}
