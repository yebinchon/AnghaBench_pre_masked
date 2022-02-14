
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int size; } ;
struct mvneta_bm_pool {int id; int phys_addr; scalar_t__ virt_addr; TYPE_1__ hwbm_pool; } ;
struct mvneta_bm {struct platform_device* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,char*,int ,int ) ;
 scalar_t__ FUNC_3 (int *,int,int *,int ) ;
 int FUNC_4 (int *,int,scalar_t__,int ) ;
 int FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (struct mvneta_bm*,int ) ;
 int FUNC_7 (struct mvneta_bm*,int ,int ,int ) ;
 int FUNC_8 (struct mvneta_bm*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct mvneta_bm *VAR_3,
     struct mvneta_bm_pool *VAR_4)
{
 struct platform_device *VAR_5 = VAR_3->pdev;
 u8 VAR_6, VAR_7;
 int VAR_8, VAR_9;
 VAR_8 = sizeof(u32) * VAR_4->hwbm_pool.size;
 VAR_4->virt_addr = FUNC_3(&VAR_5->dev, VAR_8,
      &VAR_4->phys_addr,
      VAR_1);
 if (!VAR_4->virt_addr)
  return -VAR_0;

 if (!FUNC_0((u32)VAR_4->virt_addr, VAR_2)) {
  FUNC_4(&VAR_5->dev, VAR_8, VAR_4->virt_addr,
      VAR_4->phys_addr);
  FUNC_2(&VAR_5->dev, "BM pool %d is not %d bytes aligned\n",
   VAR_4->id, VAR_2);
  return -VAR_0;
 }

 VAR_9 = FUNC_5(VAR_4->phys_addr, &VAR_6,
        &VAR_7);
 if (VAR_9 < 0) {
  FUNC_4(&VAR_5->dev, VAR_8, VAR_4->virt_addr,
      VAR_4->phys_addr);
  return VAR_9;
 }


 FUNC_8(VAR_3, FUNC_1(VAR_4->id),
   VAR_4->phys_addr);

 FUNC_7(VAR_3, VAR_4->id, VAR_6, VAR_7);
 FUNC_6(VAR_3, VAR_4->id);

 return 0;
}
