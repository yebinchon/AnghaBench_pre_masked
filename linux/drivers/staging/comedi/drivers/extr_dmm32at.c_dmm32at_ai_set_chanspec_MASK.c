
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int n_chan; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int* VAR_6 ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_7,
        struct comedi_subdevice *VAR_8,
        unsigned int VAR_9, int VAR_10)
{
 unsigned int VAR_11 = FUNC_0(VAR_9);
 unsigned int VAR_12 = FUNC_1(VAR_9);
 unsigned int VAR_13 = (VAR_11 + VAR_10 - 1) % VAR_8->n_chan;

 FUNC_2(VAR_3, VAR_7->iobase + VAR_4);

 if (VAR_10 > 1)
  FUNC_2(VAR_5,
       VAR_7->iobase + VAR_4);

 FUNC_2(VAR_11, VAR_7->iobase + VAR_2);
 FUNC_2(VAR_13, VAR_7->iobase + VAR_1);
 FUNC_2(VAR_6[VAR_12], VAR_7->iobase + VAR_0);
}
