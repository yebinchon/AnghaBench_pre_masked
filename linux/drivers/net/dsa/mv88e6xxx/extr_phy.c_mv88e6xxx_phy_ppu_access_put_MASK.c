
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_chip {int ppu_mutex; int ppu_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mv88e6xxx_chip *VAR_1)
{

 FUNC_0(&VAR_1->ppu_timer, VAR_0 + FUNC_1(10));
 FUNC_2(&VAR_1->ppu_mutex);
}
