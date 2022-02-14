
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dt9812_rmw_byte {int and_mask; int or_value; int address; } ;
struct dt9812_private {scalar_t__ device; } ;
struct comedi_device {struct dt9812_private* private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct comedi_device *VAR_3,
     struct dt9812_rmw_byte *VAR_4, int VAR_5)
{
 struct dt9812_private *VAR_6 = VAR_3->private;

 if (VAR_6->device == VAR_0) {

  VAR_4->address = VAR_2;
  VAR_4->and_mask = 0xe0;
  VAR_4->or_value = VAR_5 << 5;
 } else {

  VAR_4->address = VAR_1;
  VAR_4->and_mask = 0xff;
  VAR_4->or_value = VAR_5 & 0x07;
 }
}
