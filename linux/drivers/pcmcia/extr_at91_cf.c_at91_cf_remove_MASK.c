
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct at91_cf_socket {int socket; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 struct at91_cf_socket* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct at91_cf_socket *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->socket);
 FUNC_0(&VAR_0->dev, 0);

 return 0;
}
