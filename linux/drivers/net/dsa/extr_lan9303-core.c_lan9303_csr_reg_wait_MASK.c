
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan9303 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct lan9303*,int,int*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct lan9303 *VAR_1, int VAR_2, u32 VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 25; VAR_4++) {
  u32 VAR_5;

  FUNC_0(VAR_1, VAR_2, &VAR_5);
  if (!(VAR_5 & VAR_3))
   return 0;
  FUNC_1(1000, 2000);
 }

 return -VAR_0;
}
