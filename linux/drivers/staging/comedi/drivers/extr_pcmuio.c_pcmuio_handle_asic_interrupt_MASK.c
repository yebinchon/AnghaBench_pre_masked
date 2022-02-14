
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 unsigned long FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,unsigned int) ;
 unsigned int FUNC_3 (struct comedi_device*,int,int ,int ) ;
 int FUNC_4 (struct comedi_device*,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_2, int VAR_3)
{

 struct comedi_subdevice *VAR_4 = &VAR_2->subdevices[VAR_3 * 2];
 unsigned long VAR_5 = FUNC_1(VAR_2, VAR_3);
 unsigned int VAR_6;


 VAR_6 = FUNC_0(VAR_5 + VAR_0) & 0x07;
 if (!VAR_6)
  return 0;


 VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_1, 0);
 FUNC_4(VAR_2, 0, VAR_3, VAR_1, 0);


 FUNC_2(VAR_2, VAR_4, VAR_6);

 return 1;
}
