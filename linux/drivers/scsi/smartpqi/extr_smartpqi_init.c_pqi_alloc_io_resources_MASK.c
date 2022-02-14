
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pqi_io_request {unsigned int index; int sg_chain_buffer_dma_handle; void* sg_chain_buffer; int iu; } ;
struct pqi_ctrl_info {unsigned int max_io_slots; size_t sg_chain_buffer_length; TYPE_1__* pci_dev; int max_inbound_iu_length; struct pqi_io_request* io_request_pool; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 void* FUNC_1 (struct device*,size_t,int *,int ) ;
 struct pqi_io_request* FUNC_2 (unsigned int,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct pqi_ctrl_info*) ;

__attribute__((used)) static int FUNC_5(struct pqi_ctrl_info *VAR_2)
{
 unsigned int VAR_3;
 void *VAR_4;
 size_t VAR_5;
 dma_addr_t VAR_6;
 struct device *VAR_7;
 struct pqi_io_request *VAR_8;

 VAR_2->io_request_pool =
  FUNC_2(VAR_2->max_io_slots,
   sizeof(VAR_2->io_request_pool[0]), VAR_1);

 if (!VAR_2->io_request_pool) {
  FUNC_0(&VAR_2->pci_dev->dev,
   "failed to allocate I/O request pool\n");
  goto error;
 }

 VAR_7 = &VAR_2->pci_dev->dev;
 VAR_5 = VAR_2->sg_chain_buffer_length;
 VAR_8 = VAR_2->io_request_pool;

 for (VAR_3 = 0; VAR_3 < VAR_2->max_io_slots; VAR_3++) {
  VAR_8->iu =
   FUNC_3(VAR_2->max_inbound_iu_length, VAR_1);

  if (!VAR_8->iu) {
   FUNC_0(&VAR_2->pci_dev->dev,
    "failed to allocate IU buffers\n");
   goto error;
  }

  VAR_4 = FUNC_1(VAR_7,
   VAR_5, &VAR_6,
   VAR_1);

  if (!VAR_4) {
   FUNC_0(&VAR_2->pci_dev->dev,
    "failed to allocate PQI scatter-gather chain buffers\n");
   goto error;
  }

  VAR_8->index = VAR_3;
  VAR_8->sg_chain_buffer = VAR_4;
  VAR_8->sg_chain_buffer_dma_handle =
   VAR_6;
  VAR_8++;
 }

 return 0;

error:
 FUNC_4(VAR_2);

 return -VAR_0;
}
