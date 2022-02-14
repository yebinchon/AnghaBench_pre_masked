
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hip04_priv {int port; int map; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int*) ;

__attribute__((used)) static void FUNC_1(struct hip04_priv *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6 = 0;

 do {
  FUNC_0(VAR_3->map, VAR_3->port * 4 + VAR_1, &VAR_4);
  FUNC_0(VAR_3->map, VAR_3->port * 4 + VAR_0, &VAR_5);
  if (VAR_6++ > VAR_2)
   break;
 } while (VAR_4 & 0xfff);
}
