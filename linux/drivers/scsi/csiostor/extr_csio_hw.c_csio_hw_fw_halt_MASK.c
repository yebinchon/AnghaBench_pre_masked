
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct csio_mb {int dummy; } ;
struct csio_hw {int mb_mempool; } ;
typedef scalar_t__ int32_t ;
typedef enum fw_retval { ____Placeholder_fw_retval } fw_retval ;


 int VAR_0 ;
 int FUNC_0 (struct csio_hw*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct csio_hw*,char*) ;
 int FUNC_2 (struct csio_mb*) ;
 scalar_t__ FUNC_3 (struct csio_hw*,struct csio_mb*) ;
 int FUNC_4 (struct csio_hw*,struct csio_mb*,int ,int,int ,int *) ;
 int FUNC_5 (struct csio_hw*,int ,int ,int ) ;
 struct csio_mb* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct csio_mb*,int ) ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_8(struct csio_hw *VAR_13, uint32_t VAR_14, int32_t VAR_15)
{
 enum fw_retval VAR_16 = 0;





 if (VAR_14 <= VAR_8) {
  struct csio_mb *VAR_17;

  VAR_17 = FUNC_6(VAR_13->mb_mempool, VAR_5);
  if (!VAR_17) {
   FUNC_0(VAR_13, VAR_12);
   return -VAR_3;
  }

  FUNC_4(VAR_13, VAR_17, VAR_1,
         VAR_9 | VAR_10, VAR_4,
         ((void*)0));

  if (FUNC_3(VAR_13, VAR_17)) {
   FUNC_1(VAR_13, "Issue of RESET command failed!\n");
   FUNC_7(VAR_17, VAR_13->mb_mempool);
   return -VAR_2;
  }

  VAR_16 = FUNC_2(VAR_17);
  FUNC_7(VAR_17, VAR_13->mb_mempool);
 }
 if (VAR_16 == 0 || VAR_15) {
  FUNC_5(VAR_13, VAR_0, VAR_11, VAR_11);
  FUNC_5(VAR_13, VAR_6, VAR_7,
       VAR_7);
 }





 return VAR_16 ? -VAR_2 : 0;
}
