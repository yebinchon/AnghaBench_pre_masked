
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int num_tx_queues; } ;
struct bcm_sysport_stats {char* stat_string; int type; } ;
struct bcm_sysport_priv {int is_lite; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;

 struct bcm_sysport_stats* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 struct bcm_sysport_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3,
        u32 VAR_4, u8 *VAR_5)
{
 struct bcm_sysport_priv *VAR_6 = FUNC_2(VAR_3);
 const struct bcm_sysport_stats *VAR_7;
 char VAR_8[128];
 int VAR_9, VAR_10;

 switch (VAR_4) {
 case 128:
  for (VAR_9 = 0, VAR_10 = 0; VAR_9 < VAR_0; VAR_9++) {
   VAR_7 = &VAR_2[VAR_9];
   if (VAR_6->is_lite &&
       !FUNC_0(VAR_7->type))
    continue;

   FUNC_1(VAR_5 + VAR_10 * VAR_1, VAR_7->stat_string,
          VAR_1);
   VAR_10++;
  }

  for (VAR_9 = 0; VAR_9 < VAR_3->num_tx_queues; VAR_9++) {
   FUNC_3(VAR_8, sizeof(VAR_8), "txq%d_packets", VAR_9);
   FUNC_1(VAR_5 + VAR_10 * VAR_1, VAR_8,
          VAR_1);
   VAR_10++;

   FUNC_3(VAR_8, sizeof(VAR_8), "txq%d_bytes", VAR_9);
   FUNC_1(VAR_5 + VAR_10 * VAR_1, VAR_8,
          VAR_1);
   VAR_10++;
  }
  break;
 default:
  break;
 }
}
