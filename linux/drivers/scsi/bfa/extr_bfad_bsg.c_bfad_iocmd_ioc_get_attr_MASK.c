
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* chip_rev; } ;
struct TYPE_7__ {int ioc; } ;
struct bfad_s {TYPE_5__ pci_attr; int bfad_lock; TYPE_1__ bfa; } ;
struct bfa_ioc_pci_attr_s {int dummy; } ;
struct TYPE_10__ {TYPE_5__* chip_rev; } ;
struct TYPE_9__ {int optrom_ver; int fw_ver; } ;
struct TYPE_8__ {int bios_ver; int fw_ver; int driver_ver; int driver; } ;
struct TYPE_12__ {TYPE_4__ pci_attr; TYPE_3__ adapter_attr; TYPE_2__ driver_attr; } ;
struct bfa_bsg_ioc_attr_s {int status; TYPE_6__ ioc_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_6__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_5__*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct bfad_s *VAR_4, void *VAR_5)
{
 struct bfa_bsg_ioc_attr_s *VAR_6 = (struct bfa_bsg_ioc_attr_s *)VAR_5;
 unsigned long VAR_7;

 FUNC_2(&VAR_4->bfad_lock, VAR_7);
 FUNC_0(&VAR_4->bfa.ioc, &VAR_6->ioc_attr);
 FUNC_3(&VAR_4->bfad_lock, VAR_7);


 FUNC_4(VAR_6->ioc_attr.driver_attr.driver, VAR_0);
 FUNC_5(VAR_6->ioc_attr.driver_attr.driver_ver,
  VAR_1, VAR_3);
 FUNC_4(VAR_6->ioc_attr.driver_attr.fw_ver,
  VAR_6->ioc_attr.adapter_attr.fw_ver);
 FUNC_4(VAR_6->ioc_attr.driver_attr.bios_ver,
  VAR_6->ioc_attr.adapter_attr.optrom_ver);


 FUNC_1(VAR_4->pci_attr.chip_rev, VAR_6->ioc_attr.pci_attr.chip_rev,
  sizeof(VAR_4->pci_attr.chip_rev));
 FUNC_1(&VAR_6->ioc_attr.pci_attr, &VAR_4->pci_attr,
  sizeof(struct bfa_ioc_pci_attr_s));

 VAR_6->status = VAR_2;
 return 0;
}
