
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int dummy; } ;
struct mwifiex_private {int dummy; } ;


 struct mwifiex_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct mwifiex_private*,struct net_device*,int,int ) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_0, void *VAR_1)
{
 struct mwifiex_private *VAR_2 = FUNC_0(VAR_0);
 struct sockaddr *VAR_3 = VAR_1;

 return FUNC_1(VAR_2, VAR_0, 1, VAR_3->sa_data);
}
