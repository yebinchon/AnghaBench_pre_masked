
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sysinfo {int totalram; } ;
struct pci_dev {int dev; } ;
struct MPT3SAS_ADAPTER {scalar_t__ hba_mpi_version_belonged; int dma_mask; int sge_size; int * base_add_sg_single; scalar_t__ is_mcpu_endpoint; } ;
typedef int dma_addr_t ;
typedef int Mpi2SGESimple64_t ;
typedef int Mpi2SGESimple32_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (struct MPT3SAS_ADAPTER*,char*,int,int ) ;
 int FUNC_7 (struct sysinfo*) ;

__attribute__((used)) static int
FUNC_8(struct MPT3SAS_ADAPTER *VAR_4, struct pci_dev *VAR_5)
{
 u64 VAR_6, VAR_7;
 struct sysinfo VAR_8;

 int VAR_9 = (VAR_4->hba_mpi_version_belonged > VAR_1) ? 63 : 64;

 if (VAR_4->is_mcpu_endpoint)
  goto try_32bit;

 VAR_6 = FUNC_2(&VAR_5->dev);
 if (sizeof(dma_addr_t) == 4 || VAR_6 == 32)
  goto try_32bit;

 if (VAR_4->dma_mask)
  VAR_7 = FUNC_0(VAR_9);
 else
  VAR_7 = FUNC_0(32);

 if (FUNC_4(&VAR_5->dev, FUNC_0(VAR_9)) ||
     FUNC_3(&VAR_5->dev, VAR_7))
  goto try_32bit;

 VAR_4->base_add_sg_single = &VAR_3;
 VAR_4->sge_size = sizeof(Mpi2SGESimple64_t);
 VAR_4->dma_mask = VAR_9;
 goto out;

 try_32bit:
 if (FUNC_5(&VAR_5->dev, FUNC_0(32)))
  return -VAR_0;

 VAR_4->base_add_sg_single = &VAR_2;
 VAR_4->sge_size = sizeof(Mpi2SGESimple32_t);
 VAR_4->dma_mask = 32;
 out:
 FUNC_7(&VAR_8);
 FUNC_6(VAR_4, "%d BIT PCI BUS DMA ADDRESSING SUPPORTED, total mem (%ld kB)\n",
   VAR_4->dma_mask, FUNC_1(VAR_8.totalram));

 return 0;
}
