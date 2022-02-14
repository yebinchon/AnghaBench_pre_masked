
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ehea_port {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct ehea_port*,int ) ;
 int FUNC_2 (struct ehea_port*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct net_device*,char*,int) ;
 struct ehea_port* FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_2)
{
 int VAR_3;
 struct ehea_port *VAR_4 = FUNC_8(VAR_2);

 if (VAR_4->state == VAR_0)
  return 0;

 FUNC_3(VAR_2);
 FUNC_0(VAR_2, 0);
 FUNC_1(VAR_4, VAR_1);

 FUNC_4(VAR_2);

 VAR_4->state = VAR_0;

 FUNC_5();

 VAR_3 = FUNC_2(VAR_4);
 if (VAR_3)
  FUNC_7(VAR_2, "Failed freeing resources. ret=%i\n", VAR_3);

 FUNC_6();

 return VAR_3;
}
