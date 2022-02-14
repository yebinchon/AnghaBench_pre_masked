
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct tuned_station_info {scalar_t__ af_list_max; scalar_t__ afcache_size; scalar_t__* af_cache; } ;
struct TYPE_3__ {scalar_t__ fm_band; scalar_t__ bot_freq; } ;
struct TYPE_4__ {scalar_t__ freq; TYPE_1__ region; struct tuned_station_info stat_info; } ;
struct fmdev {TYPE_2__ rx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct fmdev *VAR_7, u8 VAR_8)
{
 struct tuned_station_info *VAR_9 = &VAR_7->rx.stat_info;
 u8 VAR_10 = VAR_7->rx.region.fm_band;
 u8 VAR_11;
 u32 VAR_12;


 if ((VAR_8 >= VAR_2) && (VAR_8 <= VAR_3)) {
  VAR_7->rx.stat_info.af_list_max = (VAR_8 - VAR_2 + 1);
  VAR_7->rx.stat_info.afcache_size = 0;
  FUNC_0("No of expected AF : %d\n", VAR_7->rx.stat_info.af_list_max);
  return;
 }

 if (VAR_8 < VAR_6)
  return;
 if (VAR_10 == VAR_0 && VAR_8 > VAR_4)
  return;
 if (VAR_10 == VAR_1 && VAR_8 > VAR_5)
  return;

 VAR_12 = VAR_7->rx.region.bot_freq + (VAR_8 * 100);
 if (VAR_12 == VAR_7->rx.freq) {
  FUNC_0("Current freq(%d) is matching with received AF(%d)\n",
    VAR_7->rx.freq, VAR_12);
  return;
 }

 for (VAR_11 = 0; VAR_11 < VAR_9->afcache_size; VAR_11++) {
  if (VAR_9->af_cache[VAR_11] == VAR_12)
   break;
 }

 if (VAR_11 == VAR_9->af_list_max) {
  FUNC_0("AF cache is full\n");
  return;
 }




 if (VAR_11 == VAR_9->afcache_size) {
  FUNC_0("Storing AF %d to cache index %d\n", VAR_12, VAR_11);
  VAR_9->af_cache[VAR_11] = VAR_12;
  VAR_9->afcache_size++;
 }
}
