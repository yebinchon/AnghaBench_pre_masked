
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_6__ {scalar_t__ fill_cnt; scalar_t__ cnt; } ;
struct TYPE_5__ {unsigned long rx_packets; unsigned long rx_bytes; } ;
struct myri10ge_rx_done {int idx; int cnt; TYPE_1__* entry; } ;
struct myri10ge_slice_state {TYPE_3__ rx_big; TYPE_3__ rx_small; TYPE_2__ stats; struct myri10ge_priv* mgp; struct myri10ge_rx_done rx_done; } ;
struct myri10ge_priv {int max_intr_slots; scalar_t__ big_bytes; scalar_t__ small_bytes; } ;
typedef int __wsum ;
struct TYPE_4__ {scalar_t__ length; int checksum; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct myri10ge_priv*,TYPE_3__*,scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_2 (struct myri10ge_slice_state*,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static inline int
FUNC_4(struct myri10ge_slice_state *VAR_2, int VAR_3)
{
 struct myri10ge_rx_done *VAR_4 = &VAR_2->rx_done;
 struct myri10ge_priv *VAR_5 = VAR_2->mgp;
 unsigned long VAR_6 = 0;
 unsigned long VAR_7 = 0;
 unsigned long VAR_8;
 int VAR_9 = VAR_4->idx;
 int VAR_10 = VAR_4->cnt;
 int VAR_11 = 0;
 u16 VAR_12;
 __wsum VAR_13;

 while (VAR_4->entry[VAR_9].length != 0 && VAR_11 < VAR_3) {
  VAR_12 = FUNC_3(VAR_4->entry[VAR_9].length);
  VAR_4->entry[VAR_9].length = 0;
  VAR_13 = FUNC_0(VAR_4->entry[VAR_9].checksum);
  VAR_8 = FUNC_2(VAR_2, VAR_12, VAR_13);
  VAR_7 += VAR_8;
  VAR_6 += VAR_8 * (unsigned long)VAR_12;
  VAR_10++;
  VAR_9 = VAR_10 & (VAR_5->max_intr_slots - 1);
  VAR_11++;
 }
 VAR_4->idx = VAR_9;
 VAR_4->cnt = VAR_10;
 VAR_2->stats.rx_packets += VAR_7;
 VAR_2->stats.rx_bytes += VAR_6;


 if (VAR_2->rx_small.fill_cnt - VAR_2->rx_small.cnt < VAR_1)
  FUNC_1(VAR_5, &VAR_2->rx_small,
     VAR_5->small_bytes + VAR_0, 0);
 if (VAR_2->rx_big.fill_cnt - VAR_2->rx_big.cnt < VAR_1)
  FUNC_1(VAR_5, &VAR_2->rx_big, VAR_5->big_bytes, 0);

 return VAR_11;
}
