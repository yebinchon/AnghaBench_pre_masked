
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
 int VAR_10 ;
 int FUNC_0 (struct comedi_device*,unsigned short,int ) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_11, unsigned short VAR_12)
{
 unsigned short VAR_13 = 0;

 if (VAR_12 & VAR_1)
  VAR_13 |= VAR_6;
 if (VAR_12 & VAR_3)
  VAR_13 |= VAR_8;
 if (VAR_12 & VAR_2)
  VAR_13 |= VAR_7;
 if (VAR_12 & VAR_4)
  VAR_13 |= VAR_9;
 if (VAR_12 & VAR_0)
  VAR_13 |= VAR_5;
 if (VAR_13)
  FUNC_0(VAR_11, VAR_13, VAR_10);
}
