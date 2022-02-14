
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_parameters {int get_feature_list; int set_feature_list; scalar_t__ supports_set_get_features; TYPE_1__* onfi; } ;
struct nand_onfi_vendor_micron {int read_retry_options; } ;
struct nand_chip {int setup_read_retry; int read_retries; struct nand_parameters parameters; } ;
struct TYPE_2__ {scalar_t__ vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct nand_chip *VAR_3)
{
 struct nand_parameters *VAR_4 = &VAR_3->parameters;

 if (VAR_4->onfi) {
  struct nand_onfi_vendor_micron *VAR_5 = (void *)VAR_4->onfi->vendor;

  VAR_3->read_retries = VAR_5->read_retry_options;
  VAR_3->setup_read_retry = VAR_2;
 }

 if (VAR_4->supports_set_get_features) {
  FUNC_0(VAR_0, VAR_4->set_feature_list);
  FUNC_0(VAR_1, VAR_4->set_feature_list);
  FUNC_0(VAR_0, VAR_4->get_feature_list);
  FUNC_0(VAR_1, VAR_4->get_feature_list);
 }

 return 0;
}
