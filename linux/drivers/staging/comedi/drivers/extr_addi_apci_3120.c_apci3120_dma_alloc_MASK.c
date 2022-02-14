
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int hw_dev; struct apci3120_private* private; } ;
struct apci3120_private {int use_dma; int use_double_buffer; struct apci3120_dmabuf* dmabuf; } ;
struct apci3120_dmabuf {int size; scalar_t__ virt; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_2)
{
 struct apci3120_private *VAR_3 = VAR_2->private;
 struct apci3120_dmabuf *VAR_4;
 int VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  VAR_4 = &VAR_3->dmabuf[VAR_6];
  for (VAR_5 = 2; VAR_5 >= 0; VAR_5--) {
   VAR_4->virt = FUNC_0(VAR_2->hw_dev,
         VAR_1 << VAR_5,
         &VAR_4->hw,
         VAR_0);
   if (VAR_4->virt)
    break;
  }
  if (!VAR_4->virt)
   break;
  VAR_4->size = VAR_1 << VAR_5;

  if (VAR_6 == 0)
   VAR_3->use_dma = 1;
  if (VAR_6 == 1)
   VAR_3->use_double_buffer = 1;
 }
}
