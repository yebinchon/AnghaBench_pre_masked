
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct reset_stat_cfg {int rx_stat_mask; int tx_stat_mask; int rq_stat_mask; int sq_stat_mask; } ;
struct nicpf {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct nicpf*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct nicpf *VAR_8,
       int VAR_9, struct reset_stat_cfg *VAR_10)
{
 int VAR_11, VAR_12, VAR_13;
 u64 VAR_14;

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  if (VAR_10->rx_stat_mask & FUNC_0(VAR_11)) {
   VAR_14 = VAR_2 |
       (VAR_9 << VAR_4) |
       (VAR_11 << 3);
   FUNC_1(VAR_8, VAR_14, 0);
  }
 }

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  if (VAR_10->tx_stat_mask & FUNC_0(VAR_11)) {
   VAR_14 = VAR_3 |
       (VAR_9 << VAR_4) |
       (VAR_11 << 3);
   FUNC_1(VAR_8, VAR_14, 0);
  }
 }

 for (VAR_11 = 0; VAR_11 <= 15; VAR_11++) {
  VAR_13 = VAR_11 >> 1;
  VAR_12 = VAR_11 & 1 ? 1 : 0;
  VAR_14 = (VAR_9 << VAR_4) |
      (VAR_13 << VAR_5) | (VAR_12 << 3);
  if (VAR_10->rq_stat_mask & FUNC_0(VAR_11)) {
   VAR_14 |= VAR_0;
   FUNC_1(VAR_8, VAR_14, 0);
  }
  if (VAR_10->sq_stat_mask & FUNC_0(VAR_11)) {
   VAR_14 |= VAR_1;
   FUNC_1(VAR_8, VAR_14, 0);
  }
 }

 return 0;
}
