
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pxa_udc {int dummy; } ;
struct pxa_ep {struct pxa_udc* dev; } ;


 int FUNC_0 (struct pxa_ep*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pxa_udc*,int ) ;
 int FUNC_2 (struct pxa_udc*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct pxa_ep *VAR_2)
{
 struct pxa_udc *VAR_3 = VAR_2->dev;
 int VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5 = FUNC_1(VAR_3, VAR_0);
 u32 VAR_6 = FUNC_1(VAR_3, VAR_1);

 if (VAR_4 < 16)
  FUNC_2(VAR_3, VAR_0, VAR_5 | (3 << (VAR_4 * 2)));
 else
  FUNC_2(VAR_3, VAR_1, VAR_6 | (3 << ((VAR_4 - 16) * 2)));
}
