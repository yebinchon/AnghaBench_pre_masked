
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int * eeprom_buffer; struct mite* mite; } ;
struct mite {scalar_t__ mmio; int pcidev; } ;
struct comedi_device {struct ni_private* private; } ;
typedef int resource_size_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct comedi_device*,int const) ;
 int FUNC_1 (int ,int) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_4)
{
 struct ni_private *VAR_5 = VAR_4->private;
 struct mite *VAR_6 = VAR_5->mite;
 resource_size_t VAR_7;
 static const int VAR_8 = 0x400;
 static const unsigned int VAR_9 = 10;
 unsigned int VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 int VAR_13;


 VAR_7 = FUNC_1(VAR_6->pcidev, 1);

 VAR_10 = FUNC_2(VAR_6->mmio + VAR_0);
 VAR_11 = FUNC_2(VAR_6->mmio + VAR_1);
 VAR_12 = FUNC_2(VAR_6->mmio + VAR_2);
 FUNC_3(0x0, VAR_6->mmio + VAR_0);
 FUNC_3(((0x80 | VAR_9) | VAR_7),
        VAR_6->mmio + VAR_1);
 FUNC_3(0x1 | VAR_12, VAR_6->mmio + VAR_2);
 FUNC_3(0xf, VAR_6->mmio + 0x30);

 for (VAR_13 = 0; VAR_13 < VAR_3; ++VAR_13)
  VAR_5->eeprom_buffer[VAR_13] = FUNC_0(VAR_4, VAR_8 + VAR_13);

 FUNC_3(VAR_11, VAR_6->mmio + VAR_1);
 FUNC_3(VAR_10, VAR_6->mmio + VAR_0);
 FUNC_3(VAR_12, VAR_6->mmio + VAR_2);
 FUNC_3(0x0, VAR_6->mmio + 0x30);
}
