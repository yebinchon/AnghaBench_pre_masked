
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcp_sa11x0 {int mccr0; } ;
struct mcp {int dummy; } ;


 int FUNC_0 (struct mcp_sa11x0*) ;
 struct mcp_sa11x0* FUNC_1 (struct mcp*) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static void
FUNC_3(struct mcp *VAR_0, unsigned int VAR_1)
{
 struct mcp_sa11x0 *VAR_2 = FUNC_1(VAR_0);

 VAR_1 /= 32;

 VAR_2->mccr0 &= ~0x00007f00;
 VAR_2->mccr0 |= VAR_1 << 8;
 FUNC_2(VAR_2->mccr0, FUNC_0(VAR_2));
}
