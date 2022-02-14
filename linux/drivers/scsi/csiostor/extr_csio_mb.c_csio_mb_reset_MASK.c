
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fw_reset_cmd {void* halt_pkd; void* val; void* retval_len16; void* op_to_write; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_hw {int dummy; } ;


 int FUNC_0 (struct csio_mb*,struct fw_reset_cmd*,int ,struct csio_hw*,void (*) (struct csio_hw*,struct csio_mb*),int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_3 (int) ;

void
FUNC_4(struct csio_hw *VAR_3, struct csio_mb *VAR_4, uint32_t VAR_5,
       int VAR_6, int VAR_7,
       void (*VAR_8) (struct csio_hw *, struct csio_mb *))
{
 struct fw_reset_cmd *VAR_9 = (struct fw_reset_cmd *)(VAR_4->mb);

 FUNC_0(VAR_4, VAR_9, VAR_5, VAR_3, VAR_8, 1);

 VAR_9->op_to_write = FUNC_3(FUNC_2(VAR_2) |
      VAR_0 | VAR_1);
 VAR_9->retval_len16 = FUNC_3(FUNC_1(sizeof(*VAR_9) / 16));
 VAR_9->val = FUNC_3(VAR_6);
 VAR_9->halt_pkd = FUNC_3(VAR_7);

}
