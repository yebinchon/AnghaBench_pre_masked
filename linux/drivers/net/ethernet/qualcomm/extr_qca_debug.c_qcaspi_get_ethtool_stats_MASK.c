
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qcaspi_stats {int dummy; } ;
struct qcaspi {struct qcaspi_stats stats; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct qcaspi_stats*,int) ;
 struct qcaspi* FUNC_2 (struct net_device*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_1, struct ethtool_stats *VAR_2, u64 *VAR_3)
{
 struct qcaspi *VAR_4 = FUNC_2(VAR_1);
 struct qcaspi_stats *VAR_5 = &VAR_4->stats;

 FUNC_1(VAR_3, VAR_5, FUNC_0(VAR_0) * sizeof(u64));
}
