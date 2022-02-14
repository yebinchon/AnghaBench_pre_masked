
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct bnxt_vnic_info {int uc_filter_count; int rx_mask; scalar_t__ mc_list_count; } ;
struct bnxt {unsigned int rx_nr_rings; int flags; TYPE_1__* dev; struct bnxt_vnic_info* vnic_info; } ;
struct TYPE_4__ {int flags; int dev_addr; } ;


 scalar_t__ FUNC_0 (struct bnxt*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct bnxt*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (struct bnxt*) ;
 int FUNC_4 (struct bnxt*) ;
 int FUNC_5 (struct bnxt*,int ,int) ;
 int FUNC_6 (struct bnxt*) ;
 int FUNC_7 (struct bnxt*) ;
 int FUNC_8 (struct bnxt*) ;
 int FUNC_9 (struct bnxt*,int ,int ,int ) ;
 int FUNC_10 (struct bnxt*) ;
 int FUNC_11 (struct bnxt*,int ,int ,unsigned int) ;
 int FUNC_12 (struct bnxt*,int *) ;
 scalar_t__ FUNC_13 (struct bnxt*) ;
 int FUNC_14 (struct bnxt*,int) ;
 int FUNC_15 (struct bnxt*) ;
 int FUNC_16 (struct bnxt*,int ) ;
 int FUNC_17 (struct bnxt*) ;
 int FUNC_18 (TYPE_1__*,char*,int) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*,char*,int) ;

__attribute__((used)) static int FUNC_21(struct bnxt *VAR_8, bool VAR_9)
{
 struct bnxt_vnic_info *VAR_10 = &VAR_8->vnic_info[0];
 int VAR_11 = 0;
 unsigned int VAR_12 = VAR_8->rx_nr_rings;

 if (VAR_9) {
  VAR_11 = FUNC_10(VAR_8);
  if (VAR_11) {
   FUNC_18(VAR_8->dev, "hwrm stat ctx alloc failure rc: %x\n",
       VAR_11);
   goto err_out;
  }
 }

 VAR_11 = FUNC_6(VAR_8);
 if (VAR_11) {
  FUNC_18(VAR_8->dev, "hwrm ring alloc failure rc: %x\n", VAR_11);
  goto err_out;
 }

 VAR_11 = FUNC_7(VAR_8);
 if (VAR_11) {
  FUNC_18(VAR_8->dev, "hwrm_ring_grp alloc failure: %x\n", VAR_11);
  goto err_out;
 }

 if (FUNC_0(VAR_8))
  VAR_12--;


 VAR_11 = FUNC_11(VAR_8, 0, 0, VAR_12);
 if (VAR_11) {
  FUNC_18(VAR_8->dev, "hwrm vnic alloc failure rc: %x\n", VAR_11);
  goto err_out;
 }

 VAR_11 = FUNC_16(VAR_8, 0);
 if (VAR_11)
  goto err_out;

 if (VAR_8->flags & VAR_0) {
  VAR_11 = FUNC_2(VAR_8);
  if (VAR_11)
   goto err_out;
 }

 if (VAR_8->flags & VAR_1) {
  VAR_11 = FUNC_14(VAR_8, 1);
  if (VAR_11)
   goto err_out;
 }

 if (FUNC_1(VAR_8))
  FUNC_17(VAR_8);


 VAR_11 = FUNC_9(VAR_8, 0, 0, VAR_8->dev->dev_addr);
 if (VAR_11) {
  FUNC_18(VAR_8->dev, "HWRM vnic filter failure rc: %x\n", VAR_11);
  goto err_out;
 }
 VAR_10->uc_filter_count = 1;

 VAR_10->rx_mask = 0;
 if (VAR_8->dev->flags & VAR_6)
  VAR_10->rx_mask |= VAR_3;

 if ((VAR_8->dev->flags & VAR_7) && FUNC_13(VAR_8))
  VAR_10->rx_mask |= VAR_4;

 if (VAR_8->dev->flags & VAR_5) {
  VAR_10->rx_mask |= VAR_2;
  VAR_10->mc_list_count = 0;
 } else {
  u32 VAR_13 = 0;

  FUNC_12(VAR_8, &VAR_13);
  VAR_10->rx_mask |= VAR_13;
 }

 VAR_11 = FUNC_3(VAR_8);
 if (VAR_11)
  goto err_out;

 VAR_11 = FUNC_8(VAR_8);
 if (VAR_11)
  FUNC_20(VAR_8->dev, "HWRM set coalescing failure rc: %x\n",
    VAR_11);

 if (FUNC_0(VAR_8)) {
  VAR_11 = FUNC_15(VAR_8);
  if (VAR_11)
   FUNC_18(VAR_8->dev, "Special vnic setup failure for NS2 A0 rc: %x\n",
       VAR_11);
 }

 if (FUNC_1(VAR_8)) {
  FUNC_4(VAR_8);
  FUNC_19(VAR_8->dev);
 }

 return 0;

err_out:
 FUNC_5(VAR_8, 0, 1);

 return VAR_11;
}
