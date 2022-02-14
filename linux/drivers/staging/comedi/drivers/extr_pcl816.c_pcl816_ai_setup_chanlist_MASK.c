
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct comedi_device*,unsigned int,unsigned int) ;
 int FUNC_3 (struct comedi_device*,unsigned int,unsigned int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_0,
         unsigned int *VAR_1,
         unsigned int VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_1[0]);
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_4 = FUNC_0(VAR_1[VAR_6]);
  VAR_5 = FUNC_1(VAR_1[VAR_6]);

  FUNC_2(VAR_0, VAR_4, VAR_5);
 }

 FUNC_4(1);

 FUNC_3(VAR_0, VAR_3, VAR_4);
}
