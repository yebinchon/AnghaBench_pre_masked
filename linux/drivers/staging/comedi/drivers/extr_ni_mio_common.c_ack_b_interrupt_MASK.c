
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct comedi_device*,unsigned short,int ) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_15, unsigned short VAR_16)
{
 unsigned short VAR_17 = 0;

 if (VAR_16 & VAR_0)
  VAR_17 |= VAR_7;
 if (VAR_16 & VAR_1)
  VAR_17 |= VAR_8;
 if (VAR_16 & VAR_2)
  VAR_17 |= VAR_9;
 if (VAR_16 & VAR_3)
  VAR_17 |= VAR_10;
 if (VAR_16 & VAR_4)
  VAR_17 |= VAR_11;
 if (VAR_16 & VAR_5)
  VAR_17 |= VAR_12;
 if (VAR_16 & VAR_6)
  VAR_17 |= VAR_13;
 if (VAR_17)
  FUNC_0(VAR_15, VAR_17, VAR_14);
}
