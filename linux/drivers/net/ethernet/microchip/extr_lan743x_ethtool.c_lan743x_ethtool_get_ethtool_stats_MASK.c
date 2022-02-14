
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct lan743x_adapter {TYPE_1__* rx; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_5__ {scalar_t__ frame_count; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct lan743x_adapter*,TYPE_1__) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct lan743x_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
           struct ethtool_stats *VAR_3,
           u64 *VAR_4)
{
 struct lan743x_adapter *VAR_5 = FUNC_2(VAR_2);
 int VAR_6 = 0;
 u32 VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_0); VAR_8++) {
  VAR_7 = FUNC_1(VAR_5, VAR_0[VAR_8]);
  VAR_4[VAR_6++] = (u64)VAR_7;
 }
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5->rx); VAR_8++)
  VAR_4[VAR_6++] = (u64)(VAR_5->rx[VAR_8].frame_count);
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++) {
  VAR_7 = FUNC_1(VAR_5, VAR_1[VAR_8]);
  VAR_4[VAR_6++] = (u64)VAR_7;
 }
}
