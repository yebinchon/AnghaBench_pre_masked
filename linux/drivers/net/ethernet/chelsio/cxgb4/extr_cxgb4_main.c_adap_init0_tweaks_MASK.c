
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_6 ;
 int FUNC_2 (struct adapter*,int ,int ) ;
 int FUNC_3 (struct adapter*,int ,int ,int ) ;
 int FUNC_4 (struct adapter*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct adapter *VAR_7)
{





 FUNC_2(VAR_7, VAR_2, VAR_1);




 if (VAR_6 != 2 && VAR_6 != 0) {
  FUNC_1(&VAR_7->pdev->dev,
   "Ignoring illegal rx_dma_offset=%d, using 2\n",
   VAR_6);
  VAR_6 = 2;
 }
 FUNC_3(VAR_7, VAR_4,
    FUNC_0(VAR_3),
    FUNC_0(VAR_6));





 FUNC_4(VAR_7, VAR_5,
          VAR_0, 0);

 return 0;
}
