
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mantis_pci {int * risc_cpu; scalar_t__ risc_dma; int pdev; int * buf_cpu; scalar_t__ buf_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*,unsigned long,int *,int ) ;
 int FUNC_1 (int ,int ,int *,scalar_t__) ;

int FUNC_2(struct mantis_pci *VAR_3)
{
 if (VAR_3->buf_cpu) {
  FUNC_0(VAR_1, 1,
   "DMA=0x%lx cpu=0x%p size=%d",
   (unsigned long) VAR_3->buf_dma,
    VAR_3->buf_cpu,
    VAR_0);

  FUNC_1(VAR_3->pdev, VAR_0,
        VAR_3->buf_cpu, VAR_3->buf_dma);

  VAR_3->buf_cpu = ((void*)0);
 }
 if (VAR_3->risc_cpu) {
  FUNC_0(VAR_1, 1,
   "RISC=0x%lx cpu=0x%p size=%lx",
   (unsigned long) VAR_3->risc_dma,
   VAR_3->risc_cpu,
   VAR_2);

  FUNC_1(VAR_3->pdev, VAR_2,
        VAR_3->risc_cpu, VAR_3->risc_dma);

  VAR_3->risc_cpu = ((void*)0);
 }

 return 0;
}
