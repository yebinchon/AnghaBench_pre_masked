
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int event_mask; int ap_event_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct wl1271*) ;
 int FUNC_1 (struct wl1271*) ;
 int FUNC_2 (struct wl1271*) ;
 int FUNC_3 (struct wl1271*) ;
 int FUNC_4 (struct wl1271*) ;
 int FUNC_5 (struct wl1271*) ;

__attribute__((used)) static int FUNC_6(struct wl1271 *VAR_19)
{
 int VAR_20;

 VAR_20 = FUNC_1(VAR_19);
 if (VAR_20 < 0)
  goto out;

 VAR_20 = FUNC_2(VAR_19);
 if (VAR_20 < 0)
  goto out;

 VAR_20 = FUNC_5(VAR_19);
 if (VAR_20 < 0)
  goto out;

 VAR_20 = FUNC_3(VAR_19);
 if (VAR_20 < 0)
  goto out;

 VAR_19->event_mask = VAR_1 |
  VAR_15 |
  VAR_11 |
  VAR_13 |
  VAR_9 |
  VAR_10 |
  VAR_4 |
  VAR_8 |
  VAR_0 |
  VAR_12 |
  VAR_6 |
  VAR_2 |
  VAR_3 |
  VAR_17 |
  VAR_16 |
  VAR_18 |
  VAR_5 |
  VAR_14;

 VAR_19->ap_event_mask = VAR_7;

 VAR_20 = FUNC_4(VAR_19);
 if (VAR_20 < 0)
  goto out;

 VAR_20 = FUNC_0(VAR_19);

out:
 return VAR_20;
}
