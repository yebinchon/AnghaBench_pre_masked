
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1111_dev {scalar_t__ mapbase; int dev; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sa1111_dev*) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct sa1111_dev *VAR_3)
{
 unsigned int VAR_4;

 FUNC_0(&VAR_3->dev, "stopping SA-1111 OHCI USB Controller\n");




 VAR_4 = FUNC_1(VAR_3->mapbase + VAR_0);
 FUNC_3(VAR_4 | VAR_2 | VAR_1,
        VAR_3->mapbase + VAR_0);




 FUNC_2(VAR_3);
}
