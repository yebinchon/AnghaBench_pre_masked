
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {TYPE_1__** resource; int config_flags; } ;
struct das08_private_struct {int dummy; } ;
struct comedi_device {int * board_ptr; } ;
struct TYPE_2__ {unsigned long start; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct das08_private_struct* FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,int *) ;
 struct pcmcia_device* FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*,unsigned long) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_3,
    unsigned long VAR_4)
{
 struct pcmcia_device *VAR_5 = FUNC_2(VAR_3);
 struct das08_private_struct *VAR_6;
 unsigned long VAR_7;
 int VAR_8;


 VAR_3->board_ptr = &VAR_2[0];

 VAR_5->config_flags |= VAR_0;
 VAR_8 = FUNC_1(VAR_3, ((void*)0));
 if (VAR_8)
  return VAR_8;
 VAR_7 = VAR_5->resource[0]->start;

 VAR_6 = FUNC_0(VAR_3, sizeof(*VAR_6));
 if (!VAR_6)
  return -VAR_1;

 return FUNC_3(VAR_3, VAR_7);
}
