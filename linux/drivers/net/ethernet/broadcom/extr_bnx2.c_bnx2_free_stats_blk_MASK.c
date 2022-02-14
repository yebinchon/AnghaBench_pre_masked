
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct bnx2 {int * stats_blk; int * status_blk; int status_blk_mapping; int status_stats_size; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ,int *,int ) ;
 struct bnx2* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void
FUNC_2(struct net_device *VAR_0)
{
 struct bnx2 *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->status_blk) {
  FUNC_0(&VAR_1->pdev->dev, VAR_1->status_stats_size,
      VAR_1->status_blk,
      VAR_1->status_blk_mapping);
  VAR_1->status_blk = ((void*)0);
  VAR_1->stats_blk = ((void*)0);
 }
}
