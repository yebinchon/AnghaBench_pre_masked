
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ir_raw_event {int dummy; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ir_raw_event**,unsigned int,int *,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;

__attribute__((used)) static int FUNC_1(enum rc_proto VAR_11, u32 VAR_12,
    struct ir_raw_event *VAR_13, unsigned int VAR_14)
{
 int VAR_15;
 struct ir_raw_event *VAR_16 = VAR_13;
 unsigned int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;


 if (VAR_11 == VAR_5) {

  VAR_19 = (VAR_12 & 0x003f) >> 0;
  VAR_20 = (VAR_12 & 0x0040) >> 6;
  VAR_21 = (VAR_12 & 0x1f00) >> 8;

  VAR_17 = !VAR_20 << 12 | VAR_21 << 6 | VAR_19;


  VAR_15 = FUNC_0(&VAR_16, VAR_14, &VAR_9,
         VAR_3 - 1, VAR_17);
  if (VAR_15 < 0)
   return VAR_15;
 } else if (VAR_11 == VAR_6) {

  VAR_18 = (VAR_12 & 0x00003f) >> 0;
  VAR_19 = (VAR_12 & 0x003f00) >> 8;
  VAR_20 = !(VAR_12 & 0x004000);
  VAR_21 = (VAR_12 & 0x1f0000) >> 16;


  VAR_17 = VAR_20 << 18 | VAR_21 << 12 | VAR_19 << 6 | VAR_18;


  VAR_22 = VAR_17 >> (VAR_2 - VAR_0);
  VAR_15 = FUNC_0(&VAR_16, VAR_14, &VAR_10[0],
         VAR_0 - 1,
         VAR_22);
  if (VAR_15 < 0)
   return VAR_15;
  VAR_15 = FUNC_0(&VAR_16, VAR_14 - (VAR_16 - VAR_13),
         &VAR_10[1],
         VAR_2 - VAR_0,
         VAR_17);
  if (VAR_15 < 0)
   return VAR_15;
 } else if (VAR_11 == VAR_7) {


  VAR_15 = FUNC_0(&VAR_16, VAR_14, &VAR_8,
         VAR_4 - 1,
         VAR_12 & 0x2fff);
  if (VAR_15 < 0)
   return VAR_15;
 } else {
  return -VAR_1;
 }

 return VAR_16 - VAR_13;
}
