
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cqspi_st {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct cqspi_st*) ;
 int FUNC_2 (int *,char*,int ) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct cqspi_st *VAR_3)
{
 const unsigned int VAR_4 = 3;
 unsigned int VAR_5 = 0;
 unsigned long VAR_6;

 VAR_6 = VAR_2 + FUNC_3(VAR_0);
 while (1) {





  if (FUNC_1(VAR_3))
   VAR_5++;
  else
   VAR_5 = 0;

  if (VAR_5 >= VAR_4)
   return 0;

  if (FUNC_4(VAR_2, VAR_6)) {

   FUNC_2(&VAR_3->pdev->dev,
    "QSPI is still busy after %dms timeout.\n",
    VAR_0);
   return -VAR_1;
  }

  FUNC_0();
 }
}
