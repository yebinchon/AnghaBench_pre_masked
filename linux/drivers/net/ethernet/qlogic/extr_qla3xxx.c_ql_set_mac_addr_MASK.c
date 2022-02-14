
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {scalar_t__ dev_addr; } ;
typedef int __le16 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, u16 *VAR_1)
{
 __le16 *VAR_2 = (__le16 *)VAR_0->dev_addr;
 VAR_2[0] = FUNC_0(VAR_1[0]);
 VAR_2[1] = FUNC_0(VAR_1[1]);
 VAR_2[2] = FUNC_0(VAR_1[2]);
}
