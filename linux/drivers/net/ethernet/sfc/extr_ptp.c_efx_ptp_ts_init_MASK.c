
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hwtstamp_config {scalar_t__ tx_type; scalar_t__ flags; } ;
struct efx_nic {TYPE_2__* ptp_data; TYPE_1__* type; } ;
struct TYPE_4__ {struct hwtstamp_config config; } ;
struct TYPE_3__ {int (* ptp_set_ts_config ) (struct efx_nic*,struct hwtstamp_config*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct efx_nic*,struct hwtstamp_config*) ;

__attribute__((used)) static int FUNC_1(struct efx_nic *VAR_4, struct hwtstamp_config *VAR_5)
{
 int VAR_6;

 if (VAR_5->flags)
  return -VAR_0;

 if ((VAR_5->tx_type != VAR_2) &&
     (VAR_5->tx_type != VAR_3))
  return -VAR_1;

 VAR_6 = VAR_4->type->ptp_set_ts_config(VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4->ptp_data->config = *VAR_5;
 return 0;
}
