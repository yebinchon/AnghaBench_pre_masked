
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_660x_private {int * dma_cfg; } ;
struct comedi_device {struct ni_660x_private* private; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct comedi_device*,unsigned int,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_4,
       unsigned int VAR_5)
{
 struct ni_660x_private *VAR_6 = VAR_4->private;
 unsigned int VAR_7;
 unsigned int VAR_8;





 FUNC_2(VAR_4, 0, 0, VAR_3);

 for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7) {

  VAR_6->dma_cfg[VAR_7] = 0;
  for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8)
   VAR_6->dma_cfg[VAR_7] |= FUNC_0(VAR_8);
  FUNC_2(VAR_4, VAR_7, VAR_6->dma_cfg[VAR_7],
         VAR_0);


  for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8)
   FUNC_2(VAR_4, VAR_7, 0, FUNC_1(VAR_8));
 }
}
