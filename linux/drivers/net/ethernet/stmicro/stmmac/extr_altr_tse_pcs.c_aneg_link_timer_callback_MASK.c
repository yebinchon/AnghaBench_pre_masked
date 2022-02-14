
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tse_pcs {scalar_t__ autoneg; } ;
struct timer_list {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tse_pcs*) ;
 struct tse_pcs* FUNC_1 (int ,struct timer_list*,int ) ;
 struct tse_pcs* VAR_3 ;
 int FUNC_2 (struct tse_pcs*) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_4)
{
 struct tse_pcs *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_2);

 if (VAR_5->autoneg == VAR_1)
  FUNC_0(VAR_5);
 else if (VAR_5->autoneg == VAR_0)
  FUNC_2(VAR_5);
}
