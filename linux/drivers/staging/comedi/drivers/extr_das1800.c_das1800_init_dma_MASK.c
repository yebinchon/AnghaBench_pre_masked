
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das1800_private {scalar_t__ dma_bits; int dma; } ;
struct comedi_device {struct das1800_private* private; } ;
struct comedi_devconfig {unsigned int* options; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct comedi_device*,int,unsigned int,unsigned int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_8,
        struct comedi_devconfig *VAR_9)
{
 struct das1800_private *VAR_10 = VAR_8->private;
 unsigned int *VAR_11;







 VAR_11 = &VAR_9->options[2];

 switch ((VAR_11[0] & 0x7) | (VAR_11[1] << 4)) {
 case 0x5:
  VAR_10->dma_bits = VAR_2;
  break;
 case 0x6:
  VAR_10->dma_bits = VAR_4;
  break;
 case 0x7:
  VAR_10->dma_bits = VAR_6;
  break;
 case 0x65:
  VAR_10->dma_bits = VAR_3;
  break;
 case 0x76:
  VAR_10->dma_bits = VAR_5;
  break;
 case 0x57:
  VAR_10->dma_bits = VAR_7;
  break;
 default:
  return;
 }


 VAR_10->dma = FUNC_0(VAR_8, VAR_11[1] ? 2 : 1,
        VAR_11[0], VAR_11[1],
        VAR_1, VAR_0);
 if (!VAR_10->dma)
  VAR_10->dma_bits = 0;
}
