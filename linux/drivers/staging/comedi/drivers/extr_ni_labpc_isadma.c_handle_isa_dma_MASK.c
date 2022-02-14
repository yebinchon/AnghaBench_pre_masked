
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct labpc_private {int (* write_byte ) (struct comedi_device*,int,int ) ;TYPE_1__* dma; } ;
struct comedi_isadma_desc {scalar_t__ size; } ;
struct comedi_device {struct labpc_private* private; } ;
struct TYPE_2__ {struct comedi_isadma_desc* desc; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_isadma_desc*) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_1)
{
 struct labpc_private *VAR_2 = VAR_1->private;
 struct comedi_isadma_desc *VAR_3 = &VAR_2->dma->desc[0];

 FUNC_1(VAR_1);

 if (VAR_3->size)
  FUNC_0(VAR_3);


 VAR_2->write_byte(VAR_1, 0x1, VAR_0);
}
