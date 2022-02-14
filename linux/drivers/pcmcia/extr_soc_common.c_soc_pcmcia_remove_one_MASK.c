
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_pcmcia_socket {int res_skt; int res_io; int res_mem; int res_attr; int * virt_io; int cpufreq_nb; TYPE_1__* ops; int socket; int poll_timer; } ;
struct TYPE_2__ {scalar_t__ frequency_change; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct soc_pcmcia_socket*,int *) ;
 int FUNC_6 (struct soc_pcmcia_socket*) ;

void FUNC_7(struct soc_pcmcia_socket *VAR_2)
{
 FUNC_1(&VAR_2->poll_timer);

 FUNC_3(&VAR_2->socket);







 FUNC_6(VAR_2);


 FUNC_5(VAR_2, &VAR_1);

 FUNC_2(VAR_2->virt_io);
 VAR_2->virt_io = ((void*)0);
 FUNC_4(&VAR_2->res_attr);
 FUNC_4(&VAR_2->res_mem);
 FUNC_4(&VAR_2->res_io);
 FUNC_4(&VAR_2->res_skt);
}
