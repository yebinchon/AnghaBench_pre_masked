
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int drv_state; } ;
struct bnx2 {int cnic_lock; TYPE_1__ cnic_eth_dev; int dev; int tx_ring_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2*) ;
 int FUNC_1 (struct bnx2*) ;
 int FUNC_2 (struct bnx2*) ;
 int FUNC_3 (struct bnx2*) ;
 int FUNC_4 (struct bnx2*) ;
 int FUNC_5 (struct bnx2*) ;
 int FUNC_6 (struct bnx2*) ;
 int FUNC_7 (struct bnx2*,int ) ;
 int FUNC_8 (struct bnx2*) ;
 int FUNC_9 (struct bnx2*,int) ;
 int FUNC_10 (struct bnx2*,int) ;
 int FUNC_11 (struct bnx2*) ;
 int FUNC_12 (struct bnx2*,int ) ;
 int FUNC_13 (struct bnx2*) ;
 int FUNC_14 (struct bnx2*,int ) ;
 int FUNC_15 (struct bnx2*) ;
 int FUNC_16 (struct bnx2*,int ) ;
 int FUNC_17 (int ) ;
 int VAR_2 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int ) ;

__attribute__((used)) static int
FUNC_21(struct bnx2 *VAR_3, u32 VAR_4, u32 VAR_5, bool VAR_6)
{
 if (FUNC_20(VAR_3->dev)) {

  FUNC_13(VAR_3);

  FUNC_10(VAR_3, 1);
  FUNC_12(VAR_3, VAR_0);
  if (VAR_6) {
   FUNC_3(VAR_3);
   FUNC_2(VAR_3);
  } else {
   FUNC_0(VAR_3);
  }
  FUNC_5(VAR_3);
  FUNC_4(VAR_3);
 }

 FUNC_14(VAR_3, VAR_4);
 VAR_3->tx_ring_size = VAR_5;

 if (FUNC_20(VAR_3->dev)) {
  int VAR_7 = 0;

  if (VAR_6) {
   VAR_7 = FUNC_16(VAR_3, VAR_2);
   FUNC_6(VAR_3);
  }

  if (!VAR_7)
   VAR_7 = FUNC_1(VAR_3);

  if (!VAR_7)
   VAR_7 = FUNC_11(VAR_3);

  if (!VAR_7)
   VAR_7 = FUNC_7(VAR_3, 0);

  if (VAR_7) {
   FUNC_8(VAR_3);
   FUNC_17(VAR_3->dev);
   return VAR_7;
  }







  FUNC_9(VAR_3, 1);
 }
 return 0;
}
