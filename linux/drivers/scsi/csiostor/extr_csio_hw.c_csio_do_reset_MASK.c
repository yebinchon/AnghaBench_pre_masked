
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_mb {int dummy; } ;
struct csio_hw {int mb_mempool; } ;
typedef enum fw_retval { ____Placeholder_fw_retval } fw_retval ;


 int FUNC_0 (struct csio_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct csio_hw*,char*,...) ;
 int FUNC_2 (struct csio_mb*) ;
 scalar_t__ FUNC_3 (struct csio_hw*,struct csio_mb*) ;
 int FUNC_4 (struct csio_hw*,struct csio_mb*,int ,int,int ,int *) ;
 int FUNC_5 (struct csio_hw*,int,int ) ;
 int FUNC_6 (int) ;
 struct csio_mb* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct csio_mb*,int ) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_9(struct csio_hw *VAR_9, bool VAR_10)
{
 struct csio_mb *VAR_11;
 enum fw_retval VAR_12;

 if (!VAR_10) {

  FUNC_5(VAR_9, VAR_5 | VAR_6, VAR_7);
  FUNC_6(2000);
  return 0;
 }

 VAR_11 = FUNC_7(VAR_9->mb_mempool, VAR_4);
 if (!VAR_11) {
  FUNC_0(VAR_9, VAR_8);
  return -VAR_2;
 }

 FUNC_4(VAR_9, VAR_11, VAR_0,
        VAR_5 | VAR_6, 0, ((void*)0));

 if (FUNC_3(VAR_9, VAR_11)) {
  FUNC_1(VAR_9, "Issue of RESET command failed.n");
  FUNC_8(VAR_11, VAR_9->mb_mempool);
  return -VAR_1;
 }

 VAR_12 = FUNC_2(VAR_11);
 if (VAR_12 != VAR_3) {
  FUNC_1(VAR_9, "RESET cmd failed with ret:0x%x.\n", VAR_12);
  FUNC_8(VAR_11, VAR_9->mb_mempool);
  return -VAR_1;
 }

 FUNC_8(VAR_11, VAR_9->mb_mempool);

 return 0;
}
