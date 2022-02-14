
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int enable_cnt; } ;
struct net_device {int dummy; } ;
struct bnx2x {int flags; scalar_t__ doorbells; scalar_t__ regview; int wol; int sp_rtnl_task; int fip_mac; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int VAR_2 ;
 int FUNC_3 (struct bnx2x*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct bnx2x*,int) ;
 int FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (struct bnx2x*) ;
 int FUNC_8 (struct bnx2x*) ;
 int FUNC_9 (struct bnx2x*,int ,int ) ;
 int FUNC_10 (struct bnx2x*) ;
 int FUNC_11 (struct bnx2x*) ;
 int FUNC_12 (struct bnx2x*) ;
 int FUNC_13 (struct bnx2x*,int ) ;
 int FUNC_14 (struct bnx2x*,int ) ;
 int FUNC_15 (struct bnx2x*) ;
 int FUNC_16 (struct bnx2x*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (struct net_device*) ;
 int FUNC_20 (struct net_device*) ;
 int FUNC_21 (scalar_t__) ;
 int FUNC_22 (struct pci_dev*) ;
 int FUNC_23 (struct pci_dev*) ;
 int FUNC_24 (struct pci_dev*,int ) ;
 int FUNC_25 (struct pci_dev*,int ) ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 scalar_t__ VAR_7 ;
 int FUNC_28 (struct net_device*) ;

__attribute__((used)) static void FUNC_29(struct pci_dev *VAR_8,
      struct net_device *VAR_9,
      struct bnx2x *VAR_10,
      bool VAR_11)
{

 if (!FUNC_3(VAR_10)) {
  FUNC_26();
  FUNC_18(VAR_10->dev, VAR_10->fip_mac, VAR_2);
  FUNC_27();
 }






 if (FUNC_1(VAR_10) &&
     !FUNC_0(VAR_10) &&
     (VAR_10->flags & VAR_0))
  FUNC_9(VAR_10, VAR_1, 0);


 if (VAR_11) {
  FUNC_28(VAR_9);
 } else {
  FUNC_26();
  FUNC_19(VAR_9);
  FUNC_27();
 }

 FUNC_10(VAR_10);


 if (FUNC_1(VAR_10)) {
  FUNC_14(VAR_10, VAR_4);
  FUNC_13(VAR_10, VAR_3);




  FUNC_12(VAR_10);
 }


 FUNC_6(VAR_10);


 if (FUNC_1(VAR_10))
  FUNC_14(VAR_10, VAR_5);


 FUNC_17(&VAR_10->sp_rtnl_task);


 if (FUNC_2(VAR_10))
  FUNC_16(VAR_10);


 if (VAR_7 == VAR_6) {
  FUNC_25(VAR_8, VAR_10->wol);
  FUNC_24(VAR_8, VAR_5);
 }

 FUNC_7(VAR_10);
 if (VAR_11) {
  if (VAR_10->regview)
   FUNC_21(VAR_10->regview);




  if (FUNC_1(VAR_10)) {
   if (VAR_10->doorbells)
    FUNC_21(VAR_10->doorbells);

   FUNC_11(VAR_10);
  } else {
   FUNC_15(VAR_10);
  }
  FUNC_8(VAR_10);

  FUNC_20(VAR_9);

  if (FUNC_4(&VAR_8->enable_cnt) == 1)
   FUNC_23(VAR_8);

  FUNC_22(VAR_8);
 }
}
