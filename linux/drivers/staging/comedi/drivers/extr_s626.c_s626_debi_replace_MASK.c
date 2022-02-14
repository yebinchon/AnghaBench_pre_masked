
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ mmio; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_4, unsigned int VAR_5,
         unsigned int VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8;

 VAR_5 &= 0xffff;
 FUNC_2(VAR_0 | VAR_5, VAR_4->mmio + VAR_3);
 FUNC_1(VAR_4);

 FUNC_2(VAR_1 | VAR_5, VAR_4->mmio + VAR_3);
 VAR_8 = FUNC_0(VAR_4->mmio + VAR_2);
 VAR_8 &= VAR_6;
 VAR_8 |= VAR_7;
 FUNC_2(VAR_8 & 0xffff, VAR_4->mmio + VAR_2);
 FUNC_1(VAR_4);
}
