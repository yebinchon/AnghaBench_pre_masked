
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int eee_wakeup_error_n; } ;
struct sxgbe_priv_data {TYPE_1__ xstats; scalar_t__ eee_enabled; } ;
struct net_device {int phydev; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_4__ {int stat_offset; int sizeof_stat; } ;


 int VAR_0 ;
 struct sxgbe_priv_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2,
        struct ethtool_stats *VAR_3, u64 *VAR_4)
{
 struct sxgbe_priv_data *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;
 char *VAR_7;

 if (VAR_5->eee_enabled) {
  int VAR_8 = FUNC_1(VAR_2->phydev);

  if (VAR_8)
   VAR_5->xstats.eee_wakeup_error_n = VAR_8;
 }

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_7 = (char *)VAR_5 + VAR_1[VAR_6].stat_offset;
  VAR_4[VAR_6] = (VAR_1[VAR_6].sizeof_stat == sizeof(u64))
   ? (*(u64 *)VAR_7) : (*(u32 *)VAR_7);
 }
}
