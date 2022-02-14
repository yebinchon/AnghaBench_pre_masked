
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xxs1500_pcmcia_sock {scalar_t__ virt_io; int socket; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct xxs1500_pcmcia_sock*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct xxs1500_pcmcia_sock*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *) ;
 struct xxs1500_pcmcia_sock* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct xxs1500_pcmcia_sock *VAR_3 = FUNC_5(VAR_2);

 FUNC_4(&VAR_3->socket);
 FUNC_0(FUNC_1(VAR_0), VAR_3);
 FUNC_2((void *)(VAR_3->virt_io + (u32)VAR_1));
 FUNC_3(VAR_3);

 return 0;
}
