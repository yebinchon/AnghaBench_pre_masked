
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct whc_urb {int dequeue_work; struct urb* urb; struct whc_qset* qset; } ;
struct whc_std {size_t dma_addr; size_t len; int ntds_remaining; } ;
struct whc_qset {int dummy; } ;
struct whc {int dummy; } ;
struct urb {int transfer_buffer_length; size_t transfer_dma; scalar_t__ num_sgs; struct whc_urb* hcpriv; } ;
typedef int gfp_t ;


 int FUNC_0 (int,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 size_t VAR_2 ;
 struct whc_urb* FUNC_2 (int,int ) ;
 int FUNC_3 (struct whc*,struct whc_qset*,struct urb*,int ) ;
 int FUNC_4 (struct whc*,struct whc_qset*,struct urb*,int ) ;
 scalar_t__ FUNC_5 (struct whc*,struct whc_std*,int ) ;
 int FUNC_6 (struct whc_qset*,struct urb*) ;
 struct whc_std* FUNC_7 (struct whc*,struct whc_qset*,struct urb*,int ) ;
 int VAR_3 ;

int FUNC_8(struct whc *VAR_4, struct whc_qset *VAR_5, struct urb *VAR_6,
 gfp_t VAR_7)
{
 struct whc_urb *VAR_8;
 int VAR_9 = VAR_6->transfer_buffer_length;
 u64 VAR_10 = VAR_6->transfer_dma;
 int VAR_11;
 int VAR_12;

 VAR_8 = FUNC_2(sizeof(struct whc_urb), VAR_7);
 if (VAR_8 == ((void*)0))
  goto err_no_mem;
 VAR_6->hcpriv = VAR_8;
 VAR_8->qset = VAR_5;
 VAR_8->urb = VAR_6;
 FUNC_1(&VAR_8->dequeue_work, VAR_3);

 if (VAR_6->num_sgs) {
  VAR_12 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7);
  if (VAR_12 == -VAR_0) {
   FUNC_6(VAR_5, VAR_6);
   VAR_12 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7);
  }
  if (VAR_12 < 0)
   goto err_no_mem;
  return 0;
 }

 VAR_11 = FUNC_0(VAR_9, VAR_2);
 if (VAR_11 == 0)
  VAR_11 = 1;

 while (VAR_11) {
  struct whc_std *VAR_13;
  size_t VAR_14;

  VAR_14 = VAR_9;
  if (VAR_14 > VAR_2)
   VAR_14 = VAR_2;

  VAR_13 = FUNC_7(VAR_4, VAR_5, VAR_6, VAR_7);
  if (VAR_13 == ((void*)0))
   goto err_no_mem;

  VAR_13->dma_addr = VAR_10;
  VAR_13->len = VAR_14;
  VAR_13->ntds_remaining = VAR_11;

  if (FUNC_5(VAR_4, VAR_13, VAR_7) < 0)
   goto err_no_mem;

  VAR_11--;
  VAR_9 -= VAR_14;
  VAR_10 += VAR_14;
 }

 return 0;

err_no_mem:
 FUNC_6(VAR_5, VAR_6);
 return -VAR_1;
}
