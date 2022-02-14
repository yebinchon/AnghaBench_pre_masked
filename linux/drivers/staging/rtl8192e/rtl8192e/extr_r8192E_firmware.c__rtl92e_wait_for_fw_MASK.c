
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (struct net_device*,int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static bool FUNC_4(struct net_device *VAR_2, u32 VAR_3, u32 VAR_4)
{
 unsigned long VAR_5 = VAR_1 + FUNC_1(VAR_4);

 while (FUNC_3(VAR_1, VAR_5)) {
  if (FUNC_2(VAR_2, VAR_0) & VAR_3)
   return 1;
  FUNC_0(2);
 }
 return 0;
}
