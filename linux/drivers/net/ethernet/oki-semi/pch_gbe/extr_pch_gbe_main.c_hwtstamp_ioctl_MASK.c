
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;
struct pch_gbe_adapter {int hwts_rx_en; int hwts_tx_en; struct pci_dev* ptp_pdev; } ;
struct net_device {int dummy; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {scalar_t__ tx_type; int rx_filter; scalar_t__ flags; } ;
typedef int cfg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct hwtstamp_config*,int ,int) ;
 scalar_t__ FUNC_1 (int ,struct hwtstamp_config*,int) ;
 struct pch_gbe_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (int *,struct pci_dev*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_14, struct ifreq *VAR_15, int VAR_16)
{
 struct hwtstamp_config VAR_17;
 struct pch_gbe_adapter *VAR_18 = FUNC_2(VAR_14);
 struct pci_dev *VAR_19;
 u8 VAR_20[20];

 if (FUNC_0(&VAR_17, VAR_15->ifr_data, sizeof(VAR_17)))
  return -VAR_2;

 if (VAR_17.flags)
  return -VAR_3;


 VAR_19 = VAR_18->ptp_pdev;

 if (VAR_17.tx_type != VAR_5 && VAR_17.tx_type != VAR_6)
  return -VAR_4;

 switch (VAR_17.rx_filter) {
 case 132:
  VAR_18->hwts_rx_en = 0;
  break;
 case 130:
  VAR_18->hwts_rx_en = 0;
  FUNC_3(VAR_19, VAR_11 | VAR_0);
  break;
 case 131:
  VAR_18->hwts_rx_en = 1;
  FUNC_3(VAR_19, VAR_7 | VAR_0);
  break;
 case 128:
  VAR_18->hwts_rx_en = 1;
  FUNC_3(VAR_19, VAR_13 | VAR_1);
  FUNC_6(VAR_20, VAR_9);
  FUNC_5(VAR_20, VAR_19);
  break;
 case 129:
  VAR_18->hwts_rx_en = 1;
  FUNC_3(VAR_19, VAR_13 | VAR_1);
  FUNC_6(VAR_20, VAR_8);
  FUNC_5(VAR_20, VAR_19);
  break;
 default:
  return -VAR_4;
 }

 VAR_18->hwts_tx_en = VAR_17.tx_type == VAR_6;


 FUNC_4(VAR_19, VAR_12 | VAR_10);

 return FUNC_1(VAR_15->ifr_data, &VAR_17, sizeof(VAR_17)) ? -VAR_2 : 0;
}
