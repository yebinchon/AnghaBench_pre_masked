
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct platform_device {int dummy; } ;
struct db1x_pcmcia_sock {scalar_t__ virt_io; int socket; } ;


 int FUNC_0 (struct db1x_pcmcia_sock*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct db1x_pcmcia_sock*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *) ;
 struct db1x_pcmcia_sock* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct db1x_pcmcia_sock *VAR_2 = FUNC_4(VAR_1);

 FUNC_0(VAR_2);
 FUNC_3(&VAR_2->socket);
 FUNC_1((void *)(VAR_2->virt_io + (u32)VAR_0));
 FUNC_2(VAR_2);

 return 0;
}
