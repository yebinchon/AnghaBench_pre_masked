
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct megasas_instance {int dummy; } ;
struct megasas_cmd_fusion {int cmd_completed; int r1_alt_dev_handle; int io_request; int * scmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

inline void FUNC_1(struct megasas_instance *VAR_2,
 struct megasas_cmd_fusion *VAR_3)
{
 VAR_3->scmd = ((void*)0);
 FUNC_0(VAR_3->io_request, 0, VAR_0);
 VAR_3->r1_alt_dev_handle = VAR_1;
 VAR_3->cmd_completed = 0;
}
