
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_isadma_desc {int n_desc; scalar_t__ chan2; scalar_t__ chan; struct comedi_isadma_desc* desc; int hw_addr; scalar_t__ virt_addr; int maxsize; int dev; } ;
struct comedi_isadma {int n_desc; scalar_t__ chan2; scalar_t__ chan; struct comedi_isadma* desc; int hw_addr; scalar_t__ virt_addr; int maxsize; int dev; } ;


 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct comedi_isadma_desc*) ;

void FUNC_3(struct comedi_isadma *VAR_0)
{
 struct comedi_isadma_desc *VAR_1;
 int VAR_2;

 if (!VAR_0)
  return;

 if (VAR_0->desc) {
  for (VAR_2 = 0; VAR_2 < VAR_0->n_desc; VAR_2++) {
   VAR_1 = &VAR_0->desc[VAR_2];
   if (VAR_1->virt_addr)
    FUNC_0(VAR_0->dev, VAR_1->maxsize,
        VAR_1->virt_addr,
        VAR_1->hw_addr);
  }
  FUNC_2(VAR_0->desc);
 }
 if (VAR_0->chan2 && VAR_0->chan2 != VAR_0->chan)
  FUNC_1(VAR_0->chan2);
 if (VAR_0->chan)
  FUNC_1(VAR_0->chan);
 FUNC_2(VAR_0);
}
