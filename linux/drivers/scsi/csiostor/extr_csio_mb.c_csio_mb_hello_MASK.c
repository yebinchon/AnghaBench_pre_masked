
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fw_hello_cmd {void* err_to_clearinit; void* retval_len16; void* op_to_write; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_hw {int dummy; } ;
typedef enum csio_dev_master { ____Placeholder_csio_dev_master } csio_dev_master ;


 int FUNC_0 (struct csio_mb*,struct fw_hello_cmd*,int ,struct csio_hw*,void (*) (struct csio_hw*,struct csio_mb*),int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 void* FUNC_8 (int) ;

void
FUNC_9(struct csio_hw *VAR_8, struct csio_mb *VAR_9, uint32_t VAR_10,
       uint32_t VAR_11, uint32_t VAR_12, enum csio_dev_master VAR_13,
       void (*VAR_14) (struct csio_hw *, struct csio_mb *))
{
 struct fw_hello_cmd *VAR_15 = (struct fw_hello_cmd *)(VAR_9->mb);

 FUNC_0(VAR_9, VAR_15, VAR_10, VAR_8, VAR_14, 1);

 VAR_15->op_to_write = FUNC_8(FUNC_2(VAR_4) |
           VAR_2 | VAR_3);
 VAR_15->retval_len16 = FUNC_8(FUNC_1(sizeof(*VAR_15) / 16));
 VAR_15->err_to_clearinit = FUNC_8(
  FUNC_3(VAR_13 == VAR_0) |
  FUNC_4(VAR_13 == VAR_1) |
  FUNC_6(VAR_13 == VAR_1 ?
    VAR_11 : VAR_6) |
  FUNC_5(VAR_12) |
  FUNC_7(VAR_7) |
  VAR_5);

}
