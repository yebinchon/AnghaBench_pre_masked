
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ mmio; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct comedi_device*) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_3);
 unsigned int VAR_5 = FUNC_2(VAR_3);
 unsigned int VAR_6 = FUNC_0(VAR_3);
 unsigned int VAR_7;
 unsigned int VAR_8;

 if (FUNC_3(VAR_2))
  return -VAR_1;


 FUNC_5(0x10000, VAR_2->mmio + 12);


 VAR_7 = FUNC_4(VAR_2->mmio + 4);
 VAR_7 &= 0xfffffef0;


 FUNC_5(VAR_7, VAR_2->mmio + 4);


 VAR_8 = (VAR_5 & 3) | ((VAR_5 >> 2) << 6) |
       ((VAR_6 == VAR_0) << 7);
 FUNC_5(VAR_8, VAR_2->mmio + 0);


 FUNC_5(VAR_7 | 0x100, VAR_2->mmio + 4);
 FUNC_5(VAR_4, VAR_2->mmio + 0);


 FUNC_5(VAR_7, VAR_2->mmio + 4);


 FUNC_5(1, VAR_2->mmio + 48);

 return 0;
}
