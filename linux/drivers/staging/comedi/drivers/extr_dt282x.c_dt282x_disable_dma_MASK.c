
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dt282x_private {struct comedi_isadma* dma; } ;
struct comedi_isadma_desc {int chan; } ;
struct comedi_isadma {struct comedi_isadma_desc* desc; } ;
struct comedi_device {struct dt282x_private* private; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_0)
{
 struct dt282x_private *VAR_1 = VAR_0->private;
 struct comedi_isadma *VAR_2 = VAR_1->dma;
 struct comedi_isadma_desc *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  VAR_3 = &VAR_2->desc[VAR_4];
  FUNC_0(VAR_3->chan);
 }
}
