
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int FUNC_6 (struct comedi_device*,int ) ;
 int FUNC_7 (struct comedi_device*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_3 / 16;
 unsigned int VAR_5 = 1 << (VAR_3 - (16 * VAR_4));
 unsigned int VAR_6;


 VAR_6 = FUNC_6(VAR_2, FUNC_1(VAR_4));
 FUNC_7(VAR_2, FUNC_4(VAR_4), VAR_5 | VAR_6);


 VAR_6 = FUNC_6(VAR_2, FUNC_2(VAR_4));
 FUNC_7(VAR_2, FUNC_5(VAR_4), VAR_5 | VAR_6);


 FUNC_7(VAR_2, VAR_0, VAR_1);


 VAR_6 = FUNC_6(VAR_2, FUNC_0(VAR_4));
 FUNC_7(VAR_2, FUNC_3(VAR_4), VAR_5 | VAR_6);

 return 0;
}
