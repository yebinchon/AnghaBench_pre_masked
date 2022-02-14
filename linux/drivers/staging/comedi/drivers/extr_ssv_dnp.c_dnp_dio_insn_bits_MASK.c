
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_5,
        struct comedi_subdevice *VAR_6,
        struct comedi_insn *VAR_7,
        unsigned int *VAR_8)
{
 unsigned int VAR_9;
 unsigned int VAR_10;







 VAR_9 = FUNC_0(VAR_6, VAR_8);
 if (VAR_9) {
  FUNC_2(VAR_2, VAR_1);
  FUNC_2(VAR_6->state & 0xff, VAR_0);

  FUNC_2(VAR_3, VAR_1);
  FUNC_2((VAR_6->state >> 8) & 0xff, VAR_0);

  FUNC_2(VAR_4, VAR_1);
  VAR_10 = FUNC_1(VAR_0) & 0x0f;
  FUNC_2(((VAR_6->state >> 12) & 0xf0) | VAR_10, VAR_0);
 }

 FUNC_2(VAR_2, VAR_1);
 VAR_10 = FUNC_1(VAR_0);
 FUNC_2(VAR_3, VAR_1);
 VAR_10 |= (FUNC_1(VAR_0) << 8);
 FUNC_2(VAR_4, VAR_1);
 VAR_10 |= ((FUNC_1(VAR_0) & 0xf0) << 12);

 VAR_8[1] = VAR_10;

 return VAR_7->n;
}
