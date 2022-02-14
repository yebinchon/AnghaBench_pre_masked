
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slic_device {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,char*,int) ;
 struct slic_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct slic_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0)
{
 struct slic_device *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 FUNC_2(VAR_0);

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_0, "failed to initialize interface: %i\n", VAR_2);
  return VAR_2;
 }

 FUNC_3(VAR_0);

 return 0;
}
