
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int priv_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (struct net_device*,struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, struct net_device *VAR_2)
{
 FUNC_1(VAR_2, VAR_1);
 VAR_2->priv_flags &= ~VAR_0;

 FUNC_0(VAR_2, ((void*)0));

 return 0;
}
