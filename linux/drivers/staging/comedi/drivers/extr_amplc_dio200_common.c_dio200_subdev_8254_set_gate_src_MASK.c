
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_0,
         struct comedi_subdevice *VAR_1,
         unsigned int VAR_2,
         unsigned int VAR_3)
{
 unsigned int VAR_4 = FUNC_2(VAR_0, VAR_1);

 FUNC_3(VAR_0, FUNC_0(VAR_4 >> 3),
        FUNC_1((VAR_4 >> 2) & 1, VAR_2, VAR_3));
}
