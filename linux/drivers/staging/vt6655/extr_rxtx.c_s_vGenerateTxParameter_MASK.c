
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vnt_tx_fifo_head {int current_rate; int fifo_ctl; } ;
struct vnt_rrv_time_rts {void* rrv_time_b; void* rrv_time_a; void* rts_rrv_time_bb; void* rts_rrv_time_ba; void* rts_rrv_time_aa; } ;
struct vnt_rrv_time_cts {void* cts_rrv_time_ba; void* rrv_time_b; void* rrv_time_a; } ;
struct vnt_rrv_time_ab {void* rrv_time; void* rts_rrv_time; } ;
struct vnt_private {unsigned short byTopCCKBasicRate; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 int FUNC_0 (unsigned short) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (struct vnt_private*,int,unsigned char,unsigned int,unsigned short) ;
 int FUNC_3 (struct vnt_private*,unsigned int,unsigned char,void*,unsigned int,int,int,unsigned short,unsigned char) ;
 int FUNC_4 (struct vnt_private*,unsigned char,void*,unsigned int,int,int,void*,unsigned short,unsigned char) ;
 void* FUNC_5 (struct vnt_private*,unsigned char,unsigned int,unsigned short,int) ;

__attribute__((used)) static
void
FUNC_6(
 struct vnt_private *VAR_10,
 unsigned char VAR_11,
 struct vnt_tx_fifo_head *VAR_12,
 void *VAR_13,
 void *VAR_14,
 void *VAR_15,
 unsigned int VAR_16,
 bool VAR_17,
 unsigned int VAR_18,
 void *VAR_19,
 unsigned short VAR_20
)
{
 u16 VAR_21 = FUNC_1(VAR_12->fifo_ctl);
 bool VAR_22 = 0;
 unsigned char VAR_23 = VAR_2;

 VAR_12->current_rate = FUNC_0(VAR_20);

 if (VAR_21 & VAR_5)
  VAR_22 = 1;

 if (VAR_21 & VAR_3)
  VAR_23 = VAR_0;
 else if (VAR_21 & VAR_4)
  VAR_23 = VAR_1;

 if (!VAR_13)
  return;

 if (VAR_11 == VAR_9 || VAR_11 == VAR_8) {
  if (VAR_14) {

   struct vnt_rrv_time_rts *VAR_24 = VAR_13;

   VAR_24->rts_rrv_time_aa = FUNC_2(VAR_10, 2, VAR_11, VAR_16, VAR_20);
   VAR_24->rts_rrv_time_ba = FUNC_2(VAR_10, 1, VAR_11, VAR_16, VAR_20);
   VAR_24->rts_rrv_time_bb = FUNC_2(VAR_10, 0, VAR_11, VAR_16, VAR_20);
   VAR_24->rrv_time_a = FUNC_5(VAR_10, VAR_11, VAR_16, VAR_20, VAR_17);
   VAR_24->rrv_time_b = FUNC_5(VAR_10, VAR_7, VAR_16, VAR_10->byTopCCKBasicRate, VAR_17);

   FUNC_4(VAR_10, VAR_11, VAR_14, VAR_16, VAR_17, VAR_22, VAR_19, VAR_20, VAR_23);
  } else {
   struct vnt_rrv_time_cts *VAR_25 = VAR_13;

   VAR_25->rrv_time_a = FUNC_5(VAR_10, VAR_11, VAR_16, VAR_20, VAR_17);
   VAR_25->rrv_time_b = FUNC_5(VAR_10, VAR_7, VAR_16, VAR_10->byTopCCKBasicRate, VAR_17);
   VAR_25->cts_rrv_time_ba = FUNC_2(VAR_10, 3, VAR_11, VAR_16, VAR_20);


   FUNC_3(VAR_10, VAR_18, VAR_11, VAR_15, VAR_16, VAR_17, VAR_22, VAR_20, VAR_23);
  }
 } else if (VAR_11 == VAR_6) {
  if (VAR_14) {
   struct vnt_rrv_time_ab *VAR_26 = VAR_13;

   VAR_26->rts_rrv_time = FUNC_2(VAR_10, 2, VAR_11, VAR_16, VAR_20);
   VAR_26->rrv_time = FUNC_5(VAR_10, VAR_11, VAR_16, VAR_20, VAR_17);


   FUNC_4(VAR_10, VAR_11, VAR_14, VAR_16, VAR_17, VAR_22, VAR_19, VAR_20, VAR_23);
  } else if (!VAR_14) {
   struct vnt_rrv_time_ab *VAR_27 = VAR_13;

   VAR_27->rrv_time = FUNC_5(VAR_10, VAR_6, VAR_16, VAR_20, VAR_17);
  }
 } else if (VAR_11 == VAR_7) {
  if (VAR_14) {
   struct vnt_rrv_time_ab *VAR_28 = VAR_13;

   VAR_28->rts_rrv_time = FUNC_2(VAR_10, 0, VAR_11, VAR_16, VAR_20);
   VAR_28->rrv_time = FUNC_5(VAR_10, VAR_7, VAR_16, VAR_20, VAR_17);


   FUNC_4(VAR_10, VAR_11, VAR_14, VAR_16, VAR_17, VAR_22, VAR_19, VAR_20, VAR_23);
  } else {
   struct vnt_rrv_time_ab *VAR_29 = VAR_13;

   VAR_29->rrv_time = FUNC_5(VAR_10, VAR_7, VAR_16, VAR_20, VAR_17);
  }
 }
}
