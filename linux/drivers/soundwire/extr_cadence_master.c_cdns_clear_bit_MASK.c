
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdw_cdns {scalar_t__ registers; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct sdw_cdns *VAR_1, int VAR_2, u32 VAR_3)
{
 int VAR_4 = 10;
 u32 VAR_5;

 FUNC_2(VAR_3, VAR_1->registers + VAR_2);


 do {
  VAR_5 = FUNC_0(VAR_1->registers + VAR_2);
  if ((VAR_5 & VAR_3) == 0)
   return 0;

  VAR_4--;
  FUNC_1(50);
 } while (VAR_4 != 0);

 return -VAR_0;
}
