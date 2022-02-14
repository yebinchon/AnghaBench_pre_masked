
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx4_dev {TYPE_3__* persist; } ;
struct TYPE_5__ {int map; scalar_t__ buf; } ;
struct mlx4_buf {int nbufs; TYPE_4__* page_list; TYPE_1__ direct; } ;
struct TYPE_8__ {int map; scalar_t__ buf; } ;
struct TYPE_7__ {TYPE_2__* pdev; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,scalar_t__,int ) ;
 int FUNC_1 (TYPE_4__*) ;

void FUNC_2(struct mlx4_dev *VAR_1, int VAR_2, struct mlx4_buf *VAR_3)
{
 if (VAR_3->nbufs == 1) {
  FUNC_0(&VAR_1->persist->pdev->dev, VAR_2,
      VAR_3->direct.buf, VAR_3->direct.map);
 } else {
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_3->nbufs; ++VAR_4)
   if (VAR_3->page_list[VAR_4].buf)
    FUNC_0(&VAR_1->persist->pdev->dev,
        VAR_0,
        VAR_3->page_list[VAR_4].buf,
        VAR_3->page_list[VAR_4].map);
  FUNC_1(VAR_3->page_list);
 }
}
