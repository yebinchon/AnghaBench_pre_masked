
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
 int FUNC_2 (struct comedi_device*,int ) ;
 int FUNC_3 (struct comedi_device*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_3,
        unsigned int VAR_4)
{
 if (VAR_4 < 3) {
  u16 VAR_5;

  VAR_5 = FUNC_2(VAR_3, FUNC_0(VAR_4));


  FUNC_3(VAR_3, FUNC_0(VAR_4),
    (VAR_5 ^ VAR_0));
  FUNC_3(VAR_3, FUNC_0(VAR_4), VAR_5);
 } else {
  u16 VAR_6;

  VAR_6 = FUNC_2(VAR_3, FUNC_1(VAR_4));
  VAR_6 &= ~VAR_2;


  FUNC_3(VAR_3, FUNC_1(VAR_4),
    (VAR_6 ^ VAR_1));
  FUNC_3(VAR_3, FUNC_1(VAR_4), VAR_6);
 }
}
