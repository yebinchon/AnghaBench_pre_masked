
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct ethtool_drvinfo {int n_stats; int regdump_len; scalar_t__ eedump_len; scalar_t__ testinfo_len; int bus_info; int fw_version; int version; int driver; } ;
struct aq_nic_s {int dummy; } ;
struct aq_nic_cfg_s {int vecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct aq_nic_cfg_s* FUNC_1 (struct aq_nic_s*) ;
 int FUNC_2 (struct aq_nic_s*) ;
 int FUNC_3 (struct aq_nic_s*) ;
 struct aq_nic_s* FUNC_4 (struct net_device*) ;
 char* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (int ,int,char*,int,int,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,char*,int) ;
 struct pci_dev* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_4,
       struct ethtool_drvinfo *VAR_5)
{
 struct aq_nic_s *VAR_6 = FUNC_4(VAR_4);
 struct aq_nic_cfg_s *VAR_7 = FUNC_1(VAR_6);
 struct pci_dev *VAR_8 = FUNC_9(VAR_4->dev.parent);
 u32 VAR_9 = FUNC_2(VAR_6);
 u32 VAR_10 = FUNC_3(VAR_6);

 FUNC_7(VAR_5->driver, VAR_0, sizeof(VAR_5->driver));
 FUNC_7(VAR_5->version, VAR_1, sizeof(VAR_5->version));

 FUNC_6(VAR_5->fw_version, sizeof(VAR_5->fw_version),
   "%u.%u.%u", VAR_9 >> 24,
   (VAR_9 >> 16) & 0xFFU, VAR_9 & 0xFFFFU);

 FUNC_8(VAR_5->bus_info, VAR_8 ? FUNC_5(VAR_8) : "",
  sizeof(VAR_5->bus_info));
 VAR_5->n_stats = FUNC_0(VAR_3) +
  VAR_7->vecs * FUNC_0(VAR_2);
 VAR_5->testinfo_len = 0;
 VAR_5->regdump_len = VAR_10;
 VAR_5->eedump_len = 0;
}
