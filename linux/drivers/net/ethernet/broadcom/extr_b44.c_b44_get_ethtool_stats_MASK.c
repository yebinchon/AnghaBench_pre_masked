
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct b44_hw_stats {int syncp; int tx_good_octets; } ;
struct b44 {int lock; struct b44_hw_stats hw_stats; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct b44*) ;
 struct b44* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_1,
      struct ethtool_stats *VAR_2, u64 *VAR_3)
{
 struct b44 *VAR_4 = FUNC_2(VAR_1);
 struct b44_hw_stats *VAR_5 = &VAR_4->hw_stats;
 u64 *VAR_6, *VAR_7;
 unsigned int VAR_8;
 u32 VAR_9;

 FUNC_3(&VAR_4->lock);
 FUNC_1(VAR_4);
 FUNC_4(&VAR_4->lock);

 do {
  VAR_6 = &VAR_5->tx_good_octets;
  VAR_7 = VAR_3;
  VAR_8 = FUNC_5(&VAR_5->syncp);

  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_0); VAR_9++)
   *VAR_7++ = *VAR_6++;

 } while (FUNC_6(&VAR_5->syncp, VAR_8));
}
