
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ir_raw_event {int dummy; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ir_raw_event**,unsigned int,int *,int,int) ;

__attribute__((used)) static int FUNC_1(enum rc_proto VAR_7, u32 VAR_8,
        struct ir_raw_event *VAR_9, unsigned int VAR_10)
{
 struct ir_raw_event *VAR_11 = VAR_9;
 int VAR_12, VAR_13;
 u64 VAR_14;

 if (VAR_7 == VAR_5) {
  VAR_14 = VAR_8 |
        ((u64)VAR_1 << VAR_2);
  VAR_12 = VAR_2 + VAR_0;
 } else {
  VAR_14 = VAR_8 |
        ((u64)VAR_3 << VAR_4);
  VAR_12 = VAR_4 + VAR_0;
 }

 VAR_13 = FUNC_0(&VAR_11, VAR_10, &VAR_6, VAR_12, VAR_14);
 if (VAR_13 < 0)
  return VAR_13;

 return VAR_11 - VAR_9;
}
