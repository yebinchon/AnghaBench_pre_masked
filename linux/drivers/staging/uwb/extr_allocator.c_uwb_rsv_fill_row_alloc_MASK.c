
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rsv_row_info {int* avail; int used_rows; } ;
struct uwb_rsv_alloc_info {unsigned char* bm; scalar_t__ unsafe_allocated_mases; scalar_t__ safe_allocated_mases; scalar_t__ total_allocated_mases; struct uwb_rsv_row_info ri; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;

__attribute__((used)) static void FUNC_0(struct uwb_rsv_alloc_info *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 unsigned char *VAR_9 = VAR_5->bm;
 struct uwb_rsv_row_info *VAR_10 = &VAR_5->ri;
 unsigned char VAR_11;

 VAR_8 = 1;
 VAR_11 = VAR_3;
 for (VAR_6 = VAR_0 - 1; VAR_6 >= 0; VAR_6--) {
  if (VAR_10->avail[VAR_6] == 1) {

   if (VAR_8 > VAR_10->used_rows) {
    break;
   } else if (VAR_8 > 7) {
    VAR_11 = VAR_4;
   }

   for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
    if (VAR_9[VAR_7 * VAR_1 + VAR_6] != VAR_2) {
     VAR_9[VAR_7 * VAR_1 + VAR_6] = VAR_11;
     if(VAR_11 == VAR_3)
      VAR_5->safe_allocated_mases++;
     else
      VAR_5->unsafe_allocated_mases++;
    }
   }
   VAR_8++;
  }
 }
 VAR_5->total_allocated_mases = VAR_5->safe_allocated_mases + VAR_5->unsafe_allocated_mases;
}
