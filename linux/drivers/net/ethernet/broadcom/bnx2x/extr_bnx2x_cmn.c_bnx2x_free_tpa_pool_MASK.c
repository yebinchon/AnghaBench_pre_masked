
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sw_rx_bd {int * data; } ;
struct bnx2x_fastpath {int rx_buf_size; struct bnx2x_agg_info* tpa_info; } ;
struct bnx2x_agg_info {scalar_t__ tpa_state; struct sw_rx_bd first_buf; } ;
struct bnx2x {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x_fastpath*,int *) ;
 int FUNC_2 (struct sw_rx_bd*,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct bnx2x *VAR_4,
    struct bnx2x_fastpath *VAR_5, int VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  struct bnx2x_agg_info *VAR_8 = &VAR_5->tpa_info[VAR_7];
  struct sw_rx_bd *VAR_9 = &VAR_8->first_buf;
  u8 *VAR_10 = VAR_9->data;

  if (VAR_10 == ((void*)0)) {
   FUNC_0(VAR_2, "tpa bin %d empty on free\n", VAR_7);
   continue;
  }
  if (VAR_8->tpa_state == VAR_0)
   FUNC_3(&VAR_4->pdev->dev,
      FUNC_2(VAR_9, VAR_3),
      VAR_5->rx_buf_size, VAR_1);
  FUNC_1(VAR_5, VAR_10);
  VAR_9->data = ((void*)0);
 }
}
