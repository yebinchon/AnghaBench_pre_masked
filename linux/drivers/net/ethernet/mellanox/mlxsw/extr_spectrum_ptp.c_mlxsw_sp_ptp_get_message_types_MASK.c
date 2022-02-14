
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hwtstamp_config {int rx_filter; int tx_type; } ;
typedef enum hwtstamp_tx_types { ____Placeholder_hwtstamp_tx_types } hwtstamp_tx_types ;
typedef enum hwtstamp_rx_filters { ____Placeholder_hwtstamp_rx_filters } hwtstamp_rx_filters ;


 int VAR_0 ;
__attribute__((used)) static int FUNC_0(const struct hwtstamp_config *VAR_1,
       u16 *VAR_2, u16 *VAR_3,
       enum hwtstamp_rx_filters *VAR_4)
{
 enum hwtstamp_rx_filters VAR_5 = VAR_1->rx_filter;
 enum hwtstamp_tx_types VAR_6 = VAR_1->tx_type;
 u16 VAR_7 = 0x00;
 u16 VAR_8 = 0x00;

 switch (VAR_6) {
 case 130:
  VAR_8 = 0x00;
  break;
 case 129:
  VAR_8 = 0xff;
  break;
 case 128:
  return -VAR_0;
 }

 switch (VAR_5) {
 case 145:
  VAR_7 = 0x00;
  break;
 case 141:
 case 133:
 case 136:
 case 132:
  VAR_7 = 0x01;
  break;
 case 143:
 case 135:
 case 138:
 case 140:
  VAR_7 = 0x02;
  break;
 case 142:
 case 134:
 case 137:
 case 139:
  VAR_7 = 0x0f;
  break;
 case 146:
  VAR_7 = 0xff;
  break;
 case 131:
 case 144:
  return -VAR_0;
 }

 *VAR_2 = VAR_7;
 *VAR_3 = VAR_8;
 *VAR_4 = VAR_5;
 return 0;
}
