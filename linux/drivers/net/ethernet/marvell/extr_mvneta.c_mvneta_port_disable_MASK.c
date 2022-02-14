
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvneta_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mvneta_port*,int ) ;
 int FUNC_1 (struct mvneta_port*,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct mvneta_port *VAR_2)
{
 u32 VAR_3;


 VAR_3 = FUNC_0(VAR_2, VAR_1);
 VAR_3 &= ~VAR_0;
 FUNC_1(VAR_2, VAR_1, VAR_3);

 FUNC_2(200);
}
