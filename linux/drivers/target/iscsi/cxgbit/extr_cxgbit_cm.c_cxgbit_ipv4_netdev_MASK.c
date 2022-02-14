
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef int __be32 ;


 struct net_device* FUNC_0 (int *,int ,int) ;
 struct net_device* FUNC_1 (struct net_device*) ;
 int VAR_0 ;

__attribute__((used)) static struct net_device *FUNC_2(__be32 VAR_1)
{
 struct net_device *VAR_2;

 VAR_2 = FUNC_0(&VAR_0, VAR_1, 0);
 if (!VAR_2)
  return ((void*)0);

 return FUNC_1(VAR_2);
}
