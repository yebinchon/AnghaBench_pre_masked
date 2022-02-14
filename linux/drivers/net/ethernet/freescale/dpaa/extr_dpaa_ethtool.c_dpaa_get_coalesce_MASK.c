
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct qman_portal {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int use_adaptive_rx_coalesce; int rx_max_coalesced_frames; int rx_coalesce_usecs; } ;


 int FUNC_0 (struct qman_portal*,int *) ;
 struct qman_portal* FUNC_1 (int ) ;
 int FUNC_2 (struct qman_portal*,int *) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0,
        struct ethtool_coalesce *VAR_1)
{
 struct qman_portal *VAR_2;
 u32 VAR_3;
 u8 VAR_4;

 VAR_2 = FUNC_1(FUNC_3());
 FUNC_2(VAR_2, &VAR_3);
 FUNC_0(VAR_2, &VAR_4);

 VAR_1->rx_coalesce_usecs = VAR_3;
 VAR_1->rx_max_coalesced_frames = VAR_4;
 VAR_1->use_adaptive_rx_coalesce = 0;

 return 0;
}
