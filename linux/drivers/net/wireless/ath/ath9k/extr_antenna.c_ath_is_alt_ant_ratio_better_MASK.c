
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_ant_comb {int ant_ratio2; int low_rssi_thresh; } ;



__attribute__((used)) static inline bool FUNC_0(struct ath_ant_comb *VAR_0,
            int VAR_1, int VAR_2,
            int VAR_3, int VAR_4,
            int VAR_5, int VAR_6)
{
 if (VAR_6 <= 50)
  return 0;

 if (VAR_5 > VAR_4 + VAR_3)
  return 1;

 if (VAR_1 >= VAR_0->ant_ratio2 &&
     VAR_5 >= VAR_0->low_rssi_thresh &&
     (VAR_5 > VAR_4 + VAR_2))
  return 1;

 return 0;
}
