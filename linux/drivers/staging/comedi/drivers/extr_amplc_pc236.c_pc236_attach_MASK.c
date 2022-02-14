
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pc236_private {int dummy; } ;
struct comedi_device {int iobase; } ;
struct comedi_devconfig {int * options; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,int ,int ,int ) ;
 struct pc236_private* FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1, struct comedi_devconfig *VAR_2)
{
 struct pc236_private *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_1, sizeof(*VAR_3));
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_1, VAR_2->options[0], 0x4);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_1, VAR_1->iobase, VAR_2->options[1], 0);
}
