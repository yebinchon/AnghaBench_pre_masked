
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_frag_buf {int size; int npages; int page_shift; TYPE_1__* frags; } ;
struct mlx5_core_dev {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int map; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mlx5_core_dev*,int,int*,int) ;

int FUNC_4(struct mlx5_core_dev *VAR_3, int VAR_4,
   struct mlx5_frag_buf *VAR_5, int VAR_6)
{
 dma_addr_t VAR_7;

 VAR_5->size = VAR_4;
 VAR_5->npages = 1;
 VAR_5->page_shift = (u8)FUNC_0(VAR_4) + VAR_2;

 VAR_5->frags = FUNC_2(sizeof(*VAR_5->frags), VAR_1);
 if (!VAR_5->frags)
  return -VAR_0;

 VAR_5->frags->buf = FUNC_3(VAR_3, VAR_4,
         &VAR_7, VAR_6);
 if (!VAR_5->frags->buf)
  goto err_out;

 VAR_5->frags->map = VAR_7;

 while (VAR_7 & ((1 << VAR_5->page_shift) - 1)) {
  --VAR_5->page_shift;
  VAR_5->npages *= 2;
 }

 return 0;
err_out:
 FUNC_1(VAR_5->frags);
 return -VAR_0;
}
