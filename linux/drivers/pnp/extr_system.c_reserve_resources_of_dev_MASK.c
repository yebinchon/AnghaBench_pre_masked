
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; int start; int end; } ;
struct pnp_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct resource* FUNC_0 (struct pnp_dev*,int ,int) ;
 int FUNC_1 (struct pnp_dev*,struct resource*,int) ;

__attribute__((used)) static void FUNC_2(struct pnp_dev *VAR_3)
{
 struct resource *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; (VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_5)); VAR_5++) {
  if (VAR_4->flags & VAR_0)
   continue;
  if (VAR_4->start == 0)
   continue;
  if (VAR_4->start < 0x100)
   continue;
  if (VAR_4->end < VAR_4->start)
   continue;

  FUNC_1(VAR_3, VAR_4, 1);
 }

 for (VAR_5 = 0; (VAR_4 = FUNC_0(VAR_3, VAR_2, VAR_5)); VAR_5++) {
  if (VAR_4->flags & VAR_0)
   continue;

  FUNC_1(VAR_3, VAR_4, 0);
 }
}
