
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (struct comedi_device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3)
{
 unsigned int VAR_4;


 FUNC_1(VAR_3, VAR_1, VAR_2);


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_1(VAR_3, FUNC_0(VAR_4), 0xffff);

 return 0;
}
