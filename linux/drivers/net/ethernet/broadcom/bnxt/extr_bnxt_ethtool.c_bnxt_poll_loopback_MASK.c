
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tx_cmp {int dummy; } ;
struct bnxt_cp_ring_info {int cp_raw_cons; struct tx_cmp** cp_desc_ring; } ;
struct bnxt {int dummy; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct tx_cmp*) ;
 int FUNC_5 (struct tx_cmp*,int ) ;
 int FUNC_6 (struct bnxt*,struct bnxt_cp_ring_info*,int ,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct bnxt *VAR_2, struct bnxt_cp_ring_info *VAR_3,
         int VAR_4)
{
 struct tx_cmp *VAR_5;
 int VAR_6 = -VAR_1;
 u32 VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_7 = VAR_3->cp_raw_cons;
 for (VAR_9 = 0; VAR_9 < 200; VAR_9++) {
  VAR_8 = FUNC_3(VAR_7);
  VAR_5 = &VAR_3->cp_desc_ring[FUNC_1(VAR_8)][FUNC_0(VAR_8)];

  if (!FUNC_5(VAR_5, VAR_7)) {
   FUNC_8(5);
   continue;
  }




  FUNC_7();
  if (FUNC_4(VAR_5) == VAR_0) {
   VAR_6 = FUNC_6(VAR_2, VAR_3, VAR_7, VAR_4);
   VAR_7 = FUNC_2(VAR_7);
   VAR_7 = FUNC_2(VAR_7);
   break;
  }
  VAR_7 = FUNC_2(VAR_7);
 }
 VAR_3->cp_raw_cons = VAR_7;
 return VAR_6;
}
