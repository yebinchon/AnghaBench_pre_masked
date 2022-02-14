
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct net_device *VAR_0, unsigned long *VAR_1, int VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_0, VAR_2);

 if (VAR_3) {
  *VAR_1 += VAR_3;
  FUNC_1(VAR_0, 0, VAR_2);
 }
}
