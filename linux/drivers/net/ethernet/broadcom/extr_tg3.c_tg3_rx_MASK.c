
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef size_t u32 ;
typedef size_t u16 ;
struct tg3_rx_prodring_set {size_t rx_std_prod_idx; size_t rx_jmb_prod_idx; struct ring_info* rx_jmb_buffers; struct ring_info* rx_std_buffers; } ;
struct tg3_rx_buffer_desc {size_t opaque; int err_vlan; unsigned int idx_len; int type_flags; int ip_tcp_csum; } ;
struct tg3_napi {size_t rx_rcb_ptr; size_t* rx_rcb_prod_idx; int napi; int consmbox; struct tg3_rx_prodring_set prodring; struct tg3_rx_buffer_desc* rx_rcb; struct tg3* tp; } ;
struct tg3 {int rx_mode; size_t rx_std_max_post; size_t rx_std_ring_mask; size_t rx_ret_ring_mask; size_t rx_jmb_ring_mask; int rx_refill; struct tg3_napi* napi; TYPE_1__* dev; int pdev; int rx_dropped; } ;
struct sk_buff {scalar_t__ protocol; int ip_summed; int data; } ;
struct ring_info {int * data; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int features; unsigned int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
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
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 unsigned int FUNC_0 (struct tg3*) ;
 int VAR_25 ;
 int FUNC_1 (struct tg3*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_2 (struct sk_buff*,scalar_t__,int) ;
 struct sk_buff* FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct ring_info*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_29 ;
 int FUNC_8 (int ,int *,unsigned int) ;
 int FUNC_9 (int *,struct sk_buff*) ;
 int FUNC_10 (int *) ;
 struct sk_buff* FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (int ,int ,unsigned int,int ) ;
 int FUNC_13 (int ,int ,unsigned int,int ) ;
 int FUNC_14 (int ,int ,int,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 () ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*,unsigned int) ;
 int FUNC_20 (struct sk_buff*,int) ;
 int FUNC_21 () ;
 int FUNC_22 (struct tg3*,struct tg3_rx_prodring_set*,size_t,size_t,unsigned int*) ;
 int FUNC_23 (struct tg3*,int ) ;
 int FUNC_24 (int,int *) ;
 int FUNC_25 (struct tg3*,int,int ) ;
 int FUNC_26 (struct tg3_napi*,struct tg3_rx_prodring_set*,size_t,size_t,size_t) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ,size_t) ;
 scalar_t__ FUNC_29 (int) ;
 int FUNC_30 () ;

__attribute__((used)) static int FUNC_31(struct tg3_napi *VAR_30, int VAR_31)
{
 struct tg3 *VAR_32 = VAR_30->tp;
 u32 VAR_33, VAR_34 = 0;
 u32 VAR_35, VAR_36;
 u32 VAR_37 = VAR_30->rx_rcb_ptr;
 u16 VAR_38;
 int VAR_39;
 struct tg3_rx_prodring_set *VAR_40 = &VAR_30->prodring;

 VAR_38 = *(VAR_30->rx_rcb_prod_idx);




 FUNC_16();
 VAR_33 = 0;
 VAR_39 = 0;
 VAR_35 = VAR_40->rx_std_prod_idx;
 VAR_36 = VAR_40->rx_jmb_prod_idx;
 while (VAR_37 != VAR_38 && VAR_31 > 0) {
  struct ring_info *VAR_41;
  struct tg3_rx_buffer_desc *VAR_42 = &VAR_30->rx_rcb[VAR_37];
  unsigned int VAR_43;
  struct sk_buff *VAR_44;
  dma_addr_t VAR_45;
  u32 VAR_46, VAR_47, *VAR_48;
  u8 *VAR_49;
  u64 VAR_50 = 0;

  VAR_47 = VAR_42->opaque & VAR_16;
  VAR_46 = VAR_42->opaque & VAR_18;
  if (VAR_46 == VAR_19) {
   VAR_41 = &VAR_32->napi[0].prodring.rx_std_buffers[VAR_47];
   VAR_45 = FUNC_5(VAR_41, VAR_29);
   VAR_49 = VAR_41->data;
   VAR_48 = &VAR_35;
   VAR_34++;
  } else if (VAR_46 == VAR_17) {
   VAR_41 = &VAR_32->napi[0].prodring.rx_jmb_buffers[VAR_47];
   VAR_45 = FUNC_5(VAR_41, VAR_29);
   VAR_49 = VAR_41->data;
   VAR_48 = &VAR_36;
  } else
   goto next_pkt_nopost;

  VAR_33 |= VAR_46;

  if (VAR_42->err_vlan & VAR_8) {
  drop_it:
   FUNC_26(VAR_30, VAR_40, VAR_46,
           VAR_47, *VAR_48);
  drop_it_no_recycle:

   VAR_32->rx_dropped++;
   goto next_pkt;
  }

  FUNC_15(VAR_49 + FUNC_1(VAR_32));
  VAR_43 = ((VAR_42->idx_len & VAR_14) >> VAR_15) -
        VAR_2;

  if ((VAR_42->type_flags & VAR_9) ==
       VAR_10 ||
      (VAR_42->type_flags & VAR_9) ==
       VAR_11) {
   VAR_50 = FUNC_27(VAR_27);
   VAR_50 |= (u64)FUNC_27(VAR_28) << 32;
  }

  if (VAR_43 > FUNC_0(VAR_32)) {
   int VAR_51;
   unsigned int VAR_52;

   VAR_51 = FUNC_22(VAR_32, VAR_40, VAR_46,
          *VAR_48, &VAR_52);
   if (VAR_51 < 0)
    goto drop_it;

   FUNC_14(VAR_32->pdev, VAR_45, VAR_51,
      VAR_7);




   FUNC_21();

   VAR_41->data = ((void*)0);

   VAR_44 = FUNC_3(VAR_49, VAR_52);
   if (!VAR_44) {
    FUNC_24(VAR_52 != 0, VAR_49);
    goto drop_it_no_recycle;
   }
   FUNC_20(VAR_44, FUNC_1(VAR_32));
  } else {
   FUNC_26(VAR_30, VAR_40, VAR_46,
           VAR_47, *VAR_48);

   VAR_44 = FUNC_11(VAR_32->dev,
            VAR_43 + VAR_24);
   if (VAR_44 == ((void*)0))
    goto drop_it_no_recycle;

   FUNC_20(VAR_44, VAR_24);
   FUNC_12(VAR_32->pdev, VAR_45, VAR_43, VAR_7);
   FUNC_8(VAR_44->data,
          VAR_49 + FUNC_1(VAR_32),
          VAR_43);
   FUNC_13(VAR_32->pdev, VAR_45, VAR_43, VAR_7);
  }

  FUNC_19(VAR_44, VAR_43);
  if (VAR_50)
   FUNC_25(VAR_32, VAR_50,
       FUNC_18(VAR_44));

  if ((VAR_32->dev->features & VAR_6) &&
      (VAR_42->type_flags & VAR_12) &&
      (((VAR_42->ip_tcp_csum & VAR_20)
        >> VAR_21) == 0xffff))
   VAR_44->ip_summed = VAR_0;
  else
   FUNC_17(VAR_44);

  VAR_44->protocol = FUNC_6(VAR_44, VAR_32->dev);

  if (VAR_43 > (VAR_32->dev->mtu + VAR_3) &&
      VAR_44->protocol != FUNC_7(VAR_5) &&
      VAR_44->protocol != FUNC_7(VAR_4)) {
   FUNC_4(VAR_44);
   goto drop_it_no_recycle;
  }

  if (VAR_42->type_flags & VAR_13 &&
      !(VAR_32->rx_mode & VAR_23))
   FUNC_2(VAR_44, FUNC_7(VAR_5),
            VAR_42->err_vlan & VAR_22);

  FUNC_9(&VAR_30->napi, VAR_44);

  VAR_39++;
  VAR_31--;

next_pkt:
  (*VAR_48)++;

  if (FUNC_29(VAR_34 >= VAR_32->rx_std_max_post)) {
   VAR_40->rx_std_prod_idx = VAR_35 &
            VAR_32->rx_std_ring_mask;
   FUNC_28(VAR_26,
         VAR_40->rx_std_prod_idx);
   VAR_33 &= ~VAR_19;
   VAR_34 = 0;
  }
next_pkt_nopost:
  VAR_37++;
  VAR_37 &= VAR_32->rx_ret_ring_mask;


  if (VAR_37 == VAR_38) {
   VAR_38 = *(VAR_30->rx_rcb_prod_idx);
   FUNC_16();
  }
 }


 VAR_30->rx_rcb_ptr = VAR_37;
 FUNC_28(VAR_30->consmbox, VAR_37);


 if (!FUNC_23(VAR_32, VAR_1)) {

  FUNC_30();

  if (VAR_33 & VAR_19) {
   VAR_40->rx_std_prod_idx = VAR_35 &
            VAR_32->rx_std_ring_mask;
   FUNC_28(VAR_26,
         VAR_40->rx_std_prod_idx);
  }
  if (VAR_33 & VAR_17) {
   VAR_40->rx_jmb_prod_idx = VAR_36 &
            VAR_32->rx_jmb_ring_mask;
   FUNC_28(VAR_25,
         VAR_40->rx_jmb_prod_idx);
  }
 } else if (VAR_33) {



  FUNC_21();

  VAR_40->rx_std_prod_idx = VAR_35 & VAR_32->rx_std_ring_mask;
  VAR_40->rx_jmb_prod_idx = VAR_36 & VAR_32->rx_jmb_ring_mask;

  if (VAR_30 != &VAR_32->napi[1]) {
   VAR_32->rx_refill = 1;
   FUNC_10(&VAR_32->napi[1].napi);
  }
 }

 return VAR_39;
}
