
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int const* dev_addr; } ;
struct mvpp2_port {int dummy; } ;


 int FUNC_0 (int const*,int const*) ;
 int FUNC_1 (struct mvpp2_port*,int const*,int) ;
 struct mvpp2_port* FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_0, const u8 *VAR_1)
{
 struct mvpp2_port *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;


 VAR_3 = FUNC_1(VAR_2, VAR_0->dev_addr, 0);
 if (VAR_3)
  return VAR_3;


 VAR_3 = FUNC_1(VAR_2, VAR_1, 1);
 if (VAR_3)
  return VAR_3;


 FUNC_0(VAR_0->dev_addr, VAR_1);

 return 0;
}
