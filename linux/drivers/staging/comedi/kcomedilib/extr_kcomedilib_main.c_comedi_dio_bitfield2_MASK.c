
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_insn {unsigned int chanspec; int n; unsigned int subdev; int insn; } ;
struct comedi_device {int dummy; } ;
typedef int insn ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct comedi_device*,struct comedi_insn*,unsigned int*) ;
 unsigned int FUNC_2 (struct comedi_device*,unsigned int) ;
 int FUNC_3 (struct comedi_insn*,int ,int) ;

int FUNC_4(struct comedi_device *VAR_2, unsigned int VAR_3,
    unsigned int VAR_4, unsigned int *VAR_5,
    unsigned int VAR_6)
{
 struct comedi_insn VAR_7;
 unsigned int VAR_8[2];
 unsigned int VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 VAR_6 = FUNC_0(VAR_6);
 VAR_9 = FUNC_2(VAR_2, VAR_3);
 if (VAR_6 >= VAR_9)
  return -VAR_0;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.insn = VAR_1;
 VAR_7.chanspec = VAR_6;
 VAR_7.n = 2;
 VAR_7.subdev = VAR_3;

 VAR_8[0] = VAR_4;
 VAR_8[1] = *VAR_5;





 if (VAR_9 <= 32) {
  VAR_10 = VAR_6;
  if (VAR_10) {
   VAR_7.chanspec = 0;
   VAR_8[0] <<= VAR_10;
   VAR_8[1] <<= VAR_10;
  }
 } else {
  VAR_10 = 0;
 }

 VAR_11 = FUNC_1(VAR_2, &VAR_7, VAR_8);
 *VAR_5 = VAR_8[1] >> VAR_10;
 return VAR_11;
}
