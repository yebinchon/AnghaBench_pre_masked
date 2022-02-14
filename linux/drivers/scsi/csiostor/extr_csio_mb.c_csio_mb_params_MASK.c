
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
typedef int u32 ;
struct fw_params_cmd {void* retval_len16; void* op_to_vfn; TYPE_1__* param; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_hw {int dummy; } ;
typedef void* __be32 ;
struct TYPE_2__ {void* mnem; } ;


 int FUNC_0 (struct csio_mb*,struct fw_params_cmd*,unsigned int,struct csio_hw*,void (*) (struct csio_hw*,struct csio_mb*),int) ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;
 void* FUNC_5 (unsigned int) ;

void
FUNC_6(struct csio_hw *VAR_4, struct csio_mb *VAR_5, uint32_t VAR_6,
        unsigned int VAR_7, unsigned int VAR_8, unsigned int VAR_9,
        const u32 *VAR_10, u32 *VAR_11, bool VAR_12,
        void (*VAR_13)(struct csio_hw *, struct csio_mb *))
{
 uint32_t VAR_14;
 uint32_t VAR_15 = 0, VAR_16 = 0;
 struct fw_params_cmd *VAR_17 = (struct fw_params_cmd *)(VAR_5->mb);
 __be32 *VAR_18 = &VAR_17->param[0].mnem;

 FUNC_0(VAR_5, VAR_17, VAR_6, VAR_4, VAR_13, 1);

 VAR_17->op_to_vfn = FUNC_5(FUNC_2(VAR_3) |
    VAR_1 |
    (VAR_12 ? VAR_2 : VAR_0) |
    FUNC_3(VAR_7) |
    FUNC_4(VAR_8));
 VAR_17->retval_len16 = FUNC_5(FUNC_1(sizeof(*VAR_17) / 16));


 if (VAR_12) {
  while (VAR_9--) {
   VAR_15 = *VAR_10++;
   VAR_16 = *VAR_11++;

   *VAR_18++ = FUNC_5(VAR_15);
   *VAR_18++ = FUNC_5(VAR_16);
  }
 } else {
  for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++, VAR_18 += 2) {
   VAR_15 = *VAR_10++;
   *VAR_18 = FUNC_5(VAR_15);
  }
 }

}
