
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct status_block {int dummy; } ;
struct statistics_block {int dummy; } ;
struct net_device {int dummy; } ;
struct bnx2 {int flags; int status_stats_size; scalar_t__ status_blk_mapping; scalar_t__ stats_blk_mapping; void* stats_blk; void* status_blk; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int *,int,scalar_t__*,int ) ;
 struct bnx2* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_5)
{
 int VAR_6;
 void *VAR_7;
 struct bnx2 *VAR_8 = FUNC_2(VAR_5);


 VAR_6 = FUNC_0(sizeof(struct status_block));
 if (VAR_8->flags & VAR_0)
  VAR_6 = FUNC_0(VAR_1 *
       VAR_2);
 VAR_8->status_stats_size = VAR_6 +
    sizeof(struct statistics_block);
 VAR_7 = FUNC_1(&VAR_8->pdev->dev, VAR_8->status_stats_size,
     &VAR_8->status_blk_mapping, VAR_4);
 if (!VAR_7)
  return -VAR_3;

 VAR_8->status_blk = VAR_7;
 VAR_8->stats_blk = VAR_7 + VAR_6;
 VAR_8->stats_blk_mapping = VAR_8->status_blk_mapping + VAR_6;

 return 0;
}
