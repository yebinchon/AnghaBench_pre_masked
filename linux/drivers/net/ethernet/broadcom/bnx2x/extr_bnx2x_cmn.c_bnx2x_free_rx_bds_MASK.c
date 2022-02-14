
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sw_rx_bd {int * data; } ;
struct bnx2x_fastpath {int rx_buf_size; struct sw_rx_bd* rx_buf_ring; struct bnx2x* bp; } ;
struct bnx2x {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x_fastpath*,int *) ;
 int FUNC_1 (struct sw_rx_bd*,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct bnx2x_fastpath *VAR_3)
{
 struct bnx2x *VAR_4 = VAR_3->bp;
 int VAR_5;


 if (VAR_3->rx_buf_ring == ((void*)0))
  return;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  struct sw_rx_bd *VAR_6 = &VAR_3->rx_buf_ring[VAR_5];
  u8 *VAR_7 = VAR_6->data;

  if (VAR_7 == ((void*)0))
   continue;
  FUNC_2(&VAR_4->pdev->dev,
     FUNC_1(VAR_6, VAR_2),
     VAR_3->rx_buf_size, VAR_0);

  VAR_6->data = ((void*)0);
  FUNC_0(VAR_3, VAR_7);
 }
}
