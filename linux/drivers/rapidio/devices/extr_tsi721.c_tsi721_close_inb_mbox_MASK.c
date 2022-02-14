
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct tsi721_imsg_desc {int dummy; } ;
struct tsi721_device {int flags; TYPE_3__* imsg_ring; TYPE_2__* pdev; TYPE_1__* msix; scalar_t__* imsg_init; } ;
struct rio_mport {struct tsi721_device* priv; } ;
struct TYPE_6__ {size_t size; int * imd_base; int imd_phys; int * imfq_base; int imfq_phys; int * buf_base; int buf_phys; int ** imq_base; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (struct tsi721_device*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct rio_mport *VAR_5, int VAR_6)
{
 struct tsi721_device *VAR_7 = VAR_5->priv;
 u32 VAR_8;
 int VAR_9 = VAR_6 + 4;

 if (!VAR_7->imsg_init[VAR_6])
  return;
 VAR_7->imsg_init[VAR_6] = 0;




 FUNC_2(VAR_7, VAR_9, VAR_1);
 for (VAR_8 = 0; VAR_8 < VAR_7->imsg_ring[VAR_6].size; VAR_8++)
  VAR_7->imsg_ring[VAR_6].imq_base[VAR_8] = ((void*)0);


 FUNC_0(&VAR_7->pdev->dev,
  VAR_7->imsg_ring[VAR_6].size * VAR_0,
  VAR_7->imsg_ring[VAR_6].buf_base,
  VAR_7->imsg_ring[VAR_6].buf_phys);

 VAR_7->imsg_ring[VAR_6].buf_base = ((void*)0);


 FUNC_0(&VAR_7->pdev->dev,
  VAR_7->imsg_ring[VAR_6].size * 8,
  VAR_7->imsg_ring[VAR_6].imfq_base,
  VAR_7->imsg_ring[VAR_6].imfq_phys);

 VAR_7->imsg_ring[VAR_6].imfq_base = ((void*)0);


 FUNC_0(&VAR_7->pdev->dev,
  VAR_7->imsg_ring[VAR_6].size * sizeof(struct tsi721_imsg_desc),
  VAR_7->imsg_ring[VAR_6].imd_base,
  VAR_7->imsg_ring[VAR_6].imd_phys);

 VAR_7->imsg_ring[VAR_6].imd_base = ((void*)0);
}
