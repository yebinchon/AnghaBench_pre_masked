
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct emac_instance {TYPE_2__* rx_desc; int rx_sync_size; TYPE_1__* ofdev; struct sk_buff** rx_skb; } ;
struct TYPE_4__ {int ctrl; scalar_t__ data_ptr; scalar_t__ data_len; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(struct sk_buff *VAR_6, struct emac_instance *VAR_7, int VAR_8)
{
 if (FUNC_1(!VAR_6))
  return -VAR_1;

 VAR_7->rx_skb[VAR_8] = VAR_6;
 VAR_7->rx_desc[VAR_8].data_len = 0;

 VAR_7->rx_desc[VAR_8].data_ptr =
     FUNC_0(&VAR_7->ofdev->dev, VAR_6->data - VAR_4,
      VAR_7->rx_sync_size, VAR_0) + VAR_4;
 FUNC_2();
 VAR_7->rx_desc[VAR_8].ctrl = VAR_2 |
     (VAR_8 == (VAR_5 - 1) ? VAR_3 : 0);

 return 0;
}
