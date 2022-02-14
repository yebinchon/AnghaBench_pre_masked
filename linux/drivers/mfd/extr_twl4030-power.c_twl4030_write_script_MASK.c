
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct twl4030_ins {int delay; int pmb_message; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(u8 VAR_2, struct twl4030_ins *VAR_3,
           int VAR_4)
{
 int VAR_5 = -VAR_0;

 for (; VAR_4; VAR_4--, VAR_2++, VAR_3++) {
  if (VAR_4 == 1) {
   VAR_5 = FUNC_0(VAR_2,
      VAR_3->pmb_message,
      VAR_3->delay,
      VAR_1);
   if (VAR_5)
    break;
  } else {
   VAR_5 = FUNC_0(VAR_2,
      VAR_3->pmb_message,
      VAR_3->delay,
      VAR_2 + 1);
   if (VAR_5)
    break;
  }
 }
 return VAR_5;
}
