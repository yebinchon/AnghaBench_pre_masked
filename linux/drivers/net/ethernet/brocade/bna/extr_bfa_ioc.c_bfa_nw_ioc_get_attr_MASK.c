
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chip_rev; int pcifn; int device_id; } ;
struct bfa_ioc_attr {TYPE_1__ pci_attr; int def_fn; int adapter_attr; int ioc_type; int cap_bm; int port_mode_cfg; int port_mode; int port_id; int state; } ;
struct bfa_ioc {int ad_cap_bm; int port_mode_cfg; int port_mode; } ;


 int FUNC_0 (struct bfa_ioc*) ;
 int FUNC_1 (struct bfa_ioc*,int *) ;
 int FUNC_2 (struct bfa_ioc*,int ) ;
 int FUNC_3 (struct bfa_ioc*) ;
 int FUNC_4 (struct bfa_ioc*) ;
 int FUNC_5 (struct bfa_ioc*) ;
 int FUNC_6 (struct bfa_ioc*) ;
 int FUNC_7 (struct bfa_ioc*) ;
 int FUNC_8 (void*,int ,int) ;

void
FUNC_9(struct bfa_ioc *VAR_0, struct bfa_ioc_attr *VAR_1)
{
 FUNC_8((void *)VAR_1, 0, sizeof(struct bfa_ioc_attr));

 VAR_1->state = FUNC_3(VAR_0);
 VAR_1->port_id = FUNC_7(VAR_0);
 VAR_1->port_mode = VAR_0->port_mode;

 VAR_1->port_mode_cfg = VAR_0->port_mode_cfg;
 VAR_1->cap_bm = VAR_0->ad_cap_bm;

 VAR_1->ioc_type = FUNC_4(VAR_0);

 FUNC_1(VAR_0, &VAR_1->adapter_attr);

 VAR_1->pci_attr.device_id = FUNC_0(VAR_0);
 VAR_1->pci_attr.pcifn = FUNC_6(VAR_0);
 VAR_1->def_fn = FUNC_5(VAR_0);
 FUNC_2(VAR_0, VAR_1->pci_attr.chip_rev);
}
