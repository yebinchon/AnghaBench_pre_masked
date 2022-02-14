
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fw_fcoe_link_cmd {int lstatus; void* retval_len16; void* sub_opcode_fcfi; void* op_to_portid; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_lnode {int dummy; } ;


 int FUNC_0 (struct csio_mb*,struct fw_fcoe_link_cmd*,int ,struct csio_lnode*,void (*) (struct csio_hw*,struct csio_mb*),int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int) ;

void
FUNC_7(struct csio_lnode *VAR_3, struct csio_mb *VAR_4,
   uint32_t VAR_5, uint8_t VAR_6, uint32_t VAR_7,
   uint8_t VAR_8, bool VAR_9, uint32_t VAR_10,
   void (*VAR_11) (struct csio_hw *, struct csio_mb *))
{
 struct fw_fcoe_link_cmd *VAR_12 =
    (struct fw_fcoe_link_cmd *)(VAR_4->mb);

 FUNC_0(VAR_4, VAR_12, VAR_5, VAR_3, VAR_11, 1);

 VAR_12->op_to_portid = FUNC_6((
   FUNC_2(VAR_2) |
   VAR_0 |
   VAR_1 |
   FUNC_4(VAR_6)));
 VAR_12->sub_opcode_fcfi = FUNC_6(
   FUNC_5(VAR_7) |
   FUNC_3(VAR_10));
 VAR_12->lstatus = VAR_9;
 VAR_12->retval_len16 = FUNC_6(FUNC_1(sizeof(*VAR_12) / 16));

}
