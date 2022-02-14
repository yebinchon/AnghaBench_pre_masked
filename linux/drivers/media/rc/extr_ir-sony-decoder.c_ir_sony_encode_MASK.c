
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ir_raw_event {int dummy; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ir_raw_event**,unsigned int,int *,int,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(enum rc_proto VAR_3, u32 VAR_4,
     struct ir_raw_event *VAR_5, unsigned int VAR_6)
{
 struct ir_raw_event *VAR_7 = VAR_5;
 u32 VAR_8, VAR_9;
 int VAR_10;

 if (VAR_3 == VAR_0) {
  VAR_8 = (VAR_4 & 0x7f) | ((VAR_4 & 0x1f0000) >> 9);
  VAR_9 = 12;
 } else if (VAR_3 == VAR_1) {
  VAR_8 = (VAR_4 & 0x7f) | ((VAR_4 & 0xff0000) >> 9);
  VAR_9 = 15;
 } else {
  VAR_8 = (VAR_4 & 0x7f) | ((VAR_4 & 0x1f0000) >> 9) |
         ((VAR_4 & 0xff00) << 4);
  VAR_9 = 20;
 }

 VAR_10 = FUNC_0(&VAR_7, VAR_6, &VAR_2, VAR_9, VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 return VAR_7 - VAR_5;
}
