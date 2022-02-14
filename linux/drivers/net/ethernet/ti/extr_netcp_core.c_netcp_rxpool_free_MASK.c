
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netcp_intf {scalar_t__ rx_pool_size; int * rx_pool; int ndev_dev; int * rx_fdq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct netcp_intf*,int) ;

__attribute__((used)) static void FUNC_5(struct netcp_intf *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0 &&
      !FUNC_0(VAR_1->rx_fdq[VAR_2]); VAR_2++)
  FUNC_4(VAR_1, VAR_2);

 if (FUNC_2(VAR_1->rx_pool) != VAR_1->rx_pool_size)
  FUNC_1(VAR_1->ndev_dev, "Lost Rx (%d) descriptors\n",
   VAR_1->rx_pool_size - FUNC_2(VAR_1->rx_pool));

 FUNC_3(VAR_1->rx_pool);
 VAR_1->rx_pool = ((void*)0);
}
