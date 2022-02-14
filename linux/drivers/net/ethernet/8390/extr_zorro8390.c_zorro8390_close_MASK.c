
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ei_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 struct ei_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ei_device*,int ,struct net_device*,char*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1)
{
 struct ei_device *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(VAR_2, VAR_0, VAR_1, "Shutting down ethercard\n");
 FUNC_0(VAR_1);
 return 0;
}
