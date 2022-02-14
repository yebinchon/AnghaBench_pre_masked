
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ iobase; } ;
typedef enum pci9111_ISC1_sources { ____Placeholder_pci9111_ISC1_sources } pci9111_ISC1_sources ;
typedef enum pci9111_ISC0_sources { ____Placeholder_pci9111_ISC0_sources } pci9111_ISC0_sources ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_6,
      enum pci9111_ISC0_sources VAR_7,
      enum pci9111_ISC1_sources VAR_8)
{
 int VAR_9;


 VAR_9 = FUNC_0(VAR_6->iobase + VAR_0);

 VAR_9 >>= 4;

 VAR_9 &= 0xc0;


 if (VAR_7 == VAR_5)
  VAR_9 |= VAR_1;

 if (VAR_8 == VAR_4)
  VAR_9 |= VAR_2;

 FUNC_1(VAR_9, VAR_6->iobase + VAR_3);
}
