
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (struct net_device*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0, void *VAR_1)
{
 __be32 VAR_2 = *((__be32 *)VAR_1);

 return VAR_2 == FUNC_0(VAR_0, 0, VAR_2);
}
