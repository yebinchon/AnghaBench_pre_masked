
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct comedi_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct comedi_device*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_3,
       unsigned int VAR_4, u16 VAR_5)
{
 unsigned int VAR_6 = VAR_2;
 unsigned int VAR_7;

 if (VAR_4 < 3) {
  VAR_6 |= VAR_0;
  VAR_7 = FUNC_1(VAR_5);
 } else {
  VAR_6 |= VAR_1;
  VAR_7 = FUNC_2(VAR_5);
 }
 FUNC_3(VAR_3, FUNC_0(VAR_4), ~VAR_6, VAR_7);
}
