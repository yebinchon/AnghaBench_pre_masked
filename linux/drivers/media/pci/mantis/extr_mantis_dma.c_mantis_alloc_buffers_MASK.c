
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mantis_pci {void* risc_cpu; scalar_t__ risc_dma; int pdev; void* buf_cpu; scalar_t__ buf_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,char*,...) ;
 int FUNC_1 (struct mantis_pci*) ;
 void* FUNC_2 (int ,int ,scalar_t__*) ;

__attribute__((used)) static inline int FUNC_3(struct mantis_pci *VAR_4)
{
 if (!VAR_4->buf_cpu) {
  VAR_4->buf_cpu = FUNC_2(VAR_4->pdev,
             VAR_1,
             &VAR_4->buf_dma);
  if (!VAR_4->buf_cpu) {
   FUNC_0(VAR_2, 1,
    "DMA buffer allocation failed");

   goto err;
  }
  FUNC_0(VAR_2, 1,
   "DMA=0x%lx cpu=0x%p size=%d",
   (unsigned long) VAR_4->buf_dma,
   VAR_4->buf_cpu, VAR_1);
 }
 if (!VAR_4->risc_cpu) {
  VAR_4->risc_cpu = FUNC_2(VAR_4->pdev,
       VAR_3,
       &VAR_4->risc_dma);

  if (!VAR_4->risc_cpu) {
   FUNC_0(VAR_2, 1,
    "RISC program allocation failed");

   FUNC_1(VAR_4);

   goto err;
  }
  FUNC_0(VAR_2, 1,
   "RISC=0x%lx cpu=0x%p size=%lx",
   (unsigned long) VAR_4->risc_dma,
   VAR_4->risc_cpu, VAR_3);
 }

 return 0;
err:
 FUNC_0(VAR_2, 1, "Out of memory (?) .....");
 return -VAR_0;
}
