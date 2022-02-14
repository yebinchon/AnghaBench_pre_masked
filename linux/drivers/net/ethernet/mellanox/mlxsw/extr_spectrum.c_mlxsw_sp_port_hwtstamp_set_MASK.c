
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp_port {TYPE_2__* mlxsw_sp; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int dummy; } ;
typedef int config ;
struct TYPE_4__ {TYPE_1__* ptp_ops; } ;
struct TYPE_3__ {int (* hwtstamp_set ) (struct mlxsw_sp_port*,struct hwtstamp_config*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hwtstamp_config*,int ,int) ;
 scalar_t__ FUNC_1 (int ,struct hwtstamp_config*,int) ;
 int FUNC_2 (struct mlxsw_sp_port*,struct hwtstamp_config*) ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sp_port *VAR_1,
          struct ifreq *VAR_2)
{
 struct hwtstamp_config VAR_3;
 int VAR_4;

 if (FUNC_0(&VAR_3, VAR_2->ifr_data, sizeof(VAR_3)))
  return -VAR_0;

 VAR_4 = VAR_1->mlxsw_sp->ptp_ops->hwtstamp_set(VAR_1,
            &VAR_3);
 if (VAR_4)
  return VAR_4;

 if (FUNC_1(VAR_2->ifr_data, &VAR_3, sizeof(VAR_3)))
  return -VAR_0;

 return 0;
}
