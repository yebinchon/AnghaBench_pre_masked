
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_port {int dummy; } ;
struct net_device {int mtu; } ;


 int FUNC_0 (struct net_device*,char*,int,int) ;
 struct rocker_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct rocker_port*,int) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0, int VAR_1)
{
 struct rocker_port *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 if (VAR_3)
  FUNC_5(VAR_0);

 FUNC_0(VAR_0, "MTU change from %d to %d\n", VAR_0->mtu, VAR_1);
 VAR_0->mtu = VAR_1;

 VAR_4 = FUNC_3(VAR_2, VAR_1);
 if (VAR_4)
  return VAR_4;

 if (VAR_3)
  VAR_4 = FUNC_4(VAR_0);

 return VAR_4;
}
