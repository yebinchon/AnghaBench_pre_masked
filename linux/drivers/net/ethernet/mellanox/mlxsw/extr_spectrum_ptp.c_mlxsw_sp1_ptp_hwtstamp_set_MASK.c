
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u16 ;
struct hwtstamp_config {int rx_filter; } ;
struct TYPE_2__ {void* egr_types; void* ing_types; struct hwtstamp_config hwtstamp_config; } ;
struct mlxsw_sp_port {TYPE_1__ ptp; } ;
typedef enum hwtstamp_rx_filters { ____Placeholder_hwtstamp_rx_filters } hwtstamp_rx_filters ;


 int FUNC_0 (struct mlxsw_sp_port*,void*,void*) ;
 int FUNC_1 (struct mlxsw_sp_port*) ;
 int FUNC_2 (struct hwtstamp_config*,void**,void**,int*) ;

int FUNC_3(struct mlxsw_sp_port *VAR_0,
          struct hwtstamp_config *VAR_1)
{
 enum hwtstamp_rx_filters VAR_2;
 u16 VAR_3;
 u16 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, &VAR_3, &VAR_4,
          &VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_0->ptp.hwtstamp_config = *VAR_1;
 VAR_0->ptp.ing_types = VAR_3;
 VAR_0->ptp.egr_types = VAR_4;

 VAR_5 = FUNC_1(VAR_0);
 if (VAR_5)
  return VAR_5;


 VAR_1->rx_filter = VAR_2;

 return 0;
}
