
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct netxen_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netxen_adapter*,int ) ;
 int FUNC_1 (struct netxen_adapter*,int ,int const) ;



 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int) ;

int FUNC_4(struct netxen_adapter *VAR_2, int VAR_3)
{
 u32 VAR_4 = 0;
 int VAR_5 = 60;

 if (VAR_3)
  return 0;

 do {
  VAR_4 = FUNC_0(VAR_2, VAR_0);
  switch (VAR_4) {
  case 129:
  case 130:
   return 0;
  case 128:
   goto out_err;
  default:
   break;
  }

  FUNC_3(500);

 } while (--VAR_5);

 FUNC_1(VAR_2, VAR_0, 128);

out_err:
 FUNC_2(&VAR_2->pdev->dev, "firmware init failed\n");
 return -VAR_1;
}
