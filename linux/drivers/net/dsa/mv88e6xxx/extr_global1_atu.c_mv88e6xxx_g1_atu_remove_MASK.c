
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mv88e6xxx_chip {TYPE_1__* info; } ;
struct TYPE_2__ {int atu_move_port_mask; } ;


 int FUNC_0 (struct mv88e6xxx_chip*,int ,int,int,int) ;

int FUNC_1(struct mv88e6xxx_chip *VAR_0, u16 VAR_1, int VAR_2,
       bool VAR_3)
{
 int VAR_4 = VAR_2;
 int VAR_5 = VAR_0->info->atu_move_port_mask;

 return FUNC_0(VAR_0, VAR_1, VAR_4, VAR_5, VAR_3);
}
