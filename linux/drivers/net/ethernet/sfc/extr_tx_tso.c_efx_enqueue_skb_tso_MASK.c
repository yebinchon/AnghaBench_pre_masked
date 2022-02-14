
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tso_state {scalar_t__ in_len; scalar_t__ packet_space; scalar_t__ header_unmap_len; int header_dma_addr; scalar_t__ unmap_len; int unmap_addr; int protocol; } ;
struct sk_buff {int data; } ;
struct efx_tx_queue {int tso_version; scalar_t__ write_count; scalar_t__ insert_count; struct efx_nic* efx; } ;
struct efx_nic {TYPE_1__* pci_dev; int net_dev; } ;
struct TYPE_4__ {int nr_frags; scalar_t__ frags; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,scalar_t__,int ) ;
 int FUNC_2 (int *,int ,scalar_t__,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct efx_nic*,int ,int ,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct efx_tx_queue*) ;
 TYPE_2__* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct efx_tx_queue*,struct sk_buff*,struct tso_state*) ;
 int FUNC_10 (struct tso_state*,struct efx_nic*,scalar_t__) ;
 int FUNC_11 (struct tso_state*,struct efx_nic*,struct efx_tx_queue*,struct sk_buff*) ;
 int FUNC_12 (struct efx_tx_queue*,struct sk_buff*,struct tso_state*) ;
 int VAR_3 ;

int FUNC_13(struct efx_tx_queue *VAR_4,
   struct sk_buff *VAR_5,
   bool *VAR_6)
{
 struct efx_nic *VAR_7 = VAR_4->efx;
 int VAR_8, VAR_9;
 struct tso_state VAR_10;

 if (VAR_4->tso_version != 1)
  return -VAR_1;

 FUNC_6(VAR_5->data);


 VAR_10.protocol = FUNC_3(VAR_5);

 FUNC_0(VAR_4->write_count != VAR_4->insert_count);

 VAR_9 = FUNC_11(&VAR_10, VAR_7, VAR_4, VAR_5);
 if (VAR_9)
  goto fail;

 if (FUNC_4(VAR_10.in_len == 0)) {

  FUNC_0(FUNC_8(VAR_5)->nr_frags < 1);
  VAR_8 = 0;
  VAR_9 = FUNC_10(&VAR_10, VAR_7,
          FUNC_8(VAR_5)->frags + VAR_8);
  if (VAR_9)
   goto fail;
 } else {

  VAR_8 = -1;
 }

 VAR_9 = FUNC_12(VAR_4, VAR_5, &VAR_10);
 if (VAR_9)
  goto fail;

 FUNC_7(VAR_4);

 while (1) {
  FUNC_9(VAR_4, VAR_5, &VAR_10);


  if (VAR_10.in_len == 0) {
   if (++VAR_8 >= FUNC_8(VAR_5)->nr_frags)

    break;
   VAR_9 = FUNC_10(&VAR_10, VAR_7,
           FUNC_8(VAR_5)->frags + VAR_8);
   if (VAR_9)
    goto fail;
  }


  if (VAR_10.packet_space == 0) {
   VAR_9 = FUNC_12(VAR_4, VAR_5, &VAR_10);
   if (VAR_9)
    goto fail;
  }
 }

 *VAR_6 = 1;

 return 0;

fail:
 if (VAR_9 == -VAR_2)
  FUNC_5(VAR_7, VAR_3, VAR_7->net_dev,
     "Out of memory for TSO headers, or DMA mapping error\n");
 else
  FUNC_5(VAR_7, VAR_3, VAR_7->net_dev, "TSO failed, rc = %d\n", VAR_9);


 if (VAR_10.unmap_len) {
  FUNC_1(&VAR_7->pci_dev->dev, VAR_10.unmap_addr,
          VAR_10.unmap_len, VAR_0);
 }


 if (VAR_10.header_unmap_len)
  FUNC_2(&VAR_7->pci_dev->dev, VAR_10.header_dma_addr,
     VAR_10.header_unmap_len, VAR_0);

 return VAR_9;
}
