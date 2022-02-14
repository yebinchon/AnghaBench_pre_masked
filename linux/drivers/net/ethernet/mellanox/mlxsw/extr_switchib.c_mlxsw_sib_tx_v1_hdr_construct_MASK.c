
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct mlxsw_tx_info {int local_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ) ;
 char* FUNC_8 (struct sk_buff*,int ) ;

__attribute__((used)) static void
FUNC_9(struct sk_buff *VAR_5,
         const struct mlxsw_tx_info *VAR_6)
{
 char *VAR_7 = FUNC_8(VAR_5, VAR_1);

 FUNC_0(VAR_7, 0, VAR_1);

 FUNC_7(VAR_7, VAR_4);
 FUNC_2(VAR_7, VAR_0);
 FUNC_4(VAR_7, VAR_2);
 FUNC_5(VAR_7, 0);
 FUNC_1(VAR_7, 1);
 FUNC_3(VAR_7, VAR_6->local_port);
 FUNC_6(VAR_7, VAR_3);
}
