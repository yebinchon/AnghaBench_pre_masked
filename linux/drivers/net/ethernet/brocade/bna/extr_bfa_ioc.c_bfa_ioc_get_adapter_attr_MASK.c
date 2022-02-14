
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_ioc_attr {int asic_rev; int pcie_lanes_orig; int pcie_lanes; int pcie_gen; int adapter_prop; int card_type; int vpd; } ;
struct bfa_mfg_vpd {int dummy; } ;
struct bfa_ioc {struct bfi_ioc_attr* attr; } ;
struct bfa_adapter_attr {int prototype; int hw_ver; int asic_rev; int pcie_lanes_orig; int pcie_lanes; int pcie_gen; int mac; int pwwn; int is_mezz; int card_type; int model_descr; int model; int max_speed; int nports; int vpd; int manufacturer; int optrom_ver; int fw_ver; int serial_num; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct bfa_ioc*,int ) ;
 int FUNC_2 (struct bfa_ioc*,int ) ;
 int FUNC_3 (struct bfa_ioc*,int ) ;
 int FUNC_4 (struct bfa_ioc*,int ) ;
 int FUNC_5 (struct bfa_ioc*,int ) ;
 int FUNC_6 (struct bfa_ioc*) ;
 int FUNC_7 (struct bfa_ioc*,int ) ;
 int FUNC_8 (struct bfa_ioc*) ;
 int FUNC_9 (struct bfa_ioc*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct bfa_ioc*,int ) ;
 int FUNC_12 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_13(struct bfa_ioc *VAR_0,
    struct bfa_adapter_attr *VAR_1)
{
 struct bfi_ioc_attr *VAR_2;

 VAR_2 = VAR_0->attr;

 FUNC_5(VAR_0, VAR_1->serial_num);
 FUNC_1(VAR_0, VAR_1->fw_ver);
 FUNC_4(VAR_0, VAR_1->optrom_ver);
 FUNC_2(VAR_0, VAR_1->manufacturer);
 FUNC_12(&VAR_1->vpd, &VAR_2->vpd,
        sizeof(struct bfa_mfg_vpd));

 VAR_1->nports = FUNC_6(VAR_0);
 VAR_1->max_speed = FUNC_9(VAR_0);

 FUNC_3(VAR_0, VAR_1->model);

 FUNC_3(VAR_0, VAR_1->model_descr);

 VAR_1->card_type = VAR_2->card_type;
 VAR_1->is_mezz = FUNC_10(VAR_2->card_type);

 if (FUNC_0(VAR_2->adapter_prop))
  VAR_1->prototype = 1;
 else
  VAR_1->prototype = 0;

 VAR_1->pwwn = FUNC_8(VAR_0);
 FUNC_11(VAR_0, VAR_1->mac);

 VAR_1->pcie_gen = VAR_2->pcie_gen;
 VAR_1->pcie_lanes = VAR_2->pcie_lanes;
 VAR_1->pcie_lanes_orig = VAR_2->pcie_lanes_orig;
 VAR_1->asic_rev = VAR_2->asic_rev;

 FUNC_7(VAR_0, VAR_1->hw_ver);
}
