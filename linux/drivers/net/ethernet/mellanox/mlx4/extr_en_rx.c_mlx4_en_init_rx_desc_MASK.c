
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx4_en_rx_ring {int stride; struct mlx4_en_rx_desc* buf; } ;
struct mlx4_en_rx_desc {TYPE_4__* data; } ;
struct mlx4_en_priv {int num_frags; TYPE_3__* mdev; TYPE_1__* frag_info; } ;
struct TYPE_8__ {scalar_t__ addr; void* lkey; void* byte_count; } ;
struct TYPE_6__ {int key; } ;
struct TYPE_7__ {TYPE_2__ mr; } ;
struct TYPE_5__ {int frag_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(const struct mlx4_en_priv *VAR_2,
     struct mlx4_en_rx_ring *VAR_3, int VAR_4)
{
 struct mlx4_en_rx_desc *VAR_5 = VAR_3->buf + VAR_3->stride * VAR_4;
 int VAR_6;
 int VAR_7;


 for (VAR_7 = 0; VAR_7 < VAR_2->num_frags; VAR_7++) {
  VAR_5->data[VAR_7].byte_count =
   FUNC_0(VAR_2->frag_info[VAR_7].frag_size);
  VAR_5->data[VAR_7].lkey = FUNC_0(VAR_2->mdev->mr.key);
 }




 VAR_6 = (VAR_3->stride - sizeof(struct mlx4_en_rx_desc)) / VAR_0;
 for (VAR_7 = VAR_2->num_frags; VAR_7 < VAR_6; VAR_7++) {
  VAR_5->data[VAR_7].byte_count = 0;
  VAR_5->data[VAR_7].lkey = FUNC_0(VAR_1);
  VAR_5->data[VAR_7].addr = 0;
 }
}
