
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_sgl_desc {int type; void* length; int addr; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct nvme_sgl_desc *VAR_4,
  dma_addr_t VAR_5, int VAR_6)
{
 VAR_4->addr = FUNC_1(VAR_5);
 if (VAR_6 < VAR_3) {
  VAR_4->length = FUNC_0(VAR_6 * sizeof(*VAR_4));
  VAR_4->type = VAR_0 << 4;
 } else {
  VAR_4->length = FUNC_0(VAR_2);
  VAR_4->type = VAR_1 << 4;
 }
}
