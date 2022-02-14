
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ir_raw_timings_manchester {scalar_t__ trailer_space; scalar_t__ clock; scalar_t__ invert; scalar_t__ leader_space; scalar_t__ leader_pulse; } ;
struct ir_raw_event {int duration; int pulse; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct ir_raw_event*,int,scalar_t__) ;

int FUNC_2(struct ir_raw_event **VAR_1, unsigned int VAR_2,
     const struct ir_raw_timings_manchester *VAR_3,
     unsigned int VAR_4, u64 VAR_5)
{
 bool VAR_6;
 u64 VAR_7;
 int VAR_8 = -VAR_0;

 VAR_7 = FUNC_0(VAR_4 - 1);

 if (VAR_3->leader_pulse) {
  if (!VAR_2--)
   return VAR_8;
  FUNC_1((*VAR_1), 1, VAR_3->leader_pulse);
  if (VAR_3->leader_space) {
   if (!VAR_2--)
    return VAR_8;
   FUNC_1(++(*VAR_1), 0,
         VAR_3->leader_space);
  }
 } else {

  --(*VAR_1);
 }


 while (VAR_4 && VAR_7 > 0) {
  VAR_6 = !(VAR_5 & VAR_7);
  if (VAR_3->invert)
   VAR_6 = !VAR_6;
  if (VAR_6 == !!(*VAR_1)->pulse) {
   (*VAR_1)->duration += VAR_3->clock;
  } else {
   if (!VAR_2--)
    goto nobufs;
   FUNC_1(++(*VAR_1), VAR_6,
         VAR_3->clock);
  }

  if (!VAR_2--)
   goto nobufs;
  FUNC_1(++(*VAR_1), !VAR_6,
        VAR_3->clock);
  VAR_7 >>= 1;
 }

 if (VAR_3->trailer_space) {
  if (!(*VAR_1)->pulse)
   (*VAR_1)->duration += VAR_3->trailer_space;
  else if (!VAR_2--)
   goto nobufs;
  else
   FUNC_1(++(*VAR_1), 0,
         VAR_3->trailer_space);
 }

 VAR_8 = 0;
nobufs:

 ++(*VAR_1);
 return VAR_8;
}
