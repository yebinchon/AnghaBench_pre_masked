
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; int get_mctrl; int set_termios; int dev; } ;
struct pci_dev {int device; int dev; int bus; int devfn; } ;
struct dw_dma_slave {int src_id; int dst_id; int p_master; scalar_t__ m_master; int * dma_dev; } ;
struct lpss8250 {int dma_maxburst; struct dw_dma_slave dma_param; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ,int ) ;






 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct pci_dev* FUNC_2 (int ,unsigned int) ;
 struct pci_dev* FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct lpss8250 *VAR_5, struct uart_port *VAR_6)
{
 struct dw_dma_slave *VAR_7 = &VAR_5->dma_param;
 struct pci_dev *VAR_8 = FUNC_3(VAR_6->dev);
 unsigned int VAR_9 = FUNC_0(FUNC_1(VAR_8->devfn), 0);
 struct pci_dev *VAR_10 = FUNC_2(VAR_8->bus, VAR_9);

 switch (VAR_8->device) {
 case 129:
 case 131:
 case 133:
  VAR_7->src_id = 3;
  VAR_7->dst_id = 2;
  break;
 case 128:
 case 130:
 case 132:
  VAR_7->src_id = 5;
  VAR_7->dst_id = 4;
  break;
 default:
  return -VAR_2;
 }

 VAR_7->dma_dev = &VAR_10->dev;
 VAR_7->m_master = 0;
 VAR_7->p_master = 1;

 VAR_5->dma_maxburst = 16;

 VAR_6->set_termios = VAR_4;
 VAR_6->get_mctrl = VAR_3;


 FUNC_4(VAR_1, VAR_6->membase + VAR_0);

 return 0;
}
