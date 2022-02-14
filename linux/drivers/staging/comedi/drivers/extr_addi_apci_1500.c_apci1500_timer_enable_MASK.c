
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct comedi_device*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_4,
      unsigned int VAR_5, bool VAR_6)
{
 unsigned int VAR_7;
 unsigned int VAR_8;

 if (VAR_5 == 0)
  VAR_7 = VAR_0;
 else if (VAR_5 == 1)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_2;

 VAR_8 = FUNC_1(VAR_4, VAR_3);
 if (VAR_6) {
  VAR_8 |= VAR_7;
 } else {
  VAR_8 &= ~VAR_7;
  FUNC_2(VAR_4, 0x00, FUNC_0(VAR_5));
 }
 FUNC_2(VAR_4, VAR_8, VAR_3);
}
