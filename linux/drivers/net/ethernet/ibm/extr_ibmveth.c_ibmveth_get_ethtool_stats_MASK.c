
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct ibmveth_adapter {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_3__ {int offset; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct ibmveth_adapter*,int ) ;
 TYPE_1__* VAR_0 ;
 struct ibmveth_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
          struct ethtool_stats *VAR_2, u64 *VAR_3)
{
 int VAR_4;
 struct ibmveth_adapter *VAR_5 = FUNC_2(VAR_1);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++)
  VAR_3[VAR_4] = FUNC_1(VAR_5, VAR_0[VAR_4].offset);
}
