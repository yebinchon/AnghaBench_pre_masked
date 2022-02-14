
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio200_subdev_8255 {scalar_t__ ofs; } ;
struct comedi_subdevice {int state; struct dio200_subdev_8255* private; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
 int FUNC_1 (struct comedi_device*,scalar_t__) ;
 int FUNC_2 (struct comedi_device*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3,
       struct comedi_subdevice *VAR_4,
       struct comedi_insn *VAR_5,
       unsigned int *VAR_6)
{
 struct dio200_subdev_8255 *VAR_7 = VAR_4->private;
 unsigned int VAR_8;
 unsigned int VAR_9;

 VAR_8 = FUNC_0(VAR_4, VAR_6);
 if (VAR_8) {
  if (VAR_8 & 0xff) {
   FUNC_2(VAR_3, VAR_7->ofs + VAR_0,
          VAR_4->state & 0xff);
  }
  if (VAR_8 & 0xff00) {
   FUNC_2(VAR_3, VAR_7->ofs + VAR_1,
          (VAR_4->state >> 8) & 0xff);
  }
  if (VAR_8 & 0xff0000) {
   FUNC_2(VAR_3, VAR_7->ofs + VAR_2,
          (VAR_4->state >> 16) & 0xff);
  }
 }

 VAR_9 = FUNC_1(VAR_3, VAR_7->ofs + VAR_0);
 VAR_9 |= FUNC_1(VAR_3, VAR_7->ofs + VAR_1) << 8;
 VAR_9 |= FUNC_1(VAR_3, VAR_7->ofs + VAR_2) << 16;

 VAR_6[1] = VAR_9;

 return VAR_5->n;
}
