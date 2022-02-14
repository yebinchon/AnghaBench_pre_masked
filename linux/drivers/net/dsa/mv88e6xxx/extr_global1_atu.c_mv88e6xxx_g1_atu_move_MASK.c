
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mv88e6xxx_chip {TYPE_1__* info; } ;
struct mv88e6xxx_atu_entry {int state; int portvec; int member_0; } ;
struct TYPE_2__ {unsigned long atu_move_port_mask; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long*,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int ,struct mv88e6xxx_atu_entry*,int) ;

__attribute__((used)) static int FUNC_2(struct mv88e6xxx_chip *VAR_1, u16 VAR_2,
     int VAR_3, int VAR_4, bool VAR_5)
{
 struct mv88e6xxx_atu_entry VAR_6 = { 0 };
 unsigned long VAR_7;
 int VAR_8;

 if (!VAR_1->info->atu_move_port_mask)
  return -VAR_0;

 VAR_7 = VAR_1->info->atu_move_port_mask;
 VAR_8 = FUNC_0(&VAR_7, 16);

 VAR_6.state = 0xf,
 VAR_6.portvec = VAR_3 & VAR_7;
 VAR_6.portvec |= (VAR_4 & VAR_7) << VAR_8;

 return FUNC_1(VAR_1, VAR_2, &VAR_6, VAR_5);
}
