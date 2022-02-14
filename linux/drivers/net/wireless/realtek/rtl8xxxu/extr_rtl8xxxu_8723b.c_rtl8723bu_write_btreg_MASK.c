
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct rtl8xxxu_priv {int dummy; } ;
struct TYPE_2__ {int operreq; void* addr; void* opcode; void* cmd; void* data; } ;
struct h2c_cmd {TYPE_1__ bt_mp_oper; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct h2c_cmd*,int ,int) ;
 int FUNC_1 (struct rtl8xxxu_priv*,struct h2c_cmd*,int) ;

__attribute__((used)) static void FUNC_2(struct rtl8xxxu_priv *VAR_2, u8 VAR_3, u8 VAR_4)
{
 struct h2c_cmd VAR_5;
 int VAR_6 = 0;

 FUNC_0(&VAR_5, 0, sizeof(struct h2c_cmd));
 VAR_5.bt_mp_oper.cmd = VAR_1;
 VAR_5.bt_mp_oper.operreq = 0 | (VAR_6 << 4);
 VAR_5.bt_mp_oper.opcode = VAR_0;
 VAR_5.bt_mp_oper.data = VAR_4;
 FUNC_1(VAR_2, &VAR_5, sizeof(VAR_5.bt_mp_oper));

 VAR_6++;
 FUNC_0(&VAR_5, 0, sizeof(struct h2c_cmd));
 VAR_5.bt_mp_oper.cmd = VAR_1;
 VAR_5.bt_mp_oper.operreq = 0 | (VAR_6 << 4);
 VAR_5.bt_mp_oper.opcode = VAR_0;
 VAR_5.bt_mp_oper.addr = VAR_3;
 FUNC_1(VAR_2, &VAR_5, sizeof(VAR_5.bt_mp_oper));
}
