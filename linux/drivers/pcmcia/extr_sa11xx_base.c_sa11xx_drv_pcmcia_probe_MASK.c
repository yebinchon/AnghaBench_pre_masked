
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {int nr; struct clk* clk; } ;
struct skt_dev_info {int nskt; struct soc_pcmcia_socket* skt; } ;
struct pcmcia_low_level {int dummy; } ;
struct device {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct device*,struct skt_dev_info*) ;
 struct clk* FUNC_4 (struct device*,int *) ;
 struct skt_dev_info* FUNC_5 (struct device*,int ,int ) ;
 int FUNC_6 (struct soc_pcmcia_socket*) ;
 int FUNC_7 (struct pcmcia_low_level*) ;
 int FUNC_8 (struct soc_pcmcia_socket*,struct pcmcia_low_level*,struct device*) ;
 int FUNC_9 (struct soc_pcmcia_socket*) ;

int FUNC_10(struct device *VAR_2, struct pcmcia_low_level *VAR_3,
       int VAR_4, int VAR_5)
{
 struct skt_dev_info *VAR_6;
 struct soc_pcmcia_socket *VAR_7;
 int VAR_8, VAR_9 = 0;
 struct clk *VAR_10;

 VAR_10 = FUNC_4(VAR_2, ((void*)0));
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 FUNC_7(VAR_3);

 VAR_6 = FUNC_5(VAR_2, FUNC_2(VAR_5), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->nskt = VAR_5;


 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_7 = &VAR_6->skt[VAR_8];

  VAR_7->nr = VAR_4 + VAR_8;
  VAR_7->clk = VAR_10;
  FUNC_8(VAR_7, VAR_3, VAR_2);

  VAR_9 = FUNC_6(VAR_7);
  if (VAR_9)
   break;
 }

 if (VAR_9) {
  while (--VAR_8 >= 0)
   FUNC_9(&VAR_6->skt[VAR_8]);
 } else {
  FUNC_3(VAR_2, VAR_6);
 }

 return VAR_9;
}
