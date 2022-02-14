
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_3 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_4 (struct comedi_device*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_3,
    struct comedi_subdevice *VAR_4,
    unsigned int VAR_5,
    unsigned int VAR_6)
{
 unsigned int VAR_7 = FUNC_1(VAR_5);
 unsigned int VAR_8 = FUNC_0(VAR_5);

 VAR_6 |= FUNC_2(VAR_7);
 if (VAR_8 == VAR_0)
  VAR_6 |= VAR_1;
 if (FUNC_3(VAR_4, VAR_7))
  VAR_6 |= VAR_2;

 FUNC_4(VAR_3, VAR_6);
}
