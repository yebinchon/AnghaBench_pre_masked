
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_5__ {TYPE_1__ mac; } ;
struct ixgbevf_adapter {int mbx_lock; TYPE_2__ hw; int num_rx_queues; int * rss_indir_tbl; int rss_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int *,int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,int ,int ) ;
 struct ixgbevf_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3, u32 *VAR_4, u8 *VAR_5,
       u8 *VAR_6)
{
 struct ixgbevf_adapter *VAR_7 = FUNC_4(VAR_3);
 int VAR_8 = 0;

 if (VAR_6)
  *VAR_6 = VAR_0;

 if (VAR_7->hw.mac.type >= VAR_2) {
  if (VAR_5)
   FUNC_3(VAR_5, VAR_7->rss_key,
          FUNC_2(VAR_3));

  if (VAR_4) {
   int VAR_9;

   for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
    VAR_4[VAR_9] = VAR_7->rss_indir_tbl[VAR_9];
  }
 } else {



  if (!VAR_4 && !VAR_5)
   return 0;

  FUNC_5(&VAR_7->mbx_lock);
  if (VAR_4)
   VAR_8 = FUNC_0(&VAR_7->hw, VAR_4,
            VAR_7->num_rx_queues);

  if (!VAR_8 && VAR_5)
   VAR_8 = FUNC_1(&VAR_7->hw, VAR_5);

  FUNC_6(&VAR_7->mbx_lock);
 }

 return VAR_8;
}
