
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwtstamp_config {int rx_filter; int tx_type; } ;
struct efx_nic {int dummy; } ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct efx_nic*,int,int ) ;
 int FUNC_1 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_2(struct efx_nic *VAR_5,
       struct hwtstamp_config *VAR_6)
{
 int VAR_7;

 switch (VAR_6->rx_filter) {
 case 134:

  return FUNC_0(VAR_5,
        VAR_6->tx_type != VAR_1,
        FUNC_1(VAR_5));
 case 132:
 case 131:
 case 133:
  VAR_6->rx_filter = 132;
  return FUNC_0(VAR_5, 1, VAR_2);
 case 129:
 case 128:
 case 130:
  VAR_6->rx_filter = 129;
  VAR_7 = FUNC_0(VAR_5, 1,
      VAR_4);





  if (VAR_7 != 0)
   VAR_7 = FUNC_0(VAR_5, 1, VAR_3);
  return VAR_7;
 default:
  return -VAR_0;
 }
}
