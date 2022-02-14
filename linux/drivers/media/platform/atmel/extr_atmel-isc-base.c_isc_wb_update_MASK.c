
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u32 ;
struct isc_ctrls {size_t* hist_count; size_t** hist_minmax; size_t* offset; size_t* gain; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t FUNC_0 (int,size_t) ;

__attribute__((used)) static void FUNC_1(struct isc_ctrls *VAR_7)
{
 u32 *VAR_8 = &VAR_7->hist_count[0];
 u32 VAR_9, VAR_10[4];
 u64 VAR_11 = 0;

 u32 VAR_12[4], VAR_13[4];







 VAR_11 = (u64)VAR_8[VAR_5] +
  (u64)VAR_8[VAR_4];
 VAR_11 >>= 1;


 if (!VAR_11)
  return;

 for (VAR_9 = VAR_5; VAR_9 <= VAR_3; VAR_9++) {





  VAR_10[VAR_9] = VAR_7->hist_minmax[VAR_9][VAR_2];
  VAR_7->offset[VAR_9] = (VAR_10[VAR_9] - 1) << 3;


  if (!VAR_7->offset[VAR_9])
   VAR_7->offset[VAR_9] = VAR_6;
  VAR_12[VAR_9] = (VAR_0 << 9) /
   (VAR_7->hist_minmax[VAR_9][VAR_1] -
   VAR_7->hist_minmax[VAR_9][VAR_2] + 1);







  if (VAR_8[VAR_9])
   VAR_13[VAR_9] = FUNC_0(VAR_11 << 9, VAR_8[VAR_9]);
  else
   VAR_13[VAR_9] = 1 << 9;


  VAR_7->gain[VAR_9] = VAR_12[VAR_9] * VAR_13[VAR_9];
  VAR_7->gain[VAR_9] >>= 9;
 }
}
