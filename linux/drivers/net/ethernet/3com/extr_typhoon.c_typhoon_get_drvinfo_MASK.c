
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct typhoon {scalar_t__ card_state; struct pci_dev* pdev; } ;
struct resp_desc {int parm2; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int driver; int fw_version; } ;
struct cmd_desc {int dummy; } ;


 int FUNC_0 (struct cmd_desc*,int ) ;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct typhoon* FUNC_2 (struct net_device*) ;
 char* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int,char*,int,int,int) ;
 int FUNC_6 (int ,char*,int) ;
 scalar_t__ FUNC_7 (struct typhoon*,int,struct cmd_desc*,int,struct resp_desc*) ;

__attribute__((used)) static void
FUNC_8(struct net_device *VAR_3, struct ethtool_drvinfo *VAR_4)
{
 struct typhoon *VAR_5 = FUNC_2(VAR_3);
 struct pci_dev *VAR_6 = VAR_5->pdev;
 struct cmd_desc VAR_7;
 struct resp_desc VAR_8[3];

 FUNC_4();
 if(VAR_5->card_state == VAR_1) {
  FUNC_6(VAR_4->fw_version, "Sleep image",
   sizeof(VAR_4->fw_version));
 } else {
  FUNC_0(&VAR_7, VAR_2);
  if(FUNC_7(VAR_5, 1, &VAR_7, 3, VAR_8) < 0) {
   FUNC_6(VAR_4->fw_version, "Unknown runtime",
    sizeof(VAR_4->fw_version));
  } else {
   u32 VAR_9 = FUNC_1(VAR_8[0].parm2);
   FUNC_5(VAR_4->fw_version, sizeof(VAR_4->fw_version),
    "%02x.%03x.%03x", VAR_9 >> 24,
    (VAR_9 >> 12) & 0xfff, VAR_9 & 0xfff);
  }
 }

 FUNC_6(VAR_4->driver, VAR_0, sizeof(VAR_4->driver));
 FUNC_6(VAR_4->bus_info, FUNC_3(VAR_6), sizeof(VAR_4->bus_info));
}
