
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (struct net_device*,int ,int) ;
 int FUNC_1 (struct net_device*,struct net_device*) ;
 int FUNC_2 (int ) ;
 struct net_device* FUNC_3 (struct net_device*) ;

int FUNC_4(struct net_device *VAR_2)
{
 struct net_device *VAR_3 = ((void*)0);
 int VAR_4, VAR_5 = 0;


 VAR_5 = FUNC_1(VAR_2, VAR_2);
 if (VAR_5)
  return VAR_5;


 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3) {
  VAR_5 = FUNC_1(VAR_3, VAR_2);
  if (VAR_5)
   return VAR_5;
 }

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = FUNC_0(VAR_2, FUNC_2(VAR_0), VAR_4);
  if (!VAR_3)
   continue;

  VAR_5 = FUNC_1(VAR_3, VAR_2);
  if (VAR_5)
   break;
 }

 return VAR_5;
}
