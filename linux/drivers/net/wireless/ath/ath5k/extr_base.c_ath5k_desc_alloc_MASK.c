
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath5k_hw {int desc_len; int desc_daddr; int txbuf_len; struct ath5k_desc* desc; int dev; int bcbuf; int txbuf; int rxbuf; struct ath5k_buf* bufptr; } ;
struct ath5k_desc {int dummy; } ;
struct ath5k_buf {int daddr; int list; struct ath5k_desc* desc; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct ath5k_hw*,int ,char*,struct ath5k_desc*,int,unsigned long long) ;
 int VAR_0 ;
 int FUNC_1 (struct ath5k_hw*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 struct ath5k_desc* FUNC_3 (int ,int,int*,int ) ;
 int FUNC_4 (int ,int,struct ath5k_desc*,int) ;
 struct ath5k_buf* FUNC_5 (int,int,int ) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int
FUNC_7(struct ath5k_hw *VAR_6)
{
 struct ath5k_desc *VAR_7;
 struct ath5k_buf *VAR_8;
 dma_addr_t VAR_9;
 unsigned int VAR_10;
 int VAR_11;


 VAR_6->desc_len = sizeof(struct ath5k_desc) *
   (VAR_3 + VAR_2 + VAR_1 + 1);

 VAR_6->desc = FUNC_3(VAR_6->dev, VAR_6->desc_len,
    &VAR_6->desc_daddr, VAR_5);
 if (VAR_6->desc == ((void*)0)) {
  FUNC_1(VAR_6, "can't allocate descriptors\n");
  VAR_11 = -VAR_4;
  goto err;
 }
 VAR_7 = VAR_6->desc;
 VAR_9 = VAR_6->desc_daddr;
 FUNC_0(VAR_6, VAR_0, "DMA map: %p (%zu) -> %llx\n",
  VAR_7, VAR_6->desc_len, (unsigned long long)VAR_6->desc_daddr);

 VAR_8 = FUNC_5(1 + VAR_3 + VAR_2 + VAR_1,
   sizeof(struct ath5k_buf), VAR_5);
 if (VAR_8 == ((void*)0)) {
  FUNC_1(VAR_6, "can't allocate bufptr\n");
  VAR_11 = -VAR_4;
  goto err_free;
 }
 VAR_6->bufptr = VAR_8;

 FUNC_2(&VAR_6->rxbuf);
 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++, VAR_8++, VAR_7++, VAR_9 += sizeof(*VAR_7)) {
  VAR_8->desc = VAR_7;
  VAR_8->daddr = VAR_9;
  FUNC_6(&VAR_8->list, &VAR_6->rxbuf);
 }

 FUNC_2(&VAR_6->txbuf);
 VAR_6->txbuf_len = VAR_3;
 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++, VAR_8++, VAR_7++, VAR_9 += sizeof(*VAR_7)) {
  VAR_8->desc = VAR_7;
  VAR_8->daddr = VAR_9;
  FUNC_6(&VAR_8->list, &VAR_6->txbuf);
 }


 FUNC_2(&VAR_6->bcbuf);
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++, VAR_8++, VAR_7++, VAR_9 += sizeof(*VAR_7)) {
  VAR_8->desc = VAR_7;
  VAR_8->daddr = VAR_9;
  FUNC_6(&VAR_8->list, &VAR_6->bcbuf);
 }

 return 0;
err_free:
 FUNC_4(VAR_6->dev, VAR_6->desc_len, VAR_6->desc, VAR_6->desc_daddr);
err:
 VAR_6->desc = ((void*)0);
 return VAR_11;
}
