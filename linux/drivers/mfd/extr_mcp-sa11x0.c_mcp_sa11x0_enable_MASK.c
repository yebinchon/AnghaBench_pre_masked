
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcp_sa11x0 {int mccr0; } ;
struct mcp {int dummy; } ;


 int FUNC_0 (struct mcp_sa11x0*) ;
 int VAR_0 ;
 int FUNC_1 (struct mcp_sa11x0*) ;
 struct mcp_sa11x0* FUNC_2 (struct mcp*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct mcp *VAR_1)
{
 struct mcp_sa11x0 *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(-1, FUNC_1(VAR_2));
 VAR_2->mccr0 |= VAR_0;
 FUNC_4(VAR_2->mccr0, FUNC_0(VAR_2));
}
