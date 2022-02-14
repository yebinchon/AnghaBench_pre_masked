
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_low_level {int frequency_change; int show_timing; int set_timing; scalar_t__ get_timing; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(struct pcmcia_low_level *VAR_4)
{




 if (!VAR_4->get_timing)
  VAR_4->get_timing = VAR_0;


 VAR_4->set_timing = VAR_2;
 VAR_4->show_timing = VAR_3;



}
