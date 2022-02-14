
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_insn {int n; unsigned int subdev; int chanspec; int insn; } ;
struct comedi_device {int dummy; } ;
typedef int insn ;


 int FUNC_0 (unsigned int,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct comedi_device*,struct comedi_insn*,unsigned int*) ;
 int FUNC_2 (struct comedi_insn*,int ,int) ;

int FUNC_3(struct comedi_device *VAR_1, unsigned int VAR_2,
        unsigned int VAR_3, unsigned int VAR_4)
{
 struct comedi_insn VAR_5;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.insn = VAR_0;
 VAR_5.n = 1;
 VAR_5.subdev = VAR_2;
 VAR_5.chanspec = FUNC_0(VAR_3, 0, 0);

 return FUNC_1(VAR_1, &VAR_5, &VAR_4);
}
