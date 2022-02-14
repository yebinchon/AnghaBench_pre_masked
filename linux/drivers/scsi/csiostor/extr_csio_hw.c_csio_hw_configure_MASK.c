
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct csio_hw {char chip_ver; scalar_t__ fw_state; int sm; int flags; int lock; int tp_vers; int fwrev; int vpd; TYPE_1__* chip_ops; int pdev; } ;
struct TYPE_2__ {int (* chip_set_mem_win ) (struct csio_hw*,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct csio_hw*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct csio_hw*) ;
 int FUNC_2 (struct csio_hw*,scalar_t__*) ;
 int FUNC_3 (struct csio_hw*,char*,int) ;
 int FUNC_4 (struct csio_hw*) ;
 int FUNC_5 (struct csio_hw*,int *) ;
 int FUNC_6 (struct csio_hw*) ;
 int FUNC_7 (struct csio_hw*) ;
 int FUNC_8 (struct csio_hw*,int*) ;
 int FUNC_9 (struct csio_hw*) ;
 int FUNC_10 (struct csio_hw*,int *) ;
 int FUNC_11 (struct csio_hw*,int *) ;
 int FUNC_12 (struct csio_hw*,int *) ;
 int FUNC_13 (struct csio_hw*,char*) ;
 int FUNC_14 (struct csio_hw*,int,int *) ;
 int FUNC_15 (struct csio_hw*,char*,...) ;
 scalar_t__ FUNC_16 (struct csio_hw*) ;
 int FUNC_17 (int *,int ) ;
 scalar_t__ FUNC_18 (struct csio_hw*,int ) ;
 int FUNC_19 (struct csio_hw*) ;
 int VAR_9 ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (int ,int ,int ,int) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct csio_hw*,int ) ;

__attribute__((used)) static void
FUNC_25(struct csio_hw *VAR_10)
{
 int VAR_11 = 1;
 int VAR_12;
 u32 VAR_13[1];

 VAR_12 = FUNC_7(VAR_10);
 if (VAR_12 != 0) {
  FUNC_0(VAR_10, VAR_9);
  FUNC_17(&VAR_10->sm, VAR_1);
  goto out;
 }


 VAR_10->chip_ver = (char)FUNC_18(VAR_10, VAR_8);


 VAR_12 = FUNC_9(VAR_10);
 if (VAR_12 != 0) {
  FUNC_3(VAR_10, "Failed to get serial flash params rv:%d\n", VAR_12);
  FUNC_17(&VAR_10->sm, VAR_1);
  goto out;
 }


 if (FUNC_20(VAR_10->pdev))
  FUNC_21(VAR_10->pdev, VAR_6,
    VAR_7, 0xd);

 VAR_10->chip_ops->chip_set_mem_win(VAR_10, VAR_5);

 VAR_12 = FUNC_10(VAR_10, &VAR_10->fwrev);
 if (VAR_12 != 0)
  goto out;

 FUNC_13(VAR_10, "Firmware revision");

 VAR_12 = FUNC_2(VAR_10, &VAR_10->fw_state);
 if (VAR_12 != 0) {
  FUNC_0(VAR_10, VAR_9);
  FUNC_17(&VAR_10->sm, VAR_1);
  goto out;
 }


 VAR_12 = FUNC_12(VAR_10, &VAR_10->vpd);
 if (VAR_12 != 0)
  goto out;

 FUNC_10(VAR_10, &VAR_10->fwrev);
 FUNC_11(VAR_10, &VAR_10->tp_vers);
 if (FUNC_16(VAR_10) && VAR_10->fw_state != VAR_0) {


  FUNC_23(&VAR_10->lock);
  VAR_12 = FUNC_8(VAR_10, &VAR_11);
  FUNC_22(&VAR_10->lock);

  if (VAR_12 != 0)
   goto out;

  VAR_12 = FUNC_6(VAR_10);
  if (VAR_12 < 0)
   goto out;




  VAR_12 = FUNC_5(VAR_10, VAR_13);
  if (VAR_12 != 0) {
   FUNC_15(VAR_10, "Firmware doesn't support "
      "Firmware Configuration files\n");
   goto out;
  }





  VAR_12 = FUNC_14(VAR_10, VAR_11, VAR_13);
  if (VAR_12 == -VAR_4) {
   FUNC_15(VAR_10, "Could not initialize "
      "adapter, error%d\n", VAR_12);
   goto out;
  }
  if (VAR_12 != 0) {
   FUNC_15(VAR_10, "Could not initialize "
      "adapter, error%d\n", VAR_12);
   goto out;
  }

 } else {
  VAR_12 = FUNC_6(VAR_10);
  if (VAR_12 < 0)
   goto out;

  if (VAR_10->fw_state == VAR_0) {

   VAR_10->flags |= VAR_3;


   VAR_12 = FUNC_4(VAR_10);
   if (VAR_12 != 0)
    goto out;


   VAR_12 = FUNC_1(VAR_10);
   if (VAR_12 != 0)
    goto out;


   FUNC_19(VAR_10);


   FUNC_17(&VAR_10->sm, VAR_2);
   goto out;
  }
 }

out:
 return;
}
