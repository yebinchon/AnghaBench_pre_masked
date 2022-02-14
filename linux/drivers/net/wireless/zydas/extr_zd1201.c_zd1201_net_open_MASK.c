
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1201 {int essidlen; int essid; int mac_enabled; } ;
struct net_device {int dummy; } ;


 struct zd1201* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct zd1201*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0)
{
 struct zd1201 *VAR_1 = FUNC_0(VAR_0);


 if (!VAR_1->mac_enabled)
  FUNC_2(VAR_1, VAR_1->essid, VAR_1->essidlen);
 FUNC_1(VAR_0);

 return 0;
}
