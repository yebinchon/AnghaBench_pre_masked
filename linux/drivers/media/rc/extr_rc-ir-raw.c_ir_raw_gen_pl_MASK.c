
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ir_raw_timings_pl {unsigned int header_pulse; unsigned int bit_space; unsigned int* bit_pulse; unsigned int trailer_space; scalar_t__ msb_first; } ;
struct ir_raw_event {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,unsigned int) ;

int FUNC_1(struct ir_raw_event **VAR_1, unsigned int VAR_2,
    const struct ir_raw_timings_pl *VAR_3,
    unsigned int VAR_4, u64 VAR_5)
{
 int VAR_6;
 int VAR_7 = -VAR_0;
 unsigned int VAR_8;

 if (!VAR_2--)
  return VAR_7;

 FUNC_0((*VAR_1)++, 1, VAR_3->header_pulse);

 if (VAR_3->msb_first) {
  for (VAR_6 = VAR_4 - 1; VAR_6 >= 0; --VAR_6) {
   if (!VAR_2--)
    return VAR_7;
   FUNC_0((*VAR_1)++, 0,
         VAR_3->bit_space);
   if (!VAR_2--)
    return VAR_7;
   VAR_8 = VAR_3->bit_pulse[(VAR_5 >> VAR_6) & 1];
   FUNC_0((*VAR_1)++, 1, VAR_8);
  }
 } else {
  for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6, VAR_5 >>= 1) {
   if (!VAR_2--)
    return VAR_7;
   FUNC_0((*VAR_1)++, 0,
         VAR_3->bit_space);
   if (!VAR_2--)
    return VAR_7;
   VAR_8 = VAR_3->bit_pulse[VAR_5 & 1];
   FUNC_0((*VAR_1)++, 1, VAR_8);
  }
 }

 if (!VAR_2--)
  return VAR_7;

 FUNC_0((*VAR_1)++, 0, VAR_3->trailer_space);

 return 0;
}
