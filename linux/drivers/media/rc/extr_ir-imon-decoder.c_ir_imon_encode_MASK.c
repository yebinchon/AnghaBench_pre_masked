
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ir_raw_event {int pulse; int duration; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ir_raw_event*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(enum rc_proto VAR_4, u32 VAR_5,
     struct ir_raw_event *VAR_6, unsigned int VAR_7)
{
 struct ir_raw_event *VAR_8 = VAR_6;
 int VAR_9, VAR_10;

 if (!VAR_7--)
  return -VAR_0;
 FUNC_1(VAR_8, 1, VAR_3);

 for (VAR_9 = VAR_1; VAR_9 >= 0; VAR_9--) {
  if (FUNC_0(VAR_9) & VAR_2)
   VAR_10 = !(VAR_5 & (FUNC_0(VAR_9) | FUNC_0(VAR_9 + 1)));
  else
   VAR_10 = 0;

  if (VAR_10 == VAR_8->pulse) {
   VAR_8->duration += VAR_3;
  } else {
   if (!VAR_7--)
    return -VAR_0;
   FUNC_1(++VAR_8, VAR_10, VAR_3);
  }

  VAR_10 = !(VAR_5 & FUNC_0(VAR_9));

  if (VAR_10 == VAR_8->pulse) {
   VAR_8->duration += VAR_3;
  } else {
   if (!VAR_7--)
    return -VAR_0;
   FUNC_1(++VAR_8, VAR_10, VAR_3);
  }
 }

 if (VAR_8->pulse)
  VAR_8++;

 return VAR_8 - VAR_6;
}
