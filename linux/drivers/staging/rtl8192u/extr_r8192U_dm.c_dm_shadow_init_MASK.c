
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;


 int ** VAR_0 ;
 int FUNC_0 (struct net_device*,int,int *) ;

void FUNC_1(struct net_device *VAR_1)
{
 u8 VAR_2;
 u16 VAR_3;

 for (VAR_2 = 0; VAR_2 < 5; VAR_2++)
  for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
   FUNC_0(VAR_1, VAR_3 + VAR_2 * 256, &VAR_0[VAR_2][VAR_3]);

  }

 for (VAR_2 = 8; VAR_2 < 11; VAR_2++)
  for (VAR_3 = 0; VAR_3 < 256; VAR_3++)
   FUNC_0(VAR_1, VAR_3 + VAR_2 * 256, &VAR_0[VAR_2][VAR_3]);

 for (VAR_2 = 12; VAR_2 < 15; VAR_2++)
  for (VAR_3 = 0; VAR_3 < 256; VAR_3++)
   FUNC_0(VAR_1, VAR_3 + VAR_2 * 256, &VAR_0[VAR_2][VAR_3]);

}
