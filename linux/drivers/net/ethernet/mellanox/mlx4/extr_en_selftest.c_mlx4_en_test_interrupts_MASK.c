
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx4_en_priv {int rx_ring_num; TYPE_1__** rx_cq; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {TYPE_2__* dev; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {int vector; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(struct mlx4_en_priv *VAR_1)
{
 struct mlx4_en_dev *VAR_2 = VAR_1->mdev;
 int VAR_3 = 0;
 int VAR_4 = 0;

 VAR_3 = FUNC_1(VAR_2->dev);

 if (!(VAR_2->dev->flags & VAR_0) || FUNC_0(VAR_2->dev))
  return VAR_3;





 for (VAR_4 = 0; VAR_4 < VAR_1->rx_ring_num; VAR_4++) {
  VAR_3 = FUNC_2(VAR_2->dev, VAR_1->rx_cq[VAR_4]->vector);
  if (VAR_3)
   break;
 }

 return VAR_3;
}
