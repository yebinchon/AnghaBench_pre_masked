
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct smi_port {int _int_status; int _dmaInterruptCH0; int idx; int _dmaInterruptCH1; int DMA_MANAGEMENT; int * cpu_addr; int demux; int DMA_CHAN1_TRANS_STATE; int DMA_CHAN0_TRANS_STATE; struct smi_dev* dev; } ;
struct smi_dev {TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct smi_port*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_1)
{
 struct smi_port *VAR_2 = (struct smi_port *) VAR_1;
 struct smi_dev *VAR_3 = VAR_2->dev;
 u32 VAR_4, VAR_5, VAR_6;
 u8 VAR_7, VAR_8;

 VAR_4 = VAR_2->_int_status;
 VAR_6 = FUNC_3(VAR_2->DMA_MANAGEMENT);
 VAR_7 = (u8)((VAR_6 & 0x00000030) >> 4);
 VAR_8 = (u8)((VAR_6 & 0x00300000) >> 20);


 if ((VAR_4 & VAR_2->_dmaInterruptCH0) && (VAR_7 == 0x01)) {
  FUNC_0(&VAR_3->pci_dev->dev,
   "Port[%d]-DMA CH0 engine complete successful !\n",
   VAR_2->idx);
  VAR_5 = FUNC_3(VAR_2->DMA_CHAN0_TRANS_STATE);
  VAR_5 &= 0x003FFFFF;




  if (VAR_5 == 0)
   VAR_5 = 0x00400000;
  if (VAR_5 != VAR_0) {
   FUNC_0(&VAR_3->pci_dev->dev,
    "DMA CH0 engine complete length mismatched, finish data=%d !\n",
    VAR_5);
  }
  FUNC_1(&VAR_2->demux,
   VAR_2->cpu_addr[0], (VAR_5 / 188));


 }

 if ((VAR_4 & VAR_2->_dmaInterruptCH1) && (VAR_8 == 0x01)) {
  FUNC_0(&VAR_3->pci_dev->dev,
   "Port[%d]-DMA CH1 engine complete successful !\n",
   VAR_2->idx);
  VAR_5 = FUNC_3(VAR_2->DMA_CHAN1_TRANS_STATE);
  VAR_5 &= 0x003FFFFF;




  if (VAR_5 == 0)
   VAR_5 = 0x00400000;
  if (VAR_5 != VAR_0) {
   FUNC_0(&VAR_3->pci_dev->dev,
    "DMA CH1 engine complete length mismatched, finish data=%d !\n",
    VAR_5);
  }
  FUNC_1(&VAR_2->demux,
   VAR_2->cpu_addr[1], (VAR_5 / 188));


 }

 if (VAR_4 & VAR_2->_dmaInterruptCH0)
  VAR_6 |= 0x00000002;
 if (VAR_4 & VAR_2->_dmaInterruptCH1)
  VAR_6 |= 0x00020000;
 FUNC_4(VAR_2->DMA_MANAGEMENT, VAR_6);

 FUNC_2(VAR_2);
}
