
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_dev {void* prp_page_pool; void* prp_small_pool; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*,int ,int,int,int ) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(struct nvme_dev *VAR_2)
{
 VAR_2->prp_page_pool = FUNC_0("prp list page", VAR_2->dev,
      VAR_1, VAR_1, 0);
 if (!VAR_2->prp_page_pool)
  return -VAR_0;


 VAR_2->prp_small_pool = FUNC_0("prp list 256", VAR_2->dev,
      256, 256, 0);
 if (!VAR_2->prp_small_pool) {
  FUNC_1(VAR_2->prp_page_pool);
  return -VAR_0;
 }
 return 0;
}
