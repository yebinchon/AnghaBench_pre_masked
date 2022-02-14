
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan78xx_net {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (struct lan78xx_net*,int ,int*) ;
 int FUNC_1 (unsigned long,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct lan78xx_net *VAR_5)
{
 unsigned long VAR_6 = VAR_4;
 u32 VAR_7;
 int VAR_8;

 do {
  VAR_8 = FUNC_0(VAR_5, VAR_2, &VAR_7);
  if (FUNC_2(VAR_8 < 0))
   return -VAR_0;

  if (!(VAR_7 & VAR_3))
   return 0;
 } while (!FUNC_1(VAR_4, VAR_6 + VAR_1));

 return -VAR_0;
}
