
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtu3 {int num_eps; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mtu3*,int) ;
 int FUNC_3 (struct mtu3*,int) ;

__attribute__((used)) static void FUNC_4(struct mtu3 *VAR_0, u32 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 1; VAR_2 < VAR_0->num_eps; VAR_2++) {
  if (VAR_1 & FUNC_0(VAR_2))
   FUNC_2(VAR_0, VAR_2);
  if (VAR_1 & FUNC_1(VAR_2))
   FUNC_3(VAR_0, VAR_2);
 }
}
