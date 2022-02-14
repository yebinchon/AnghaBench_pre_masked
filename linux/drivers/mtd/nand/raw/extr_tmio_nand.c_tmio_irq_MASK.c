
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_nand {int comp; scalar_t__ fcr; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct tmio_nand *VAR_4 = VAR_3;


 FUNC_1(0x00, VAR_4->fcr + VAR_0);
 FUNC_0(&VAR_4->comp);

 return VAR_1;
}
