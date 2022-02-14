
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer_dev {unsigned int interface; } ;


 int FUNC_0 (struct printer_dev*,char*,unsigned int) ;
 int FUNC_1 (struct printer_dev*) ;
 int FUNC_2 (struct printer_dev*) ;

__attribute__((used)) static int FUNC_3(struct printer_dev *VAR_0, unsigned VAR_1)
{
 int VAR_2 = 0;


 FUNC_1(VAR_0);

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  FUNC_1(VAR_0);
 else
  VAR_0->interface = VAR_1;

 if (!VAR_2)
  FUNC_0(VAR_0, "Using interface %x\n", VAR_1);

 return VAR_2;
}
