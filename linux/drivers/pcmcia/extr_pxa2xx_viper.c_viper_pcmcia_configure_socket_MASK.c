
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct soc_pcmcia_socket {int dummy; } ;
struct arcom_pcmcia_pdata {int pwr_gpio; int (* reset ) (int) ;} ;
struct TYPE_4__ {int flags; int Vcc; } ;
typedef TYPE_1__ socket_state_t ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 struct arcom_pcmcia_pdata* FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct soc_pcmcia_socket *VAR_2,
      const socket_state_t *VAR_3)
{
 struct arcom_pcmcia_pdata *VAR_4 = FUNC_3();


 VAR_4->reset(VAR_3->flags & VAR_0);


 switch (VAR_3->Vcc) {
 case 0:
  FUNC_1(VAR_4->pwr_gpio, 0);
  break;
 case 33:
  FUNC_1(VAR_4->pwr_gpio, 1);
  break;
 default:
  FUNC_0(&VAR_1->dev, "Unsupported Vcc:%d\n", VAR_3->Vcc);
  return -1;
 }

 return 0;
}
