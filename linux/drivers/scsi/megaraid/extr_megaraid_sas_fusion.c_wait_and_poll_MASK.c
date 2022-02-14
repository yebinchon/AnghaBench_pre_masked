
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct megasas_instance {TYPE_1__* instancet; } ;
struct megasas_header {int cmd_status; } ;
struct megasas_cmd {TYPE_2__* frame; } ;
struct TYPE_4__ {struct megasas_header hdr; } ;
struct TYPE_3__ {int (* read_fw_status_reg ) (struct megasas_instance*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct megasas_instance*) ;

int
FUNC_3(struct megasas_instance *VAR_7, struct megasas_cmd *VAR_8,
 int VAR_9)
{
 int VAR_10;
 struct megasas_header *VAR_11 = &VAR_8->frame->hdr;
 u32 VAR_12;

 u32 VAR_13 = VAR_9 * 1000;




 for (VAR_10 = 0; (VAR_10 < VAR_13) && (VAR_11->cmd_status == 0xff); VAR_10 += 20) {
  FUNC_1();
  FUNC_0(20);
  if (!(VAR_10 % 5000)) {
   VAR_12 = VAR_7->instancet->read_fw_status_reg(VAR_7)
     & VAR_4;
   if (VAR_12 == VAR_3)
    break;
  }
 }

 if (VAR_11->cmd_status == VAR_5)
  return VAR_2;
 else if (VAR_11->cmd_status == VAR_6)
  return VAR_1;
 else
  return VAR_0;
}
