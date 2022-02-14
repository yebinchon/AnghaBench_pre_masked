
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ len; int cb; } ;
struct scatterlist {int dummy; } ;
struct cfv_info {scalar_t__ tx_hr; scalar_t__ tx_tr; scalar_t__ mtu; scalar_t__ rx_hr; int genpool; int ndev; } ;
struct caif_payload_info {int hdr_len; } ;
struct buf_info {scalar_t__ size; void* vaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct buf_info*) ;
 struct buf_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct scatterlist*,void*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*,int ,void*,scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static struct buf_info *FUNC_7(struct cfv_info *VAR_2,
             struct sk_buff *VAR_3,
             struct scatterlist *VAR_4)
{
 struct caif_payload_info *VAR_5 = (void *)&VAR_3->cb;
 struct buf_info *VAR_6 = ((void*)0);
 u8 VAR_7, VAR_8;

 if (!VAR_2->genpool)
  goto err;

 if (FUNC_6(VAR_2->tx_hr + VAR_3->len + VAR_2->tx_tr > VAR_2->mtu)) {
  FUNC_3(VAR_2->ndev, "Invalid packet len (%d > %d)\n",
       VAR_2->tx_hr + VAR_3->len + VAR_2->tx_tr, VAR_2->mtu);
  goto err;
 }

 VAR_6 = FUNC_2(sizeof(struct buf_info), VAR_0);
 if (FUNC_6(!VAR_6))
  goto err;


 VAR_8 = VAR_2->tx_hr + VAR_5->hdr_len;
 VAR_7 = VAR_8 & (VAR_1 - 1);
 VAR_6->size = VAR_2->tx_hr + VAR_3->len + VAR_2->tx_tr + VAR_7;


 VAR_6->vaddr = (void *)FUNC_0(VAR_2->genpool, VAR_6->size);
 if (FUNC_6(!VAR_6->vaddr))
  goto err;


 FUNC_5(VAR_3, 0, VAR_6->vaddr + VAR_2->tx_hr + VAR_7, VAR_3->len);
 FUNC_4(VAR_4, VAR_6->vaddr + VAR_7,
      VAR_3->len + VAR_2->tx_hr + VAR_2->rx_hr);

 return VAR_6;
err:
 FUNC_1(VAR_6);
 return ((void*)0);
}
