
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (struct comedi_device*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_6, int VAR_7)
{
 unsigned int VAR_8 = VAR_0;
 int VAR_9;
 int VAR_10;

 VAR_10 = 0x0300 | ((VAR_7 & 0x100) << 3) | (VAR_7 & 0xff);
 FUNC_1(VAR_6, VAR_8, VAR_1);
 for (VAR_9 = 0x8000; VAR_9; VAR_9 >>= 1) {
  if (VAR_9 & VAR_10)
   VAR_8 |= VAR_3;
  else
   VAR_8 &= ~VAR_3;

  FUNC_1(VAR_6, VAR_8, VAR_1);
  FUNC_1(VAR_6, VAR_2 | VAR_8, VAR_1);
 }
 VAR_8 = VAR_0;
 VAR_10 = 0;
 for (VAR_9 = 0x80; VAR_9; VAR_9 >>= 1) {
  FUNC_1(VAR_6, VAR_8, VAR_1);
  FUNC_1(VAR_6, VAR_2 | VAR_8, VAR_1);
  if (FUNC_0(VAR_6, VAR_5) & VAR_4)
   VAR_10 |= VAR_9;
 }
 FUNC_1(VAR_6, 0, VAR_1);

 return VAR_10;
}
