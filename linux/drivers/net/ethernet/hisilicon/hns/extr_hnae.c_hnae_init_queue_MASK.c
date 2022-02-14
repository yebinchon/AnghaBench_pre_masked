
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct hnae_queue {TYPE_2__ tx_ring; TYPE_2__ rx_ring; struct hnae_handle* handle; struct hnae_ae_dev* dev; } ;
struct hnae_handle {int dummy; } ;
struct hnae_ae_dev {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* init_queue ) (struct hnae_queue*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct hnae_queue*,TYPE_2__*,int) ;
 int FUNC_2 (struct hnae_queue*) ;

__attribute__((used)) static int FUNC_3(struct hnae_handle *VAR_1, struct hnae_queue *VAR_2,
      struct hnae_ae_dev *VAR_3)
{
 int VAR_4;

 VAR_2->dev = VAR_3;
 VAR_2->handle = VAR_1;

 VAR_4 = FUNC_1(VAR_2, &VAR_2->tx_ring, VAR_2->tx_ring.flags | VAR_0);
 if (VAR_4)
  goto out;

 VAR_4 = FUNC_1(VAR_2, &VAR_2->rx_ring, VAR_2->rx_ring.flags & ~VAR_0);
 if (VAR_4)
  goto out_with_tx_ring;

 if (VAR_3->ops->init_queue)
  VAR_3->ops->init_queue(VAR_2);

 return 0;

out_with_tx_ring:
 FUNC_0(&VAR_2->tx_ring);
out:
 return VAR_4;
}
