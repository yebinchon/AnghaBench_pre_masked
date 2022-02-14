
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct ena_eth_io_tx_desc {int len_ctrl; int buff_addr_hi_hdr_sz; int meta_ctrl; scalar_t__ buff_addr_lo; } ;
struct ena_com_tx_ctx {int header_len; int num_bufs; int req_id; int df; int tso_enable; int l3_proto; int l4_proto; int l3_csum_enable; int l4_csum_enable; int l4_csum_partial; scalar_t__ meta_valid; void* push_header; struct ena_com_buf* ena_bufs; } ;
struct ena_com_io_sq {int tail; scalar_t__ direction; int tx_max_header_size; scalar_t__ mem_queue_type; int phase; scalar_t__ dma_addr_bits; } ;
struct ena_com_buf {int len; int paddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct ena_com_io_sq*) ;
 int FUNC_3 (struct ena_com_io_sq*,struct ena_com_tx_ctx*) ;
 scalar_t__ FUNC_4 (struct ena_com_io_sq*,struct ena_com_tx_ctx*) ;
 int FUNC_5 (struct ena_com_io_sq*,int) ;
 int FUNC_6 (struct ena_com_io_sq*) ;
 int FUNC_7 (struct ena_com_io_sq*,void*,int) ;
 struct ena_eth_io_tx_desc* FUNC_8 (struct ena_com_io_sq*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct ena_eth_io_tx_desc*,int,int) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,int,int) ;
 scalar_t__ FUNC_13 (int) ;

int FUNC_14(struct ena_com_io_sq *VAR_31,
         struct ena_com_tx_ctx *VAR_32,
         int *VAR_33)
{
 struct ena_eth_io_tx_desc *VAR_34 = ((void*)0);
 struct ena_com_buf *VAR_35 = VAR_32->ena_bufs;
 void *VAR_36 = VAR_32->push_header;
 u16 VAR_37 = VAR_32->header_len;
 u16 VAR_38 = VAR_32->num_bufs;
 u16 VAR_39 = VAR_31->tail;
 int VAR_40, VAR_41;
 bool VAR_42;
 u64 VAR_43;

 FUNC_1(VAR_31->direction != VAR_3, "wrong Q type");


 if (FUNC_13(!FUNC_5(VAR_31, VAR_38 + 1))) {
  FUNC_11("Not enough space in the tx queue\n");
  return -VAR_30;
 }

 if (FUNC_13(VAR_37 > VAR_31->tx_max_header_size)) {
  FUNC_12("header size is too large %d max header: %d\n",
         VAR_37, VAR_31->tx_max_header_size);
  return -VAR_1;
 }

 if (FUNC_13(VAR_31->mem_queue_type == VAR_2 &&
       !VAR_36))
  return -VAR_1;

 VAR_41 = FUNC_7(VAR_31, VAR_36, VAR_37);
 if (FUNC_13(VAR_41))
  return VAR_41;

 VAR_42 = VAR_32->meta_valid && FUNC_4(VAR_31,
   VAR_32);
 if (VAR_42) {
  VAR_41 = FUNC_3(VAR_31, VAR_32);
  if (FUNC_13(VAR_41))
   return VAR_41;
 }


 if (FUNC_13(!VAR_38 && !VAR_37)) {
  VAR_41 = FUNC_2(VAR_31);
  *VAR_33 = VAR_31->tail - VAR_39;
  return VAR_41;
 }

 VAR_34 = FUNC_8(VAR_31);
 if (FUNC_13(!VAR_34))
  return -VAR_0;
 FUNC_10(VAR_34, 0x0, sizeof(struct ena_eth_io_tx_desc));


 if (!VAR_42)
  VAR_34->len_ctrl |= VAR_8;

 VAR_34->buff_addr_hi_hdr_sz |= (VAR_37 <<
  VAR_10) &
  VAR_9;
 VAR_34->len_ctrl |= (VAR_31->phase << VAR_23) &
  VAR_22;

 VAR_34->len_ctrl |= VAR_5;


 VAR_34->meta_ctrl |= (VAR_32->req_id <<
  VAR_27) &
  VAR_26;

 VAR_34->meta_ctrl |= (VAR_32->df <<
  VAR_7) &
  VAR_6;


 VAR_34->len_ctrl |= ((VAR_32->req_id >> 10) <<
  VAR_25) &
  VAR_24;

 if (VAR_32->meta_valid) {
  VAR_34->meta_ctrl |= (VAR_32->tso_enable <<
   VAR_29) &
   VAR_28;
  VAR_34->meta_ctrl |= VAR_32->l3_proto &
   VAR_13;
  VAR_34->meta_ctrl |= (VAR_32->l4_proto <<
   VAR_19) &
   VAR_18;
  VAR_34->meta_ctrl |= (VAR_32->l3_csum_enable <<
   VAR_12) &
   VAR_11;
  VAR_34->meta_ctrl |= (VAR_32->l4_csum_enable <<
   VAR_15) &
   VAR_14;
  VAR_34->meta_ctrl |= (VAR_32->l4_csum_partial <<
   VAR_17) &
   VAR_16;
 }

 for (VAR_40 = 0; VAR_40 < VAR_38; VAR_40++) {

  if (FUNC_9(VAR_40 != 0)) {
   VAR_41 = FUNC_6(VAR_31);
   if (FUNC_13(VAR_41))
    return VAR_41;

   VAR_34 = FUNC_8(VAR_31);
   if (FUNC_13(!VAR_34))
    return -VAR_0;

   FUNC_10(VAR_34, 0x0, sizeof(struct ena_eth_io_tx_desc));

   VAR_34->len_ctrl |= (VAR_31->phase <<
    VAR_23) &
    VAR_22;
  }

  VAR_34->len_ctrl |= VAR_35->len &
   VAR_21;

  VAR_43 = ((VAR_35->paddr &
   FUNC_0(VAR_31->dma_addr_bits - 1, 32)) >> 32);

  VAR_34->buff_addr_lo = (u32)VAR_35->paddr;
  VAR_34->buff_addr_hi_hdr_sz |= VAR_43 &
   VAR_4;
  VAR_35++;
 }


 VAR_34->len_ctrl |= VAR_20;

 VAR_41 = FUNC_6(VAR_31);
 if (FUNC_13(VAR_41))
  return VAR_41;

 VAR_41 = FUNC_2(VAR_31);

 *VAR_33 = VAR_31->tail - VAR_39;
 return VAR_41;
}
