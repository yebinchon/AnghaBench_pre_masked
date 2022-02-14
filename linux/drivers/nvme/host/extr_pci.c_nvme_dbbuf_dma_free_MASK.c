
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_dev {int * dbbuf_eis; int dbbuf_eis_dma_addr; int dev; int * dbbuf_dbs; int dbbuf_dbs_dma_addr; int db_stride; } ;


 int FUNC_0 (int ,unsigned int,int *,int ) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct nvme_dev *VAR_0)
{
 unsigned int VAR_1 = FUNC_1(VAR_0->db_stride);

 if (VAR_0->dbbuf_dbs) {
  FUNC_0(VAR_0->dev, VAR_1,
      VAR_0->dbbuf_dbs, VAR_0->dbbuf_dbs_dma_addr);
  VAR_0->dbbuf_dbs = ((void*)0);
 }
 if (VAR_0->dbbuf_eis) {
  FUNC_0(VAR_0->dev, VAR_1,
      VAR_0->dbbuf_eis, VAR_0->dbbuf_eis_dma_addr);
  VAR_0->dbbuf_eis = ((void*)0);
 }
}
