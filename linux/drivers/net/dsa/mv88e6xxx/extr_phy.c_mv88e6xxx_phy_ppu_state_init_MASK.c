
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_chip {int ppu_timer; int ppu_work; int ppu_mutex; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mv88e6xxx_chip *VAR_2)
{
 FUNC_1(&VAR_2->ppu_mutex);
 FUNC_0(&VAR_2->ppu_work, VAR_1);
 FUNC_2(&VAR_2->ppu_timer, VAR_0, 0);
}
