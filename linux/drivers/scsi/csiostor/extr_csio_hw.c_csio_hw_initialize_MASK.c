
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csio_mb {int dummy; } ;
struct csio_hw {scalar_t__ fw_state; int num_pports; int mb_mempool; int sm; TYPE_1__* pport; int lock; } ;
typedef enum fw_retval { ____Placeholder_fw_retval } fw_retval ;
struct TYPE_2__ {int mod_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct csio_hw*) ;
 int FUNC_1 (struct csio_hw*) ;
 int FUNC_2 (struct csio_hw*,char*,...) ;
 int FUNC_3 (struct csio_hw*) ;
 scalar_t__ FUNC_4 (struct csio_hw*) ;
 int FUNC_5 (struct csio_mb*) ;
 int FUNC_6 (struct csio_hw*,struct csio_mb*,int ,int *) ;
 scalar_t__ FUNC_7 (struct csio_hw*,struct csio_mb*) ;
 int FUNC_8 (int *,int ) ;
 struct csio_mb* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct csio_mb*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void
FUNC_13(struct csio_hw *VAR_6)
{
 struct csio_mb *VAR_7;
 enum fw_retval VAR_8;
 int VAR_9;
 int VAR_10;

 if (FUNC_4(VAR_6) && VAR_6->fw_state != VAR_0) {
  VAR_7 = FUNC_9(VAR_6->mb_mempool, VAR_5);
  if (!VAR_7)
   goto out;

  FUNC_6(VAR_6, VAR_7, VAR_2, ((void*)0));

  if (FUNC_7(VAR_6, VAR_7)) {
   FUNC_2(VAR_6, "Issue of FW_INITIALIZE_CMD failed!\n");
   goto free_and_out;
  }

  VAR_8 = FUNC_5(VAR_7);
  if (VAR_8 != VAR_4) {
   FUNC_2(VAR_6, "FW_INITIALIZE_CMD returned 0x%x!\n",
     VAR_8);
   goto free_and_out;
  }

  FUNC_10(VAR_7, VAR_6->mb_mempool);
 }

 VAR_9 = FUNC_3(VAR_6);
 if (VAR_9 != 0) {
  FUNC_2(VAR_6, "Failed to read fcoe resource info: %d\n", VAR_9);
  goto out;
 }

 FUNC_12(&VAR_6->lock);
 VAR_9 = FUNC_0(VAR_6);
 FUNC_11(&VAR_6->lock);

 if (VAR_9 != 0) {
  FUNC_2(VAR_6, "Config of queues failed!: %d\n", VAR_9);
  goto out;
 }

 for (VAR_10 = 0; VAR_10 < VAR_6->num_pports; VAR_10++)
  VAR_6->pport[VAR_10].mod_type = VAR_3;

 if (FUNC_4(VAR_6) && VAR_6->fw_state != VAR_0) {
  VAR_9 = FUNC_1(VAR_6);
  if (VAR_9 != 0) {
   FUNC_2(VAR_6, "Failed to enable ports: %d\n", VAR_9);
   goto out;
  }
 }

 FUNC_8(&VAR_6->sm, VAR_1);
 return;

free_and_out:
 FUNC_10(VAR_7, VAR_6->mb_mempool);
out:
 return;
}
