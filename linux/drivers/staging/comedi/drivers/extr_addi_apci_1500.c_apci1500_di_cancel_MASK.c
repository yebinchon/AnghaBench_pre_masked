
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_4,
         struct comedi_subdevice *VAR_5)
{

 FUNC_2(VAR_4, 0x00, VAR_1);


 FUNC_1(VAR_4, 0);


 FUNC_0(VAR_4, VAR_2);
 FUNC_0(VAR_4, VAR_3);


 FUNC_2(VAR_4, VAR_0, VAR_2);
 FUNC_2(VAR_4, VAR_0, VAR_3);


 FUNC_1(VAR_4, 1);

 return 0;
}
