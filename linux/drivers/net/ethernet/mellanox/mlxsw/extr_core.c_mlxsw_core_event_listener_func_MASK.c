
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct mlxsw_reg_info {int len; int id; } ;
struct TYPE_2__ {int (* func ) (struct mlxsw_reg_info*,char*,int ) ;} ;
struct mlxsw_event_listener_item {int priv; TYPE_1__ el; } ;


 int FUNC_0 (struct sk_buff*) ;
 char* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct mlxsw_reg_info*,char*,int ) ;

__attribute__((used)) static void FUNC_7(struct sk_buff *VAR_0, u8 VAR_1,
        void *VAR_2)
{
 struct mlxsw_event_listener_item *VAR_3 = VAR_2;
 struct mlxsw_reg_info VAR_4;
 char *VAR_5;
 char *VAR_6 = FUNC_1(VAR_0);
 char *VAR_7 = FUNC_4(VAR_0);

 VAR_4.id = FUNC_2(VAR_6);
 VAR_4.len = (FUNC_5(VAR_7) - 1) * sizeof(u32);
 VAR_5 = FUNC_3(VAR_6);
 VAR_3->el.func(&VAR_4, VAR_5, VAR_3->priv);
 FUNC_0(VAR_0);
}
