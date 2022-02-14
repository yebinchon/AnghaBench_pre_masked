
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int ) ;
 size_t VAR_1 ;
 struct net_device* FUNC_1 (struct net*,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct nlattr*) ;

__attribute__((used)) static struct net_device *FUNC_4(struct net *VAR_2,
       struct nlattr **VAR_3)
{
 int VAR_4 = FUNC_3(VAR_3[VAR_1]);
 struct net_device *VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_4);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 if (!FUNC_2(VAR_5))
  return FUNC_0(-VAR_0);

 return VAR_5;
}
