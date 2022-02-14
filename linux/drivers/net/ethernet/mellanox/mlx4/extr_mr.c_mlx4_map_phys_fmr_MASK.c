
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_7__ {int key; } ;
struct mlx4_fmr {unsigned long long page_shift; TYPE_5__* mpt; int dma_handle; void** mtts; TYPE_2__ mr; int maps; } ;
struct TYPE_6__ {scalar_t__ num_mpts; } ;
struct mlx4_dev {TYPE_4__* persist; TYPE_1__ caps; } ;
struct TYPE_10__ {void* start; void* length; void* lkey; void* key; } ;
struct TYPE_9__ {TYPE_3__* pdev; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int,int ) ;
 int FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mlx4_fmr*,int*,int,int) ;
 int FUNC_7 () ;

int FUNC_8(struct mlx4_dev *VAR_4, struct mlx4_fmr *VAR_5, u64 *VAR_6,
        int VAR_7, u64 VAR_8, u32 *VAR_9, u32 *VAR_10)
{
 u32 VAR_11;
 int VAR_12, VAR_13;

 VAR_13 = FUNC_6(VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_13)
  return VAR_13;

 ++VAR_5->maps;

 VAR_11 = FUNC_5(VAR_5->mr.key);
 VAR_11 += VAR_4->caps.num_mpts;
 *VAR_9 = *VAR_10 = VAR_5->mr.key = FUNC_4(VAR_11);

 *(u8 *) VAR_5->mpt = VAR_2;


 FUNC_7();

 FUNC_2(&VAR_4->persist->pdev->dev, VAR_5->dma_handle,
    VAR_7 * sizeof(u64), VAR_0);

 for (VAR_12 = 0; VAR_12 < VAR_7; ++VAR_12)
  VAR_5->mtts[VAR_12] = FUNC_1(VAR_6[VAR_12] | VAR_3);

 FUNC_3(&VAR_4->persist->pdev->dev, VAR_5->dma_handle,
       VAR_7 * sizeof(u64), VAR_0);

 VAR_5->mpt->key = FUNC_0(VAR_11);
 VAR_5->mpt->lkey = FUNC_0(VAR_11);
 VAR_5->mpt->length = FUNC_1(VAR_7 * (1ull << VAR_5->page_shift));
 VAR_5->mpt->start = FUNC_1(VAR_8);


 FUNC_7();

 *(u8 *) VAR_5->mpt = VAR_1;


 FUNC_7();

 return 0;
}
