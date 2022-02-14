
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q6v5 {scalar_t__ rmb_base; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct q6v5 *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 s32 VAR_6;

 VAR_5 = VAR_2 + FUNC_0(VAR_4);
 for (;;) {
  VAR_6 = FUNC_2(VAR_3->rmb_base + VAR_1);
  if (VAR_6)
   break;

  if (FUNC_3(VAR_2, VAR_5))
   return -VAR_0;

  FUNC_1(1);
 }

 return VAR_6;
}
