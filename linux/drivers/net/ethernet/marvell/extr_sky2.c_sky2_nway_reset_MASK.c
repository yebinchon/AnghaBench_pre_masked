
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_port {int flags; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sky2_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sky2_port*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2)
{
 struct sky2_port *VAR_3 = FUNC_0(VAR_2);

 if (!FUNC_1(VAR_2) || !(VAR_3->flags & VAR_1))
  return -VAR_0;

 FUNC_2(VAR_3);
 FUNC_3(VAR_2);

 return 0;
}
