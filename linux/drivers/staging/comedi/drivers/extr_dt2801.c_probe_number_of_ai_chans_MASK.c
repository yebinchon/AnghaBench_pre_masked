
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,int*) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*,int ) ;
 int FUNC_3 (struct comedi_device*,int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4;

 for (VAR_2 = 0; VAR_2 < 16; VAR_2++) {
  FUNC_2(VAR_1, VAR_0);
  FUNC_3(VAR_1, 0);
  FUNC_3(VAR_1, VAR_2);
  VAR_3 = FUNC_0(VAR_1, &VAR_4);

  if (VAR_3)
   break;
 }

 FUNC_1(VAR_1);
 FUNC_1(VAR_1);

 return VAR_2;
}
