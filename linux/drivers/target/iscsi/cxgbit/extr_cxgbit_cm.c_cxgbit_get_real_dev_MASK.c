
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int priv_flags; int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int ) ;
 struct net_device* FUNC_2 (struct net_device*) ;

__attribute__((used)) static struct net_device *FUNC_3(struct net_device *VAR_1)
{
 if (VAR_1->priv_flags & VAR_0) {
  FUNC_1("Bond devices are not supported. Interface:%s\n",
         VAR_1->name);
  return ((void*)0);
 }

 if (FUNC_0(VAR_1))
  return FUNC_2(VAR_1);

 return VAR_1;
}
