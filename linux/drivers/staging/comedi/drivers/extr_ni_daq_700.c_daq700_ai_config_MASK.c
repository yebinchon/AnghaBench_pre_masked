
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {unsigned long iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_7,
        struct comedi_subdevice *VAR_8)
{
 unsigned long VAR_9 = VAR_7->iobase;

 FUNC_1(0x80, VAR_9 + VAR_2);
 FUNC_1(0x00, VAR_9 + VAR_3);
 FUNC_1(0x00, VAR_9 + VAR_4);
 FUNC_1(0x32, VAR_9 + VAR_5);
 FUNC_1(0x00, VAR_9 + VAR_6);
 FUNC_1(0x00, VAR_9 + VAR_0);
 FUNC_0(VAR_9 + VAR_1);
}
