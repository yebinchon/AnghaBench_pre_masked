
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {scalar_t__ rev; } ;
struct adapter {int pdev; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct adapter*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct adapter*,int ,int) ;

int FUNC_6(struct adapter *VAR_4)
{
 int VAR_5, VAR_6 =
     VAR_4->params.rev < VAR_3 && FUNC_0(VAR_4);
 uint16_t VAR_7 = 0;

 if (VAR_6)
  FUNC_4(VAR_4->pdev);
 FUNC_5(VAR_4, VAR_0, VAR_1 | VAR_2);





 for (VAR_5 = 0; VAR_5 < 10; VAR_5++) {
  FUNC_1(50);
  FUNC_2(VAR_4->pdev, 0x00, &VAR_7);
  if (VAR_7 == 0x1425)
   break;
 }

 if (VAR_7 != 0x1425)
  return -1;

 if (VAR_6)
  FUNC_3(VAR_4->pdev);
 return 0;
}
