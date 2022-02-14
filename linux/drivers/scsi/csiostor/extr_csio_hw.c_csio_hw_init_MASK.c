
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int device_id; int vendor_id; } ;
struct TYPE_5__ {scalar_t__ log_level; TYPE_1__ pci; } ;
struct TYPE_6__ {int sm_list; } ;
struct csio_hw {int dev_num; int evt_free_q; int evt_active_q; TYPE_2__ params; int * chip_ops; int name; int sln_head; int lock; TYPE_3__ sm; } ;
struct csio_evt_msg {int list; } ;


 int VAR_0 ;
 int FUNC_0 (struct csio_hw*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct csio_hw*,char*) ;
 int FUNC_3 (struct csio_hw*) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct csio_hw*) ;
 int VAR_6 ;
 int FUNC_5 (struct csio_hw*,int ,int ) ;
 int FUNC_6 (struct csio_hw*) ;
 int FUNC_7 (struct csio_hw*) ;
 int FUNC_8 (struct csio_hw*) ;
 int FUNC_9 (struct csio_hw*) ;
 int VAR_7 ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,struct csio_hw*,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,struct csio_hw*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,struct csio_hw*) ;
 int FUNC_17 (struct csio_hw*,int) ;
 int FUNC_18 (struct csio_hw*,int) ;
 int FUNC_19 (int ,struct csio_hw*) ;
 int FUNC_20 (int ,struct csio_hw*) ;
 int VAR_8 ;
 struct csio_evt_msg* FUNC_21 (int,int ) ;
 int FUNC_22 (int *,int *) ;
 int VAR_9 ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int ,int ) ;
 int VAR_10 ;

int
FUNC_25(struct csio_hw *VAR_11)
{
 int VAR_12 = -VAR_1;
 uint32_t VAR_13;
 uint16_t VAR_14, VAR_15;
 struct csio_evt_msg *VAR_16;

 FUNC_1(&VAR_11->sm.sm_list);
 FUNC_10(&VAR_11->sm, VAR_7);
 FUNC_23(&VAR_11->lock);
 FUNC_1(&VAR_11->sln_head);


 FUNC_4(VAR_11);

 FUNC_24(VAR_11->name, VAR_0);


 VAR_11->chip_ops = &VAR_10;



 VAR_14 = VAR_11->params.pci.vendor_id;
 VAR_15 = VAR_11->params.pci.device_id;

 FUNC_5(VAR_11, VAR_14, VAR_15);


 VAR_11->params.log_level = (uint32_t) VAR_4;

 FUNC_17(VAR_11, -1);
 FUNC_18(VAR_11, -1);


 if (FUNC_12(FUNC_6(VAR_11), VAR_11, VAR_6))
  goto err;

 VAR_12 = FUNC_20(FUNC_9(VAR_11), VAR_11);
 if (VAR_12)
  goto err_mbm_exit;

 VAR_12 = FUNC_16(FUNC_8(VAR_11), VAR_11);
 if (VAR_12)
  goto err_wrm_exit;

 VAR_12 = FUNC_14(FUNC_7(VAR_11), VAR_11);
 if (VAR_12)
  goto err_scsim_exit;

 FUNC_1(&VAR_11->evt_active_q);
 FUNC_1(&VAR_11->evt_free_q);
 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {

  VAR_16 = FUNC_21(sizeof(struct csio_evt_msg), VAR_3);
  if (!VAR_16) {
   VAR_12 = -VAR_2;
   FUNC_2(VAR_11, "Failed to initialize eventq");
   goto err_evtq_cleanup;
  }

  FUNC_22(&VAR_16->list, &VAR_11->evt_free_q);
  FUNC_0(VAR_11, VAR_9);
 }

 VAR_11->dev_num = VAR_8;
 VAR_8++;

 return 0;

err_evtq_cleanup:
 FUNC_3(VAR_11);
 FUNC_13(FUNC_7(VAR_11));
err_scsim_exit:
 FUNC_15(FUNC_8(VAR_11));
err_wrm_exit:
 FUNC_19(FUNC_9(VAR_11), VAR_11);
err_mbm_exit:
 FUNC_11(FUNC_6(VAR_11));
err:
 return VAR_12;
}
