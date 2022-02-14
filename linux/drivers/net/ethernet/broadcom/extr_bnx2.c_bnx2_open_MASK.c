
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statistics_block {int dummy; } ;
struct net_device {int dummy; } ;
struct bnx2 {int flags; int timer; int dev; int temp_stats_blk; int intr_sem; scalar_t__ current_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct bnx2*) ;
 int FUNC_2 (struct bnx2*) ;
 int FUNC_3 (struct bnx2*) ;
 int FUNC_4 (struct bnx2*) ;
 int FUNC_5 (struct bnx2*) ;
 int FUNC_6 (struct bnx2*) ;
 int FUNC_7 (struct bnx2*) ;
 int FUNC_8 (struct bnx2*) ;
 int FUNC_9 (struct bnx2*,int) ;
 int FUNC_10 (struct bnx2*) ;
 int FUNC_11 (struct bnx2*) ;
 int FUNC_12 (struct bnx2*) ;
 int FUNC_13 (struct bnx2*) ;
 int FUNC_14 (struct bnx2*) ;
 int FUNC_15 (struct bnx2*,int) ;
 scalar_t__ FUNC_16 (struct bnx2*) ;
 int FUNC_17 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_18 (int ,int ,int) ;
 int FUNC_19 (int *,scalar_t__) ;
 int FUNC_20 (struct net_device*,char*) ;
 struct bnx2* FUNC_21 (struct net_device*) ;
 int FUNC_22 (int ,char*) ;
 int FUNC_23 (struct net_device*) ;
 int FUNC_24 (struct net_device*) ;

__attribute__((used)) static int
FUNC_25(struct net_device *VAR_4)
{
 struct bnx2 *VAR_5 = FUNC_21(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_13(VAR_5);
 if (VAR_6 < 0)
  goto out;

 FUNC_23(VAR_4);

 FUNC_3(VAR_5);

 VAR_6 = FUNC_15(VAR_5, VAR_2);
 if (VAR_6)
  goto open_err;
 FUNC_8(VAR_5);
 FUNC_11(VAR_5);
 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6)
  goto open_err;

 VAR_6 = FUNC_14(VAR_5);
 if (VAR_6)
  goto open_err;

 VAR_6 = FUNC_9(VAR_5, 1);
 if (VAR_6)
  goto open_err;

 FUNC_19(&VAR_5->timer, VAR_3 + VAR_5->current_interval);

 FUNC_0(&VAR_5->intr_sem, 0);

 FUNC_18(VAR_5->temp_stats_blk, 0, sizeof(struct statistics_block));

 FUNC_4(VAR_5);

 if (VAR_5->flags & VAR_0) {



  if (FUNC_16(VAR_5) != 0) {
   FUNC_22(VAR_5->dev, "No interrupt was generated using MSI, switching to INTx mode. Please report this failure to the PCI maintainer and include system chipset information.\n");

   FUNC_3(VAR_5);
   FUNC_5(VAR_5);

   FUNC_15(VAR_5, 1);

   VAR_6 = FUNC_9(VAR_5, 0);

   if (!VAR_6)
    VAR_6 = FUNC_14(VAR_5);

   if (VAR_6) {
    FUNC_17(&VAR_5->timer);
    goto open_err;
   }
   FUNC_4(VAR_5);
  }
 }
 if (VAR_5->flags & VAR_0)
  FUNC_20(VAR_4, "using MSI\n");
 else if (VAR_5->flags & VAR_1)
  FUNC_20(VAR_4, "using MSIX\n");

 FUNC_24(VAR_4);
out:
 return VAR_6;

open_err:
 FUNC_10(VAR_5);
 FUNC_7(VAR_5);
 FUNC_5(VAR_5);
 FUNC_6(VAR_5);
 FUNC_2(VAR_5);
 FUNC_12(VAR_5);
 goto out;
}
