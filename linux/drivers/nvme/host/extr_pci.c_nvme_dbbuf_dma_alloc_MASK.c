
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_dev {int * dbbuf_dbs; int dbbuf_dbs_dma_addr; int dev; void* dbbuf_eis; int dbbuf_eis_dma_addr; int db_stride; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,unsigned int,int *,int ) ;
 int FUNC_1 (int ,unsigned int,int *,int ) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct nvme_dev *VAR_2)
{
 unsigned int VAR_3 = FUNC_2(VAR_2->db_stride);

 if (VAR_2->dbbuf_dbs)
  return 0;

 VAR_2->dbbuf_dbs = FUNC_0(VAR_2->dev, VAR_3,
         &VAR_2->dbbuf_dbs_dma_addr,
         VAR_1);
 if (!VAR_2->dbbuf_dbs)
  return -VAR_0;
 VAR_2->dbbuf_eis = FUNC_0(VAR_2->dev, VAR_3,
         &VAR_2->dbbuf_eis_dma_addr,
         VAR_1);
 if (!VAR_2->dbbuf_eis) {
  FUNC_1(VAR_2->dev, VAR_3,
      VAR_2->dbbuf_dbs, VAR_2->dbbuf_dbs_dma_addr);
  VAR_2->dbbuf_dbs = ((void*)0);
  return -VAR_0;
 }

 return 0;
}
