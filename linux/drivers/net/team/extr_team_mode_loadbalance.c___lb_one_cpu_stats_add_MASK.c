
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct u64_stats_sync {int dummy; } ;
struct lb_stats {scalar_t__ tx_bytes; } ;


 unsigned int FUNC_0 (struct u64_stats_sync*) ;
 scalar_t__ FUNC_1 (struct u64_stats_sync*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct lb_stats *VAR_0,
       struct lb_stats *VAR_1,
       struct u64_stats_sync *VAR_2)
{
 unsigned int VAR_3;
 struct lb_stats VAR_4;

 do {
  VAR_3 = FUNC_0(VAR_2);
  VAR_4.tx_bytes = VAR_1->tx_bytes;
 } while (FUNC_1(VAR_2, VAR_3));
 VAR_0->tx_bytes += VAR_4.tx_bytes;
}
