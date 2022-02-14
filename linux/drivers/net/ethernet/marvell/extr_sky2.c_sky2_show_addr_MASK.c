
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_port {int dummy; } ;
struct net_device {int dev_addr; } ;


 struct sky2_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sky2_port const*,int ,struct net_device*,char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1)
{
 const struct sky2_port *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2, VAR_0, VAR_1, "addr %pM\n", VAR_1->dev_addr);
}
