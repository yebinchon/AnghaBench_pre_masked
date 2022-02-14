
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_pcmcia_socket {TYPE_1__* stat; } ;
struct arcom_pcmcia_pdata {int pwr_gpio; int rdy_gpio; int cd_gpio; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {char* name; int gpio; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 struct arcom_pcmcia_pdata* FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct soc_pcmcia_socket *VAR_3)
{
 struct arcom_pcmcia_pdata *VAR_4 = FUNC_6();
 unsigned long VAR_5;

 VAR_3->stat[VAR_0].gpio = VAR_4->cd_gpio;
 VAR_3->stat[VAR_0].name = "PCMCIA_CD";
 VAR_3->stat[VAR_1].gpio = VAR_4->rdy_gpio;
 VAR_3->stat[VAR_1].name = "CF ready";

 if (FUNC_3(VAR_4->pwr_gpio, "CF power"))
  goto err_request_pwr;

 FUNC_5(VAR_5);

 if (FUNC_1(VAR_4->pwr_gpio, 0)) {
  FUNC_4(VAR_5);
  goto err_dir;
 }

 FUNC_4(VAR_5);

 return 0;

err_dir:
 FUNC_2(VAR_4->pwr_gpio);
err_request_pwr:
 FUNC_0(&VAR_2->dev, "Failed to setup PCMCIA GPIOs\n");
 return -1;
}
