
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct q6v5 {scalar_t__ rmb_base; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct q6v5 *VAR_3, u32 VAR_4, int VAR_5)
{

 unsigned long VAR_6;
 s32 VAR_7;

 VAR_6 = VAR_2 + FUNC_0(VAR_5);
 for (;;) {
  VAR_7 = FUNC_2(VAR_3->rmb_base + VAR_1);
  if (VAR_7 < 0)
   break;

  if (!VAR_4 && VAR_7)
   break;
  else if (VAR_4 && VAR_7 == VAR_4)
   break;

  if (FUNC_3(VAR_2, VAR_6))
   return -VAR_0;

  FUNC_1(1);
 }

 return VAR_7;
}
