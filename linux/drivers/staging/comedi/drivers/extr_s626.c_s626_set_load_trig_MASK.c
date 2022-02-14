
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct comedi_device*,int,int,int) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_3,
          unsigned int VAR_4, u16 VAR_5)
{
 u16 VAR_6;
 u16 VAR_7;
 u16 VAR_8;

 if (VAR_4 < 3) {
  VAR_6 = FUNC_0(VAR_4);
  VAR_7 = VAR_0;
  VAR_8 = FUNC_2(VAR_5);
 } else {
  VAR_6 = FUNC_1(VAR_4);
  VAR_7 = VAR_2 | VAR_1;
  VAR_8 = FUNC_3(VAR_5);
 }
 FUNC_4(VAR_3, VAR_6, ~VAR_7, VAR_8);
}
