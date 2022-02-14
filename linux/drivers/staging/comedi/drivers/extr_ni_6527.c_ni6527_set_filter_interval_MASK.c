
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni6527_private {unsigned int filter_interval; } ;
struct comedi_device {scalar_t__ mmio; struct ni6527_private* private; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_2,
           unsigned int VAR_3)
{
 struct ni6527_private *VAR_4 = VAR_2->private;

 if (VAR_3 != VAR_4->filter_interval) {
  FUNC_1(VAR_3 & 0xff, VAR_2->mmio + FUNC_0(0));
  FUNC_1((VAR_3 >> 8) & 0xff,
         VAR_2->mmio + FUNC_0(1));
  FUNC_1((VAR_3 >> 16) & 0x0f,
         VAR_2->mmio + FUNC_0(2));

  FUNC_1(VAR_0, VAR_2->mmio + VAR_1);

  VAR_4->filter_interval = VAR_3;
 }
}
