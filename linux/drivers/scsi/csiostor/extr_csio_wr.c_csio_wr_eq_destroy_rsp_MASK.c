
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_mb {int dummy; } ;
struct csio_hw {int mb_mempool; } ;
typedef enum fw_retval { ____Placeholder_fw_retval } fw_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct csio_mb*) ;
 int FUNC_1 (struct csio_mb*,int ) ;

__attribute__((used)) static int
FUNC_2(struct csio_hw *VAR_2, struct csio_mb *VAR_3, int VAR_4)
{
 enum fw_retval VAR_5 = FUNC_0(VAR_3);
 int VAR_6 = 0;

 if (VAR_5 != VAR_1)
  VAR_6 = -VAR_0;

 FUNC_1(VAR_3, VAR_2->mb_mempool);

 return VAR_6;
}
