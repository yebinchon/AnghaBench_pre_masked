
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_insn {int n; unsigned int subdev; int chanspec; int insn; } ;
struct comedi_device {int dummy; } ;
typedef int insn ;


 int FUNC_0 (unsigned int,int ,int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct comedi_device*,struct comedi_insn*,unsigned int*) ;
 int FUNC_2 (struct comedi_insn*,int ,int) ;

int FUNC_3(struct comedi_device *VAR_2, unsigned int VAR_3,
     unsigned int VAR_4, unsigned int *VAR_5)
{
 struct comedi_insn VAR_6;
 unsigned int VAR_7[2];
 int VAR_8;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.insn = VAR_0;
 VAR_6.n = 2;
 VAR_6.subdev = VAR_3;
 VAR_6.chanspec = FUNC_0(VAR_4, 0, 0);
 VAR_7[0] = VAR_1;
 VAR_7[1] = 0;
 VAR_8 = FUNC_1(VAR_2, &VAR_6, VAR_7);
 if (VAR_8 >= 0)
  *VAR_5 = VAR_7[1];
 return VAR_8;
}
