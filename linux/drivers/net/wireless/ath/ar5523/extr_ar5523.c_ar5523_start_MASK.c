
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int val ;
struct ieee80211_hw {struct ar5523* priv; } ;
struct ar5523 {int mutex; int rx_refill_work; int wq; int flags; TYPE_2__* hw; } ;
typedef int __be32 ;
struct TYPE_4__ {TYPE_1__* wiphy; } ;
struct TYPE_3__ {int perm_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int FUNC_0 (struct ar5523*,int ,int *,int ,int *,int,int ) ;
 int FUNC_1 (struct ar5523*,int ,int *,int,int ) ;
 int FUNC_2 (struct ar5523*,int ,int) ;
 int FUNC_3 (struct ar5523*,int ,int *,int ) ;
 int FUNC_4 (struct ar5523*,char*,...) ;
 int FUNC_5 (struct ar5523*,int ,int ) ;
 int FUNC_6 (struct ar5523*,int,int ) ;
 int FUNC_7 (struct ar5523*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct ieee80211_hw *VAR_30)
{
 struct ar5523 *VAR_31 = VAR_30->priv;
 int VAR_32;
 __be32 VAR_33;

 FUNC_4(VAR_31, "start called\n");

 FUNC_10(&VAR_31->mutex);
 VAR_33 = FUNC_9(0);
 FUNC_1(VAR_31, VAR_26, &VAR_33, sizeof(VAR_33), 0);


 FUNC_3(VAR_31, VAR_6, &VAR_31->hw->wiphy->perm_addr,
       VAR_16);


 FUNC_2(VAR_31, VAR_10, 0x00000001);
 FUNC_2(VAR_31, VAR_3, 0x00000001);
 FUNC_2(VAR_31, VAR_2, 0x0000003f);
 FUNC_2(VAR_31, VAR_15, 0x00000000);

 FUNC_2(VAR_31, VAR_11, 1);
 FUNC_2(VAR_31, VAR_14, 0x00000000);
 FUNC_2(VAR_31, VAR_13, 0x0000003c);
 FUNC_2(VAR_31, VAR_12, 0x0000003c);
 FUNC_2(VAR_31, VAR_8, 0x00000000);
 FUNC_2(VAR_31, VAR_4, 0x00000000);
 FUNC_2(VAR_31, VAR_5, 0x00000003);
 FUNC_2(VAR_31, VAR_9, 0x00000000);
 FUNC_2(VAR_31, VAR_7, 0x00000002);

 VAR_32 = FUNC_0(VAR_31, VAR_29, ((void*)0), 0,
     &VAR_33, sizeof(VAR_33), VAR_0);
 if (VAR_32) {
  FUNC_4(VAR_31, "could not start target, error %d\n", VAR_32);
  goto err;
 }
 FUNC_4(VAR_31, "WDCMSG_TARGET_START returns handle: 0x%x\n",
     FUNC_8(VAR_33));

 FUNC_7(VAR_31);

 VAR_33 = FUNC_9(VAR_17);
 FUNC_1(VAR_31, VAR_28, &VAR_33, sizeof(VAR_33), 0);

 FUNC_1(VAR_31, VAR_27, ((void*)0), 0, 0);

 FUNC_13(VAR_1, &VAR_31->flags);
 FUNC_12(VAR_31->wq, &VAR_31->rx_refill_work);


 FUNC_6(VAR_31, 0, VAR_18);
 FUNC_6(VAR_31,
       VAR_23 | VAR_22 |
       VAR_20 | VAR_21,
       VAR_19);

 FUNC_5(VAR_31, VAR_24, VAR_25);
 FUNC_4(VAR_31, "start OK\n");

err:
 FUNC_11(&VAR_31->mutex);
 return VAR_32;
}
