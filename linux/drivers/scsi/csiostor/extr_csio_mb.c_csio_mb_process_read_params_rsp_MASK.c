
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
typedef int u32 ;
struct fw_params_cmd {int retval_len16; TYPE_1__* param; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_hw {int dummy; } ;
typedef enum fw_retval { ____Placeholder_fw_retval } fw_retval ;
typedef int __be32 ;
struct TYPE_2__ {int val; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct csio_hw *VAR_1, struct csio_mb *VAR_2,
      enum fw_retval *VAR_3, unsigned int VAR_4,
      u32 *VAR_5)
{
 struct fw_params_cmd *VAR_6 = (struct fw_params_cmd *)(VAR_2->mb);
 uint32_t VAR_7;
 __be32 *VAR_8 = &VAR_6->param[0].val;

 *VAR_3 = FUNC_0(FUNC_1(VAR_6->retval_len16));

 if (*VAR_3 == VAR_0)
  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++, VAR_8 += 2)
   *VAR_5++ = FUNC_1(*VAR_8);
}
