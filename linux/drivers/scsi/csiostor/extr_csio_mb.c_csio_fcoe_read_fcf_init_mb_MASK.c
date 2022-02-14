
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fw_fcoe_fcf_cmd {void* retval_len16; void* op_to_fcfi; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_lnode {int dummy; } ;


 int FUNC_0 (struct csio_mb*,struct fw_fcoe_fcf_cmd*,int ,struct csio_lnode*,void (*) (struct csio_hw*,struct csio_mb*),int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int) ;

void
FUNC_5(struct csio_lnode *VAR_3, struct csio_mb *VAR_4,
  uint32_t VAR_5, uint32_t VAR_6, uint32_t VAR_7,
  void (*VAR_8) (struct csio_hw *, struct csio_mb *))
{
 struct fw_fcoe_fcf_cmd *VAR_9 =
   (struct fw_fcoe_fcf_cmd *)(VAR_4->mb);

 FUNC_0(VAR_4, VAR_9, VAR_5, VAR_3, VAR_8, 1);

 VAR_9->op_to_fcfi = FUNC_4(FUNC_2(VAR_2) |
     VAR_1 |
     VAR_0 |
     FUNC_3(VAR_7));
 VAR_9->retval_len16 = FUNC_4(FUNC_1(sizeof(*VAR_9) / 16));

}
