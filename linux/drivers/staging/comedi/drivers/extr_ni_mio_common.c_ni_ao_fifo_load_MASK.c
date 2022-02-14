
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int is_6711; scalar_t__ is_6xxx; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct ni_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned short*,int) ;
 int FUNC_1 (struct comedi_device*,unsigned int,int ) ;
 int FUNC_2 (struct comedi_device*,unsigned short,int ) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_2,
       struct comedi_subdevice *VAR_3, int VAR_4)
{
 struct ni_private *VAR_5 = VAR_2->private;
 int VAR_6;
 unsigned short VAR_7;
 unsigned int VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  FUNC_0(VAR_3, &VAR_7, 1);

  if (VAR_5->is_6xxx) {
   VAR_8 = VAR_7 & 0xffff;

   if (!VAR_5->is_6711) {
    FUNC_0(VAR_3, &VAR_7, 1);
    VAR_6++;
    VAR_8 |= (VAR_7 << 16) & 0xffff0000;
   }
   FUNC_1(VAR_2, VAR_8, VAR_0);
  } else {
   FUNC_2(VAR_2, VAR_7, VAR_1);
  }
 }
}
