
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ks_net {int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ks_net*,int ) ;
 int FUNC_1 (struct ks_net*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ks_net *VAR_6)
{
 u16 VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_2);

 FUNC_1(VAR_6, VAR_2, VAR_7 | VAR_5);






 VAR_7 = FUNC_0(VAR_6, VAR_1);
 FUNC_1(VAR_6, VAR_1, VAR_7 | VAR_4);


 VAR_7 = FUNC_0(VAR_6, VAR_0);
 FUNC_1(VAR_6, VAR_0, VAR_7 | VAR_3);
 VAR_6->enabled = 1;
}
