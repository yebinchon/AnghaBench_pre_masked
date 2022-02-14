
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_mb {int dummy; } ;
struct csio_hw {scalar_t__ fw_state; int mb_mempool; } ;
typedef enum fw_retval { ____Placeholder_fw_retval } fw_retval ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct csio_hw*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct csio_hw*,char*,...) ;
 int FUNC_2 (struct csio_hw*,struct csio_mb*) ;
 int FUNC_3 (struct csio_hw*,struct csio_mb*,int ,int,int,int,int,int *) ;
 int FUNC_4 (struct csio_mb*) ;
 scalar_t__ FUNC_5 (struct csio_hw*,struct csio_mb*) ;
 struct csio_mb* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct csio_mb*,int ) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_8(struct csio_hw *VAR_7)
{
 struct csio_mb *VAR_8;
 enum fw_retval VAR_9;
 int VAR_10 = -VAR_2;

 VAR_8 = FUNC_6(VAR_7->mb_mempool, VAR_5);
 if (!VAR_8) {
  FUNC_0(VAR_7, VAR_6);
  return -VAR_3;
 }


 FUNC_3(VAR_7, VAR_8, VAR_1, 0, 0, 0, 0, ((void*)0));

 if (FUNC_5(VAR_7, VAR_8)) {
  FUNC_1(VAR_7, "Issue of FW_CAPS_CONFIG_CMD(r) failed!\n");
  goto out;
 }

 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9 != VAR_4) {
  FUNC_1(VAR_7, "FW_CAPS_CONFIG_CMD(r) returned %d!\n", VAR_9);
  goto out;
 }


 VAR_10 = FUNC_2(VAR_7, VAR_8);
 if (VAR_10 != 0)
  goto out;


 if (VAR_7->fw_state == VAR_0) {
  VAR_10 = 0;
  goto out;
 }


 FUNC_3(VAR_7, VAR_8, VAR_1, 1, 1,
       0, 1, ((void*)0));

 if (FUNC_5(VAR_7, VAR_8)) {
  FUNC_1(VAR_7, "Issue of FW_CAPS_CONFIG_CMD(w) failed!\n");
  goto out;
 }

 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9 != VAR_4) {
  FUNC_1(VAR_7, "FW_CAPS_CONFIG_CMD(w) returned %d!\n", VAR_9);
  goto out;
 }

 VAR_10 = 0;
out:
 FUNC_7(VAR_8, VAR_7->mb_mempool);
 return VAR_10;
}
