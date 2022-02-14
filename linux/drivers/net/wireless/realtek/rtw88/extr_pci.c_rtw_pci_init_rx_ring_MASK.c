
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {scalar_t__ cb; int data; } ;
struct TYPE_2__ {int* head; int len; int desc_size; scalar_t__ rp; scalar_t__ wp; int dma; } ;
struct rtw_pci_rx_ring {struct sk_buff** buf; TYPE_1__ r; } ;
struct rtw_dev {int dev; } ;
struct pci_dev {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct pci_dev*,int,int*,int ) ;
 int FUNC_4 (struct pci_dev*,int ,int,int ) ;
 int* FUNC_5 (struct pci_dev*,int,int *) ;
 int FUNC_6 (struct rtw_dev*,char*) ;
 int FUNC_7 (struct rtw_dev*,struct sk_buff*,struct rtw_pci_rx_ring*,int,int) ;
 struct pci_dev* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct rtw_dev *VAR_3,
    struct rtw_pci_rx_ring *VAR_4,
    u8 VAR_5, u32 VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_8(VAR_3->dev);
 struct sk_buff *VAR_8 = ((void*)0);
 dma_addr_t VAR_9;
 u8 *VAR_10;
 int VAR_11 = VAR_5 * VAR_6;
 int VAR_12 = VAR_2;
 int VAR_13, VAR_14;
 int VAR_15 = 0;

 VAR_10 = FUNC_5(VAR_7, VAR_11, &VAR_9);
 if (!VAR_10) {
  FUNC_6(VAR_3, "failed to allocate rx ring\n");
  return -VAR_0;
 }
 VAR_4->r.head = VAR_10;

 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  VAR_8 = FUNC_0(VAR_12);
  if (!VAR_8) {
   VAR_14 = VAR_13;
   VAR_15 = -VAR_0;
   goto err_out;
  }

  FUNC_2(VAR_8->data, 0, VAR_12);
  VAR_4->buf[VAR_13] = VAR_8;
  VAR_15 = FUNC_7(VAR_3, VAR_8, VAR_4, VAR_13, VAR_5);
  if (VAR_15) {
   VAR_14 = VAR_13;
   FUNC_1(VAR_8);
   goto err_out;
  }
 }

 VAR_4->r.dma = VAR_9;
 VAR_4->r.len = VAR_6;
 VAR_4->r.desc_size = VAR_5;
 VAR_4->r.wp = 0;
 VAR_4->r.rp = 0;

 return 0;

err_out:
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  VAR_8 = VAR_4->buf[VAR_13];
  if (!VAR_8)
   continue;
  VAR_9 = *((dma_addr_t *)VAR_8->cb);
  FUNC_4(VAR_7, VAR_9, VAR_12, VAR_1);
  FUNC_1(VAR_8);
  VAR_4->buf[VAR_13] = ((void*)0);
 }
 FUNC_3(VAR_7, VAR_11, VAR_10, VAR_9);

 FUNC_6(VAR_3, "failed to init rx buffer\n");

 return VAR_15;
}
