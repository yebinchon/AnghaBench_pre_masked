
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,struct net_device*,unsigned long,void*,int ) ;
 int FUNC_1 (struct net_device*,struct net_device*,unsigned long,void*,int ) ;
 int FUNC_2 (struct net_device*,struct net_device*,unsigned long,void*,int ) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 struct net_device* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_0,
      unsigned long VAR_1, void *VAR_2)
{
 struct net_device *VAR_3 = FUNC_6(VAR_0);
 u16 VAR_4 = FUNC_7(VAR_0);

 if (FUNC_3(VAR_3))
  return FUNC_2(VAR_0, VAR_3,
         VAR_1, VAR_2, VAR_4);
 else if (FUNC_5(VAR_3))
  return FUNC_1(VAR_0,
             VAR_3, VAR_1,
             VAR_2, VAR_4);
 else if (FUNC_4(VAR_3))
  return FUNC_0(VAR_0, VAR_3,
           VAR_1, VAR_2, VAR_4);

 return 0;
}
