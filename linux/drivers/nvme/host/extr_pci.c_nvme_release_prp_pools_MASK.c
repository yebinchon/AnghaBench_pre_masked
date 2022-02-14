
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_dev {int prp_small_pool; int prp_page_pool; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct nvme_dev *VAR_0)
{
 FUNC_0(VAR_0->prp_page_pool);
 FUNC_0(VAR_0->prp_small_pool);
}
