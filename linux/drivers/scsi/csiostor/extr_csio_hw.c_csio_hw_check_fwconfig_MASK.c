
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct csio_mb {int dummy; } ;
struct csio_hw {int mb_mempool; int pfn; } ;
typedef enum fw_retval { ____Placeholder_fw_retval } fw_retval ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct csio_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct csio_hw*,char*,...) ;
 scalar_t__ FUNC_5 (struct csio_hw*,struct csio_mb*) ;
 int FUNC_6 (struct csio_hw*,struct csio_mb*,int ,int ,int ,int ,int*,int *,int,int *) ;
 int FUNC_7 (struct csio_hw*,struct csio_mb*,int*,int ,int*) ;
 struct csio_mb* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct csio_mb*,int ) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_10(struct csio_hw *VAR_8, u32 *VAR_9)
{
 struct csio_mb *VAR_10;
 enum fw_retval VAR_11;
 u32 VAR_12[1];

 VAR_10 = FUNC_8(VAR_8->mb_mempool, VAR_6);
 if (!VAR_10) {
  FUNC_1(VAR_8, VAR_7);
  return -VAR_2;
 }





 VAR_12[0] = (FUNC_2(VAR_3) |
       FUNC_3(VAR_4));

 FUNC_6(VAR_8, VAR_10, VAR_0, VAR_8->pfn, 0,
         FUNC_0(VAR_12), VAR_12, ((void*)0), 0, ((void*)0));
 if (FUNC_5(VAR_8, VAR_10)) {
  FUNC_4(VAR_8, "Issue of FW_PARAMS_CMD(read) failed!\n");
  FUNC_9(VAR_10, VAR_8->mb_mempool);
  return -VAR_1;
 }

 FUNC_7(VAR_8, VAR_10, &VAR_11,
   FUNC_0(VAR_12), VAR_12);
 if (VAR_11 != VAR_5) {
  FUNC_4(VAR_8, "FW_PARAMS_CMD(read) failed with ret:0x%x!\n",
    VAR_11);
  FUNC_9(VAR_10, VAR_8->mb_mempool);
  return -VAR_1;
 }

 FUNC_9(VAR_10, VAR_8->mb_mempool);
 *VAR_9 = VAR_12[0];

 return 0;
}
