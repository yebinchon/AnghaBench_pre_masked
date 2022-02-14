
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct mv88e6xxx_chip {int ppu_work; } ;


 struct mv88e6xxx_chip* VAR_0 ;
 struct mv88e6xxx_chip* FUNC_0 (int ,struct timer_list*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct mv88e6xxx_chip *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);

 FUNC_1(&VAR_3->ppu_work);
}
