
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
 int FUNC_1 (struct csio_hw*,char*) ;
 int FUNC_2 (struct csio_hw*,struct csio_mb*,int ,int *) ;
 int FUNC_3 (struct csio_mb*) ;
 scalar_t__ FUNC_4 (struct csio_hw*,struct csio_mb*) ;
 struct csio_mb* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct csio_mb*,int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_7(struct csio_hw *VAR_6)
{
 struct csio_mb *VAR_7;
 enum fw_retval VAR_8;

 VAR_7 = FUNC_5(VAR_6->mb_mempool, VAR_4);
 if (!VAR_7) {
  FUNC_0(VAR_6, VAR_5);
  return -VAR_2;
 }

 FUNC_2(VAR_6, VAR_7, VAR_0, ((void*)0));

 if (FUNC_4(VAR_6, VAR_7)) {
  FUNC_1(VAR_6, "Issue of BYE command failed\n");
  FUNC_6(VAR_7, VAR_6->mb_mempool);
  return -VAR_1;
 }

 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8 != VAR_3) {
  FUNC_6(VAR_7, VAR_6->mb_mempool);
  return -VAR_1;
 }

 FUNC_6(VAR_7, VAR_6->mb_mempool);

 return 0;
}
