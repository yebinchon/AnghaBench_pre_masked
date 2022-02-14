
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mwifiex_private {int* bitmap_rates; scalar_t__ is_data_rate_auto; TYPE_1__* aggr_prio_tbl; } ;
struct TYPE_2__ {scalar_t__ amsdu; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline u8
FUNC_0(struct mwifiex_private *VAR_1, int VAR_2)
{
 return (((VAR_1->aggr_prio_tbl[VAR_2].amsdu != VAR_0) &&
   (VAR_1->is_data_rate_auto || !(VAR_1->bitmap_rates[2] & 0x03)))
  ? 1 : 0);
}
