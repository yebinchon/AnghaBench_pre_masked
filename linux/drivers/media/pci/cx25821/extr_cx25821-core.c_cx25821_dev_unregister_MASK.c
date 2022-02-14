
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx25821_dev {int * i2c_bus; int pci; int base_io_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct cx25821_dev*) ;
 int FUNC_2 (struct cx25821_dev*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(struct cx25821_dev *VAR_2)
{
 int VAR_3;

 if (!VAR_2->base_io_addr)
  return;

 FUNC_4(VAR_2->base_io_addr, FUNC_3(VAR_2->pci, 0));

 for (VAR_3 = 0; VAR_3 < VAR_0 - 1; VAR_3++) {
  if (VAR_3 == VAR_1)
   continue;






  FUNC_2(VAR_2, VAR_3);
 }

 FUNC_0(&VAR_2->i2c_bus[0]);
 FUNC_1(VAR_2);
}
