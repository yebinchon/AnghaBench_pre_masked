
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ir_raw_timings_pd {unsigned int header_space; unsigned int* bit_space; unsigned int trailer_space; scalar_t__ trailer_pulse; scalar_t__ bit_pulse; scalar_t__ msb_first; scalar_t__ header_pulse; } ;
struct ir_raw_event {int dummy; } ;


 int FUNC_0 (struct ir_raw_event**,unsigned int*,scalar_t__,unsigned int) ;

int FUNC_1(struct ir_raw_event **VAR_0, unsigned int VAR_1,
    const struct ir_raw_timings_pd *VAR_2,
    unsigned int VAR_3, u64 VAR_4)
{
 int VAR_5;
 int VAR_6;
 unsigned int VAR_7;

 if (VAR_2->header_pulse) {
  VAR_6 = FUNC_0(VAR_0, &VAR_1, VAR_2->header_pulse,
          VAR_2->header_space);
  if (VAR_6)
   return VAR_6;
 }

 if (VAR_2->msb_first) {
  for (VAR_5 = VAR_3 - 1; VAR_5 >= 0; --VAR_5) {
   VAR_7 = VAR_2->bit_space[(VAR_4 >> VAR_5) & 1];
   VAR_6 = FUNC_0(VAR_0, &VAR_1,
           VAR_2->bit_pulse,
           VAR_7);
   if (VAR_6)
    return VAR_6;
  }
 } else {
  for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5, VAR_4 >>= 1) {
   VAR_7 = VAR_2->bit_space[VAR_4 & 1];
   VAR_6 = FUNC_0(VAR_0, &VAR_1,
           VAR_2->bit_pulse,
           VAR_7);
   if (VAR_6)
    return VAR_6;
  }
 }

 VAR_6 = FUNC_0(VAR_0, &VAR_1, VAR_2->trailer_pulse,
         VAR_2->trailer_space);
 return VAR_6;
}
