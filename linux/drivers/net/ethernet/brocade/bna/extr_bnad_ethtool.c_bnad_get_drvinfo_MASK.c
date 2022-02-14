
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;
struct TYPE_4__ {int ioc; } ;
struct TYPE_5__ {TYPE_1__ ioceth; } ;
struct bnad {int pcidev; int bna_lock; TYPE_2__ bna; } ;
struct TYPE_6__ {int fw_ver; } ;
struct bfa_ioc_attr {TYPE_3__ adapter_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct bfa_ioc_attr*) ;
 int FUNC_1 (struct bfa_ioc_attr*) ;
 struct bfa_ioc_attr* FUNC_2 (int,int ) ;
 struct bnad* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_8(struct net_device *VAR_3, struct ethtool_drvinfo *VAR_4)
{
 struct bnad *VAR_5 = FUNC_3(VAR_3);
 struct bfa_ioc_attr *VAR_6;
 unsigned long VAR_7;

 FUNC_7(VAR_4->driver, VAR_0, sizeof(VAR_4->driver));
 FUNC_7(VAR_4->version, VAR_1, sizeof(VAR_4->version));

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_2);
 if (VAR_6) {
  FUNC_5(&VAR_5->bna_lock, VAR_7);
  FUNC_0(&VAR_5->bna.ioceth.ioc, VAR_6);
  FUNC_6(&VAR_5->bna_lock, VAR_7);

  FUNC_7(VAR_4->fw_version, VAR_6->adapter_attr.fw_ver,
   sizeof(VAR_4->fw_version));
  FUNC_1(VAR_6);
 }

 FUNC_7(VAR_4->bus_info, FUNC_4(VAR_5->pcidev),
  sizeof(VAR_4->bus_info));
}
