
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* rcap32; } ;
struct TYPE_5__ {void* rcap; } ;
struct TYPE_7__ {TYPE_2__ l1cfg32; TYPE_1__ l1cfg; } ;
struct fw_port_cmd {TYPE_3__ u; void* action_to_len16; void* op_to_portid; } ;
struct TYPE_8__ {unsigned int fw_caps_support; } ;
struct adapter {TYPE_4__ params; } ;
typedef int c ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct fw_port_cmd) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct fw_port_cmd*,int ,int) ;
 int FUNC_6 (struct adapter*,unsigned int,struct fw_port_cmd*,int,int *) ;

int FUNC_7(struct adapter *VAR_8, unsigned int VAR_9, unsigned int VAR_10)
{
 unsigned int VAR_11 = VAR_8->params.fw_caps_support;
 struct fw_port_cmd VAR_12;

 FUNC_5(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.op_to_portid = FUNC_4(FUNC_0(VAR_7) |
         VAR_2 | VAR_1 |
         FUNC_3(VAR_10));
 VAR_12.action_to_len16 =
  FUNC_4(FUNC_2(VAR_11 == VAR_0
       ? VAR_3
       : VAR_4) |
       FUNC_1(VAR_12));
 if (VAR_11 == VAR_0)
  VAR_12.u.l1cfg.rcap = FUNC_4(VAR_6);
 else
  VAR_12.u.l1cfg32.rcap32 = FUNC_4(VAR_5);
 return FUNC_6(VAR_8, VAR_9, &VAR_12, sizeof(VAR_12), ((void*)0));
}
