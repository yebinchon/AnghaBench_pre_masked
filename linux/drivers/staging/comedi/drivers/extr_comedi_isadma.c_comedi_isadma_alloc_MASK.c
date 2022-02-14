
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_isadma_desc {unsigned int chan; unsigned int maxsize; int virt_addr; int hw_addr; } ;
struct comedi_isadma {int n_desc; unsigned int chan; unsigned int chan2; scalar_t__ dev; struct comedi_isadma_desc* desc; } ;
struct comedi_device {int board_name; scalar_t__ class_dev; scalar_t__ hw_dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct comedi_isadma*) ;
 int FUNC_2 (struct comedi_isadma_desc*,char) ;
 int FUNC_3 (scalar_t__,unsigned int,int *,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 struct comedi_isadma_desc* FUNC_5 (int,int,int ) ;
 struct comedi_isadma* FUNC_6 (int,int ) ;
 scalar_t__ FUNC_7 (unsigned int,int ) ;

struct comedi_isadma *FUNC_8(struct comedi_device *VAR_1,
       int VAR_2, unsigned int VAR_3,
       unsigned int VAR_4,
       unsigned int VAR_5, char VAR_6)
{
 struct comedi_isadma *VAR_7 = ((void*)0);
 struct comedi_isadma_desc *VAR_8;
 unsigned int VAR_9[2];
 int VAR_10;

 if (VAR_2 < 1 || VAR_2 > 2)
  goto no_dma;

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  goto no_dma;

 VAR_8 = FUNC_5(VAR_2, sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  goto no_dma;
 VAR_7->desc = VAR_8;
 VAR_7->n_desc = VAR_2;
 if (VAR_1->hw_dev) {
  VAR_7->dev = VAR_1->hw_dev;
 } else {

  if (!VAR_1->class_dev)
   goto no_dma;

  if (FUNC_4(VAR_1->class_dev,
       FUNC_0(24))) {
   goto no_dma;
  }
  VAR_7->dev = VAR_1->class_dev;
 }

 VAR_9[0] = VAR_3;
 if (VAR_4 == 0 || VAR_4 == VAR_3)
  VAR_9[1] = VAR_3;
 else
  VAR_9[1] = VAR_4;

 if (FUNC_7(VAR_9[0], VAR_1->board_name))
  goto no_dma;
 VAR_7->chan = VAR_9[0];
 if (VAR_9[1] != VAR_9[0]) {
  if (FUNC_7(VAR_9[1], VAR_1->board_name))
   goto no_dma;
 }
 VAR_7->chan2 = VAR_9[1];

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_8 = &VAR_7->desc[VAR_10];
  VAR_8->chan = VAR_9[VAR_10];
  VAR_8->maxsize = VAR_5;
  VAR_8->virt_addr = FUNC_3(VAR_7->dev, VAR_8->maxsize,
           &VAR_8->hw_addr,
           VAR_0);
  if (!VAR_8->virt_addr)
   goto no_dma;
  FUNC_2(VAR_8, VAR_6);
 }

 return VAR_7;

no_dma:
 FUNC_1(VAR_7);
 return ((void*)0);
}
