
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct soc_pcmcia_socket {struct max1600* driver_data; } ;
struct max1600 {int dummy; } ;
struct TYPE_4__ {int Vpp; int Vcc; } ;
typedef TYPE_1__ socket_state_t ;


 int FUNC_0 (struct max1600*,int ,int ) ;
 int FUNC_1 (struct soc_pcmcia_socket*,TYPE_1__ const*) ;

__attribute__((used)) static int
FUNC_2(struct soc_pcmcia_socket *VAR_0, const socket_state_t *VAR_1)
{
 struct max1600 *VAR_2 = VAR_0->driver_data;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3 == 0)
  VAR_3 = FUNC_0(VAR_2, VAR_1->Vcc, VAR_1->Vpp);

 return VAR_3;
}
