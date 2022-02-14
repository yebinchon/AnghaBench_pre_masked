
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwtstamp_config {int rx_filter; int tx_type; } ;
struct efx_nic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efx_nic*,int,int) ;
 int FUNC_1 (struct efx_nic*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct efx_nic *VAR_2,
          struct hwtstamp_config *VAR_3)
{
 int VAR_4;

 switch (VAR_3->rx_filter) {
 case 141:
  FUNC_0(VAR_2, 0, 0);

  return FUNC_1(VAR_2,
        VAR_3->tx_type != VAR_1, 0);
 case 142:
 case 138:
 case 137:
 case 139:
 case 130:
 case 129:
 case 131:
 case 133:
 case 132:
 case 134:
 case 135:
 case 128:
 case 136:
 case 140:
  VAR_3->rx_filter = 142;
  VAR_4 = FUNC_1(VAR_2, 1, 0);
  if (!VAR_4)
   VAR_4 = FUNC_0(VAR_2, 1, 0);
  if (VAR_4)
   FUNC_1(VAR_2, 0, 0);
  return VAR_4;
 default:
  return -VAR_0;
 }
}
