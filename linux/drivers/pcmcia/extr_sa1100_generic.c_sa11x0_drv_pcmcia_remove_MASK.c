
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {int dummy; } ;
struct platform_device {int id; } ;


 struct soc_pcmcia_socket* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct soc_pcmcia_socket*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct soc_pcmcia_socket *VAR_1;

 if (VAR_0->id == -1)
  return FUNC_1(VAR_0);

 VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1);

 return 0;
}
