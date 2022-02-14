
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wl12xx_rx_filter {int action; } ;
struct cfg80211_pkt_pattern {int pattern_len; int * pattern; scalar_t__ mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,unsigned long*) ;
 struct wl12xx_rx_filter* FUNC_1 () ;
 int FUNC_2 (struct wl12xx_rx_filter*,int,int,int *,int) ;
 int FUNC_3 (struct wl12xx_rx_filter*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(struct cfg80211_pkt_pattern *VAR_5,
        struct wl12xx_rx_filter **VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = 0;
 struct wl12xx_rx_filter *VAR_10;
 u16 VAR_11;
 u8 VAR_12, VAR_13;

 VAR_10 = FUNC_1();
 if (!VAR_10) {
  FUNC_4("Failed to alloc rx filter");
  VAR_9 = -VAR_0;
  goto err;
 }

 VAR_7 = 0;
 while (VAR_7 < VAR_5->pattern_len) {
  if (!FUNC_0(VAR_7, (unsigned long *)VAR_5->mask)) {
   VAR_7++;
   continue;
  }

  for (VAR_8 = VAR_7; VAR_8 < VAR_5->pattern_len; VAR_8++) {
   if (!FUNC_0(VAR_8, (unsigned long *)VAR_5->mask))
    break;

   if (VAR_7 < VAR_2 &&
       VAR_8 >= VAR_2)
    break;
  }

  if (VAR_7 < VAR_2) {
   VAR_11 = VAR_7;
   VAR_12 = VAR_3;
  } else {
   VAR_11 = VAR_7 - VAR_2;
   VAR_12 = VAR_4;
  }

  VAR_13 = VAR_8 - VAR_7;

  VAR_9 = FUNC_2(VAR_10,
         VAR_11,
         VAR_12,
         &VAR_5->pattern[VAR_7], VAR_13);
  if (VAR_9)
   goto err;

  VAR_7 = VAR_8;
 }

 VAR_10->action = VAR_1;

 *VAR_6 = VAR_10;
 return 0;

err:
 FUNC_3(VAR_10);
 *VAR_6 = ((void*)0);

 return VAR_9;
}
