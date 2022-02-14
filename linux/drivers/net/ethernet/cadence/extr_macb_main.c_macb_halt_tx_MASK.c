
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct macb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_1 (struct macb*,int ) ;
 int FUNC_2 (struct macb*,int ,int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int) ;
 unsigned long FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct macb *VAR_7)
{
 unsigned long VAR_8, VAR_9;
 u32 VAR_10;

 FUNC_2(VAR_7, VAR_2, FUNC_1(VAR_7, VAR_2) | FUNC_0(VAR_4));

 VAR_9 = VAR_6 + FUNC_5(VAR_1);
 do {
  VAR_8 = VAR_6;
  VAR_10 = FUNC_1(VAR_7, VAR_5);
  if (!(VAR_10 & FUNC_0(VAR_3)))
   return 0;

  FUNC_4(250);
 } while (FUNC_3(VAR_8, VAR_9));

 return -VAR_0;
}
