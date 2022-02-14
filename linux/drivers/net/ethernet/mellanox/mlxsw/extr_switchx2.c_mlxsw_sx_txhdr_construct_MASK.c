
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct mlxsw_tx_info {int is_emad; int local_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (char*,int ) ;
 char* FUNC_14 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_15(struct sk_buff *VAR_15,
         const struct mlxsw_tx_info *VAR_16)
{
 char *VAR_17 = FUNC_14(VAR_15, VAR_6);
 bool VAR_18 = VAR_16->is_emad;

 FUNC_0(VAR_17, 0, VAR_6);


 FUNC_13(VAR_17, VAR_14);
 FUNC_3(VAR_17, VAR_5);
 FUNC_7(VAR_17, VAR_8);
 FUNC_5(VAR_17, VAR_18 ? VAR_4 :
        VAR_3);
 FUNC_11(VAR_17, 0);
 FUNC_6(VAR_17, VAR_16->local_port);
 FUNC_2(VAR_17, VAR_1);
 FUNC_8(VAR_17, VAR_18 ? VAR_9 :
           VAR_10);
 FUNC_1(VAR_17, VAR_0);
 FUNC_9(VAR_17, VAR_11);
 FUNC_10(VAR_17, VAR_12);
 FUNC_4(VAR_17, VAR_18 ? VAR_2 :
            VAR_7);
 FUNC_12(VAR_17, VAR_13);
}
