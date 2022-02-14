
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,scalar_t__,int const) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0, u32 VAR_1, const u8 *VAR_2,
          int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  int VAR_5 = FUNC_0(VAR_0, VAR_1 + VAR_4, VAR_2[VAR_4]);

  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
