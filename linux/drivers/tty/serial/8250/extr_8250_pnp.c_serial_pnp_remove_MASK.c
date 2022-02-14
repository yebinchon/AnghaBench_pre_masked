
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {int capabilities; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pnp_dev*) ;
 int FUNC_1 (long) ;

__attribute__((used)) static void FUNC_2(struct pnp_dev *VAR_1)
{
 long VAR_2 = (long)FUNC_0(VAR_1);

 VAR_1->capabilities &= ~VAR_0;
 if (VAR_2)
  FUNC_1(VAR_2 - 1);
}
