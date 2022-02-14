
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {int nr; int clk; } ;
struct device {int dummy; } ;
struct platform_device {int id; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,int *) ;
 struct soc_pcmcia_socket* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct platform_device*,struct soc_pcmcia_socket*) ;
 int VAR_2 ;
 int FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct soc_pcmcia_socket*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct soc_pcmcia_socket*,int *,struct device*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_3)
{
 struct soc_pcmcia_socket *VAR_4;
 struct device *VAR_5 = &VAR_3->dev;

 if (VAR_3->id == -1)
  return FUNC_5(VAR_3);

 VAR_4 = FUNC_3(VAR_5, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_4(VAR_3, VAR_4);

 VAR_4->nr = VAR_3->id;
 VAR_4->clk = FUNC_2(VAR_5, ((void*)0));
 if (FUNC_0(VAR_4->clk))
  return FUNC_1(VAR_4->clk);

 FUNC_7(&VAR_2);
 FUNC_8(VAR_4, &VAR_2, VAR_5);

 return FUNC_6(VAR_4);
}
