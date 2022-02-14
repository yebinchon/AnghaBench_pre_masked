
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rsv_col_set_info {int start_col; int interval; int safe_mas_per_col; int unsafe_mas_per_col; } ;
struct uwb_rsv_col_info {int max_avail_safe; int max_avail_unsafe; int* highest_mas; struct uwb_rsv_col_set_info csi; } ;
struct uwb_rsv_alloc_info {int safe_allocated_mases; int unsafe_allocated_mases; int total_allocated_mases; int interval; struct uwb_rsv_col_info* ci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct uwb_rsv_alloc_info *VAR_4, int VAR_5,
     int VAR_6, int VAR_7)
{
 struct uwb_rsv_col_info *VAR_8 = VAR_4->ci;
 struct uwb_rsv_col_set_info *VAR_9 = &VAR_8->csi;
 struct uwb_rsv_col_set_info VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18;
 int VAR_19;
 int VAR_20 = VAR_3;

 VAR_10.start_col = 0;
 VAR_14 = VAR_5;
 VAR_19 = VAR_7 + VAR_6;

 for (VAR_11 = 0; ((VAR_5 >> VAR_11) & 0x1) == 0; VAR_11++) {
  VAR_14 /= 2;
  VAR_15 = 0;
  VAR_18 = VAR_0;

  for (VAR_12 = 1; VAR_12 <= (1 << VAR_11); VAR_12++) {
   VAR_17 = 0;
   VAR_16 = VAR_14 + VAR_15;
   for (VAR_13 = VAR_16; VAR_13 < VAR_1; VAR_13 += VAR_5) {

    if (VAR_8[VAR_13].max_avail_safe >= VAR_6 &&
        VAR_8[VAR_13].max_avail_unsafe >= VAR_19) {
     if (VAR_8[VAR_13].highest_mas[VAR_19] > VAR_17)
      VAR_17 = VAR_8[VAR_13].highest_mas[VAR_19];
    } else {
     VAR_17 = 0;
     break;
    }
   }
   if ((VAR_18 > VAR_17) && VAR_17) {
    VAR_18 = VAR_17;

    VAR_10.start_col = VAR_16;
   }
   VAR_15 += (VAR_5 >> VAR_11);
  }

  if (VAR_18 < 8) {
   VAR_9->start_col = VAR_10.start_col;
   VAR_20 = VAR_2;
   break;
  } else if ((VAR_18 > 8) &&
      (VAR_18 != VAR_0) &&
      (VAR_20 == VAR_3)) {
   VAR_9->start_col = VAR_10.start_col;
   VAR_20 = VAR_2;
  }
 }

 if (VAR_20 == VAR_2) {
  VAR_9->interval = VAR_5;
  VAR_9->safe_mas_per_col = VAR_6;
  VAR_9->unsafe_mas_per_col = VAR_7;

  VAR_4->safe_allocated_mases = (VAR_1 / VAR_5) * VAR_6;
  VAR_4->unsafe_allocated_mases = (VAR_1 / VAR_5) * VAR_7;
  VAR_4->total_allocated_mases = VAR_4->safe_allocated_mases + VAR_4->unsafe_allocated_mases;
  VAR_4->interval = VAR_5;
 }
 return VAR_20;
}
