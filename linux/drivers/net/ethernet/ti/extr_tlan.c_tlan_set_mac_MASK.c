
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,char) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1, int VAR_2, char *VAR_3)
{
 int VAR_4;

 VAR_2 *= 6;

 if (VAR_3 != ((void*)0)) {
  for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
   FUNC_0(VAR_1->base_addr,
     VAR_0 + VAR_2 + VAR_4, VAR_3[VAR_4]);
 } else {
  for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
   FUNC_0(VAR_1->base_addr,
     VAR_0 + VAR_2 + VAR_4, 0);
 }

}
