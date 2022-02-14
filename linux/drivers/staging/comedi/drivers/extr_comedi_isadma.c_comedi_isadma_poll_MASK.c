
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_isadma_desc {unsigned int size; int chan; } ;
struct comedi_isadma {size_t cur_dma; struct comedi_isadma_desc* desc; } ;


 unsigned long FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (unsigned long) ;

unsigned int FUNC_6(struct comedi_isadma *VAR_1)
{
 struct comedi_isadma_desc *VAR_2 = &VAR_1->desc[VAR_1->cur_dma];
 unsigned long VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;

 VAR_3 = FUNC_0();
 FUNC_1(VAR_2->chan);
 if (!VAR_0)
  FUNC_2(VAR_2->chan);
 VAR_4 = FUNC_4(VAR_2->chan);





 VAR_5 = FUNC_4(VAR_2->chan);
 if (!VAR_0)
  FUNC_3(VAR_2->chan);
 FUNC_5(VAR_3);

 if (VAR_4 < VAR_5)
  VAR_4 = VAR_5;
 if (VAR_4 >= VAR_2->size || VAR_4 == 0)
  return 0;
 return VAR_2->size - VAR_4;
}
