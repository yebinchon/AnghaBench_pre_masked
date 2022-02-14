
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_io_request {int sg_chain_buffer_dma_handle; int sg_chain_buffer; struct pqi_io_request* iu; } ;
struct pqi_ctrl_info {size_t sg_chain_buffer_length; unsigned int max_io_slots; struct pqi_io_request* io_request_pool; TYPE_1__* pci_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,size_t,int ,int ) ;
 int FUNC_1 (struct pqi_io_request*) ;

__attribute__((used)) static void FUNC_2(struct pqi_ctrl_info *VAR_0)
{
 unsigned int VAR_1;
 struct device *VAR_2;
 size_t VAR_3;
 struct pqi_io_request *VAR_4;

 if (!VAR_0->io_request_pool)
  return;

 VAR_2 = &VAR_0->pci_dev->dev;
 VAR_3 = VAR_0->sg_chain_buffer_length;
 VAR_4 = VAR_0->io_request_pool;

 for (VAR_1 = 0; VAR_1 < VAR_0->max_io_slots; VAR_1++) {
  FUNC_1(VAR_4->iu);
  if (!VAR_4->sg_chain_buffer)
   break;
  FUNC_0(VAR_2, VAR_3,
   VAR_4->sg_chain_buffer,
   VAR_4->sg_chain_buffer_dma_handle);
  VAR_4++;
 }

 FUNC_1(VAR_0->io_request_pool);
 VAR_0->io_request_pool = ((void*)0);
}
