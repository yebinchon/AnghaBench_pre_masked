
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int npe; int netdev; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct port*) ;
 int FUNC_2 (int ) ;
 struct port* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct port *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(VAR_1->netdev);
 FUNC_0(VAR_1->netdev);
 FUNC_2(VAR_1->npe);
 FUNC_1(VAR_1);
 return 0;
}
