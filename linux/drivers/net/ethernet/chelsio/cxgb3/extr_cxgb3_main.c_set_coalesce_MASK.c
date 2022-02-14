
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sge_qset {int dummy; } ;
struct qset_params {int coalesce_usecs; } ;
struct port_info {int nqsets; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; } ;
struct TYPE_6__ {struct sge_qset* qs; } ;
struct TYPE_4__ {struct qset_params* qset; } ;
struct TYPE_5__ {TYPE_1__ sge; } ;
struct adapter {TYPE_3__ sge; TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sge_qset*,struct qset_params*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, struct ethtool_coalesce *VAR_3)
{
 struct port_info *VAR_4 = FUNC_0(VAR_2);
 struct adapter *VAR_5 = VAR_4->adapter;
 struct qset_params *VAR_6;
 struct sge_qset *VAR_7;
 int VAR_8;

 if (VAR_3->rx_coalesce_usecs * 10 > VAR_1)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_4->nqsets; VAR_8++) {
  VAR_6 = &VAR_5->params.sge.qset[VAR_8];
  VAR_7 = &VAR_5->sge.qs[VAR_8];
  VAR_6->coalesce_usecs = VAR_3->rx_coalesce_usecs;
  FUNC_1(VAR_7, VAR_6);
 }

 return 0;
}
