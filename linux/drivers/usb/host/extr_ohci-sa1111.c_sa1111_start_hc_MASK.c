
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1111_dev {scalar_t__ mapbase; int dev; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct sa1111_dev*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct sa1111_dev *VAR_5)
{
 unsigned int VAR_6 = 0;
 int VAR_7;

 FUNC_0(&VAR_5->dev, "starting SA-1111 OHCI USB Controller\n");

 if (FUNC_4() ||
     FUNC_1() ||
     FUNC_3() ||
     FUNC_2())
  VAR_6 = VAR_4 | VAR_3;





 FUNC_7(VAR_6 | VAR_2 | VAR_1,
        VAR_5->mapbase + VAR_0);





 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7 == 0) {
  FUNC_6(11);
  FUNC_7(VAR_6, VAR_5->mapbase + VAR_0);
 }

 return VAR_7;
}
