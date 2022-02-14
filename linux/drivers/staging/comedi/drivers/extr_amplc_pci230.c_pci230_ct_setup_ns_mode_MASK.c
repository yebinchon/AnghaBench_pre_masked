
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct comedi_device {int pacer; scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,unsigned int,unsigned int) ;
 int FUNC_1 (int ,unsigned int,unsigned int) ;
 int FUNC_2 (int ,scalar_t__) ;
 unsigned int FUNC_3 (int ,unsigned int*,unsigned int) ;
 int FUNC_4 (unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_1, unsigned int VAR_2,
        unsigned int VAR_3, u64 VAR_4,
        unsigned int VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7;


 FUNC_0(VAR_1->pacer, VAR_2, VAR_3);

 VAR_6 = FUNC_3(VAR_4, &VAR_7, VAR_5);

 FUNC_2(FUNC_4(VAR_2, VAR_6), VAR_1->iobase + VAR_0);

 if (VAR_7 >= 65536)
  VAR_7 = 0;

 FUNC_1(VAR_1->pacer, VAR_2, VAR_7);
}
