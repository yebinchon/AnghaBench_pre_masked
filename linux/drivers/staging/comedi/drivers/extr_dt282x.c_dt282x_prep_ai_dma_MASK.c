
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dt282x_private {int ntrig; int dma_dir; struct comedi_isadma* dma; } ;
struct comedi_isadma_desc {int maxsize; int size; } ;
struct comedi_isadma {struct comedi_isadma_desc* desc; } ;
struct comedi_device {struct dt282x_private* private; } ;


 int FUNC_0 (struct comedi_isadma_desc*) ;
 int FUNC_1 (struct comedi_isadma_desc*,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0, int VAR_1, int VAR_2)
{
 struct dt282x_private *VAR_3 = VAR_0->private;
 struct comedi_isadma *VAR_4 = VAR_3->dma;
 struct comedi_isadma_desc *VAR_5 = &VAR_4->desc[VAR_1];

 if (!VAR_3->ntrig)
  return 0;

 if (VAR_2 == 0)
  VAR_2 = VAR_5->maxsize;
 if (VAR_2 > VAR_3->ntrig * 2)
  VAR_2 = VAR_3->ntrig * 2;
 VAR_3->ntrig -= VAR_2 / 2;

 VAR_5->size = VAR_2;
 FUNC_1(VAR_5, VAR_3->dma_dir);

 FUNC_0(VAR_5);

 return VAR_2;
}
