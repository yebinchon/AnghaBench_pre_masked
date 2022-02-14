
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc9420_pdata {int tx_buffers; int rx_buffers; scalar_t__ ioaddr; int rx_dma_addr; int rx_ring; int tx_ring; } ;
struct smsc9420_dma_desc {int dummy; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 struct smsc9420_pdata* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int,int ,int ) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_3)
{
 struct net_device *VAR_4;
 struct smsc9420_pdata *VAR_5;

 VAR_4 = FUNC_6(VAR_3);
 if (!VAR_4)
  return;

 VAR_5 = FUNC_3(VAR_4);
 FUNC_8(VAR_4);


 FUNC_0(VAR_5->tx_buffers);
 FUNC_0(VAR_5->rx_buffers);

 FUNC_0(!VAR_5->tx_ring);
 FUNC_0(!VAR_5->rx_ring);

 FUNC_5(VAR_3, sizeof(struct smsc9420_dma_desc) *
  (VAR_1 + VAR_2), VAR_5->rx_ring, VAR_5->rx_dma_addr);

 FUNC_2(VAR_5->ioaddr - VAR_0);
 FUNC_7(VAR_3);
 FUNC_1(VAR_4);
 FUNC_4(VAR_3);
}
