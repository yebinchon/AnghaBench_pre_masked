
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int read_subdev; scalar_t__ private; } ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (struct comedi_device*) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_0)
{
 if (VAR_0->private) {
  FUNC_1(VAR_0, VAR_0->read_subdev);
  FUNC_3(VAR_0);
 }
 FUNC_2(VAR_0);
 FUNC_0(VAR_0);
}
