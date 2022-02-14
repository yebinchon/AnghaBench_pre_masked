
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct soc_pcmcia_socket {struct clk* clk; scalar_t__ nr; } ;
struct skt_dev_info {int nskt; struct soc_pcmcia_socket* skt; } ;
struct TYPE_7__ {scalar_t__ platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pcmcia_low_level {int nr; scalar_t__ first; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,struct skt_dev_info*) ;
 struct clk* FUNC_5 (TYPE_1__*,int *) ;
 struct skt_dev_info* FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,struct pcmcia_low_level*) ;
 int FUNC_8 (struct soc_pcmcia_socket*) ;
 int FUNC_9 (struct pcmcia_low_level*) ;
 int FUNC_10 (struct soc_pcmcia_socket*,struct pcmcia_low_level*,TYPE_1__*) ;
 int FUNC_11 (struct soc_pcmcia_socket*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_4)
{
 int VAR_5, VAR_6 = 0;
 struct pcmcia_low_level *VAR_7;
 struct skt_dev_info *VAR_8;
 struct soc_pcmcia_socket *VAR_9;
 struct clk *VAR_10;

 VAR_7 = (struct pcmcia_low_level *)VAR_4->dev.platform_data;
 if (!VAR_7) {
  VAR_6 = -VAR_1;
  goto err0;
 }

 if (FUNC_2() && VAR_7->nr > 1) {
  FUNC_3(&VAR_4->dev, "pxa320 supports only one pcmcia slot");
  VAR_6 = -VAR_0;
  goto err0;
 }

 VAR_10 = FUNC_5(&VAR_4->dev, ((void*)0));
 if (FUNC_0(VAR_10))
  return -VAR_1;

 FUNC_9(VAR_7);

 VAR_8 = FUNC_6(&VAR_4->dev, FUNC_1(VAR_7->nr),
        VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_8->nskt = VAR_7->nr;


 for (VAR_5 = 0; VAR_5 < VAR_7->nr; VAR_5++) {
  VAR_9 = &VAR_8->skt[VAR_5];

  VAR_9->nr = VAR_7->first + VAR_5;
  VAR_9->clk = VAR_10;
  FUNC_10(VAR_9, VAR_7, &VAR_4->dev);

  VAR_6 = FUNC_8(VAR_9);
  if (VAR_6)
   goto err1;
 }

 FUNC_7(&VAR_4->dev, VAR_7);
 FUNC_4(&VAR_4->dev, VAR_8);

 return 0;

err1:
 while (--VAR_5 >= 0)
  FUNC_11(&VAR_8->skt[VAR_5]);

err0:
 return VAR_6;
}
