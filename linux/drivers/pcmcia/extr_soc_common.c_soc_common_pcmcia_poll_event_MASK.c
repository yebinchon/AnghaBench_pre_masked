
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct soc_pcmcia_socket {int poll_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct soc_pcmcia_socket*,int,char*) ;
 struct soc_pcmcia_socket* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_2 ;
 struct soc_pcmcia_socket* VAR_3 ;
 int FUNC_3 (struct soc_pcmcia_socket*) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct soc_pcmcia_socket *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_2);
 FUNC_0(VAR_5, 4, "polling for events\n");

 FUNC_2(&VAR_5->poll_timer, VAR_1 + VAR_0);

 FUNC_3(VAR_5);
}
