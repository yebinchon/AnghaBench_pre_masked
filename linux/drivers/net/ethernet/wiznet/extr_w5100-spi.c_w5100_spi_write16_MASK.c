
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0, u32 VAR_1, u16 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2 >> 8);
 if (VAR_3)
  return VAR_3;

 return FUNC_0(VAR_0, VAR_1 + 1, VAR_2 & 0xff);
}
