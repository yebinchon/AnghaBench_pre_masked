
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fw_fcoe_vnp_cmd {void* gen_wwn_to_vnpi; void* alloc_to_len16; void* op_to_fcfi; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_lnode {int dummy; } ;


 int FUNC_0 (struct csio_mb*,struct fw_fcoe_vnp_cmd*,int ,struct csio_lnode*,void (*) (struct csio_hw*,struct csio_mb*),int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int) ;

void
FUNC_6(struct csio_lnode *VAR_4, struct csio_mb *VAR_5,
  uint32_t VAR_6, uint32_t VAR_7, uint32_t VAR_8,
  void (*VAR_9) (struct csio_hw *, struct csio_mb *))
{
 struct fw_fcoe_vnp_cmd *VAR_10 =
   (struct fw_fcoe_vnp_cmd *)(VAR_5->mb);

 FUNC_0(VAR_5, VAR_10, VAR_6, VAR_4, VAR_9, 1);

 VAR_10->op_to_fcfi = FUNC_5(FUNC_2(VAR_2) |
     VAR_1 |
     VAR_0 |
     FUNC_3(VAR_7));
 VAR_10->alloc_to_len16 = FUNC_5(VAR_3 |
         FUNC_1(sizeof(*VAR_10) / 16));
 VAR_10->gen_wwn_to_vnpi = FUNC_5(FUNC_4(VAR_8));
}
