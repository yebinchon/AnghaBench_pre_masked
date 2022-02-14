
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ivtv {int* last_dec_timing; int i_flags; int decoding; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct ivtv*,int ,int,int*) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

int FUNC_6(struct ivtv *VAR_4, s64 *VAR_5, s64 *VAR_6)
{
 u32 VAR_7[VAR_1];

 if (FUNC_5(VAR_3, &VAR_4->i_flags)) {
  *VAR_5 = (s64)((u64)VAR_4->last_dec_timing[2] << 32) |
   (u64)VAR_4->last_dec_timing[1];
  *VAR_6 = VAR_4->last_dec_timing[0];
  return 0;
 }
 *VAR_5 = 0;
 *VAR_6 = 0;
 if (FUNC_1(&VAR_4->decoding)) {
  if (FUNC_2(VAR_4, VAR_0, 5, VAR_7)) {
   FUNC_0("GET_TIMING: couldn't read clock\n");
   return -VAR_2;
  }
  FUNC_3(VAR_4->last_dec_timing, VAR_7, sizeof(VAR_4->last_dec_timing));
  FUNC_4(VAR_3, &VAR_4->i_flags);
  *VAR_5 = (s64)((u64) VAR_7[2] << 32) | (u64) VAR_7[1];
  *VAR_6 = VAR_7[0];

 }
 return 0;
}
