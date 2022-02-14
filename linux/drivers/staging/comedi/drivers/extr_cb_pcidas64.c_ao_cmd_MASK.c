
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcidas64_private {int ao_dma_desc_bus_addr; scalar_t__ ao_dma_index; scalar_t__ main_iobase; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct pcidas64_private* private; } ;
struct comedi_cmd {int dummy; } ;
struct TYPE_2__ {int inttrig; struct comedi_cmd cmd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*,int ,int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_4 (struct comedi_device*,struct comedi_cmd*) ;
 int FUNC_5 (struct comedi_device*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct comedi_device *VAR_5, struct comedi_subdevice *VAR_6)
{
 struct pcidas64_private *VAR_7 = VAR_5->private;
 struct comedi_cmd *VAR_8 = &VAR_6->async->cmd;

 if (FUNC_0(VAR_5)) {
  FUNC_5(VAR_5);
  return -VAR_1;
 }

 FUNC_6(0x0, VAR_7->main_iobase + VAR_0);

 VAR_7->ao_dma_index = 0;

 FUNC_4(VAR_5, VAR_8);
 FUNC_3(VAR_5, VAR_8);
 FUNC_1(VAR_5, 0, VAR_7->ao_dma_desc_bus_addr |
      VAR_2 | VAR_3);

 FUNC_2(VAR_5, VAR_8);
 VAR_6->async->inttrig = VAR_4;

 return 0;
}
