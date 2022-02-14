
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct tx_cmp {int dummy; } ;
struct bnxt_tx_ring_info {int tx_db; int tx_prod; } ;
struct bnxt_napi {int tx_pkts; int events; struct bnxt_tx_ring_info* tx_ring; } ;
struct bnxt_cp_ring_info {int has_more_work; int had_work_done; int cp_raw_cons; struct tx_cmp** cp_desc_ring; struct bnxt_napi* bnapi; } ;
struct bnxt {int tx_wake_thresh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tx_cmp*) ;
 int FUNC_5 (struct tx_cmp*,int ) ;
 int FUNC_6 (struct bnxt*,int *,int ) ;
 int FUNC_7 (struct bnxt*,struct bnxt_cp_ring_info*,int *,int*) ;
 int FUNC_8 (struct bnxt*,struct tx_cmp*) ;
 int FUNC_9 (struct bnxt*,struct bnxt_cp_ring_info*,int *,int*) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 () ;
 int FUNC_14 () ;

__attribute__((used)) static int FUNC_15(struct bnxt *VAR_8, struct bnxt_cp_ring_info *VAR_9,
       int VAR_10)
{
 struct bnxt_napi *VAR_11 = VAR_9->bnapi;
 u32 VAR_12 = VAR_9->cp_raw_cons;
 u32 VAR_13;
 int VAR_14 = 0;
 int VAR_15 = 0;
 u8 VAR_16 = 0;
 struct tx_cmp *VAR_17;

 VAR_9->has_more_work = 0;
 while (1) {
  int VAR_18;

  VAR_13 = FUNC_3(VAR_12);
  VAR_17 = &VAR_9->cp_desc_ring[FUNC_1(VAR_13)][FUNC_0(VAR_13)];

  if (!FUNC_5(VAR_17, VAR_12))
   break;




  FUNC_10();
  VAR_9->had_work_done = 1;
  if (FUNC_4(VAR_17) == VAR_5) {
   VAR_14++;

   if (FUNC_12(VAR_14 > VAR_8->tx_wake_thresh)) {
    VAR_15 = VAR_10;
    VAR_12 = FUNC_2(VAR_12);
    if (VAR_10)
     VAR_9->has_more_work = 1;
    break;
   }
  } else if ((FUNC_4(VAR_17) & 0x30) == 0x10) {
   if (FUNC_11(VAR_10))
    VAR_18 = FUNC_9(VAR_8, VAR_9, &VAR_12, &VAR_16);
   else
    VAR_18 = FUNC_7(VAR_8, VAR_9, &VAR_12,
          &VAR_16);
   if (FUNC_11(VAR_18 >= 0))
    VAR_15 += VAR_18;





   else if (VAR_18 == -VAR_7 && VAR_10)
    VAR_15++;
   else if (VAR_18 == -VAR_6)
    break;
  } else if (FUNC_12((FUNC_4(VAR_17) ==
         VAR_3) ||
        (FUNC_4(VAR_17) ==
         VAR_4) ||
        (FUNC_4(VAR_17) ==
         VAR_2))) {
   FUNC_8(VAR_8, VAR_17);
  }
  VAR_12 = FUNC_2(VAR_12);

  if (VAR_15 && VAR_15 == VAR_10) {
   VAR_9->has_more_work = 1;
   break;
  }
 }

 if (VAR_16 & VAR_0)
  FUNC_14();

 if (VAR_16 & VAR_1) {
  struct bnxt_tx_ring_info *VAR_19 = VAR_11->tx_ring;
  u16 VAR_20 = VAR_19->tx_prod;


  FUNC_13();

  FUNC_6(VAR_8, &VAR_19->tx_db, VAR_20);
 }

 VAR_9->cp_raw_cons = VAR_12;
 VAR_11->tx_pkts += VAR_14;
 VAR_11->events |= VAR_16;
 return VAR_15;
}
