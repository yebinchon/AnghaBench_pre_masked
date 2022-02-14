
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_icm_chunk {int coherent; size_t npages; scalar_t__ nsg; int * sg; int * buf; int list; } ;
struct mlx4_icm {int chunk_list; scalar_t__ refcount; } ;
struct mlx4_dev {TYPE_2__* persist; int numa_node; } ;
typedef int gfp_t ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int *,int *,size_t,int ) ;
 int FUNC_3 (int ) ;
 struct mlx4_icm* FUNC_4 (int,int) ;
 struct mlx4_icm* FUNC_5 (int,int,int ) ;
 struct mlx4_icm_chunk* FUNC_6 (int,int) ;
 struct mlx4_icm_chunk* FUNC_7 (int,int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *,int,int) ;
 int FUNC_10 (int *,int,int,int ) ;
 int FUNC_11 (struct mlx4_dev*,struct mlx4_icm*,int) ;
 int FUNC_12 (int *,size_t) ;

struct mlx4_icm *FUNC_13(struct mlx4_dev *VAR_6, int VAR_7,
    gfp_t VAR_8, int VAR_9)
{
 struct mlx4_icm *VAR_10;
 struct mlx4_icm_chunk *VAR_11 = ((void*)0);
 int VAR_12;
 gfp_t VAR_13;
 int VAR_14;


 FUNC_0(VAR_9 && (VAR_8 & VAR_4));

 VAR_10 = FUNC_5(sizeof(*VAR_10),
      VAR_8 & ~(VAR_4 | VAR_5),
      VAR_6->numa_node);
 if (!VAR_10) {
  VAR_10 = FUNC_4(sizeof(*VAR_10),
         VAR_8 & ~(VAR_4 | VAR_5));
  if (!VAR_10)
   return ((void*)0);
 }

 VAR_10->refcount = 0;
 FUNC_1(&VAR_10->chunk_list);

 VAR_12 = FUNC_3(VAR_1);

 while (VAR_7 > 0) {
  if (!VAR_11) {
   VAR_11 = FUNC_7(sizeof(*VAR_11),
          VAR_8 & ~(VAR_4 |
         VAR_5),
          VAR_6->numa_node);
   if (!VAR_11) {
    VAR_11 = FUNC_6(sizeof(*VAR_11),
      VAR_8 & ~(VAR_4 |
            VAR_5));
    if (!VAR_11)
     goto fail;
   }
   VAR_11->coherent = VAR_9;

   if (!VAR_9)
    FUNC_12(VAR_11->sg, VAR_2);
   FUNC_8(&VAR_11->list, &VAR_10->chunk_list);
  }

  while (1 << VAR_12 > VAR_7)
   --VAR_12;

  VAR_13 = VAR_8;
  if (VAR_12)
   VAR_13 &= ~VAR_3;

  if (VAR_9)
   VAR_14 = FUNC_9(&VAR_6->persist->pdev->dev,
      &VAR_11->buf[VAR_11->npages],
      VAR_12, VAR_13);
  else
   VAR_14 = FUNC_10(&VAR_11->sg[VAR_11->npages],
         VAR_12, VAR_13,
         VAR_6->numa_node);

  if (VAR_14) {
   if (--VAR_12 < 0)
    goto fail;
   else
    continue;
  }

  ++VAR_11->npages;

  if (VAR_9)
   ++VAR_11->nsg;
  else if (VAR_11->npages == VAR_2) {
   VAR_11->nsg = FUNC_2(&VAR_6->persist->pdev->dev,
      VAR_11->sg, VAR_11->npages,
      VAR_0);

   if (VAR_11->nsg <= 0)
    goto fail;
  }

  if (VAR_11->npages == VAR_2)
   VAR_11 = ((void*)0);

  VAR_7 -= 1 << VAR_12;
 }

 if (!VAR_9 && VAR_11) {
  VAR_11->nsg = FUNC_2(&VAR_6->persist->pdev->dev, VAR_11->sg,
     VAR_11->npages, VAR_0);

  if (VAR_11->nsg <= 0)
   goto fail;
 }

 return VAR_10;

fail:
 FUNC_11(VAR_6, VAR_10, VAR_9);
 return ((void*)0);
}
