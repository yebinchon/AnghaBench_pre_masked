
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; int start; } ;
struct pnp_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct pnp_dev*,struct resource*) ;

__attribute__((used)) static void FUNC_2(struct pnp_dev *VAR_1, struct resource *VAR_2)
{
 if (!(VAR_2->flags & VAR_0))
  FUNC_0(VAR_2->start, 1);

 FUNC_1(VAR_1, VAR_2);
}
