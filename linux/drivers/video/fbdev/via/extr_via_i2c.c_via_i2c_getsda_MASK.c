
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct via_port_cfg {scalar_t__ type; int ioport_index; int io_port; } ;
struct TYPE_2__ {int reg_lock; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(void *VAR_2)
{
 struct via_port_cfg *VAR_3 = VAR_2;
 unsigned long VAR_4;
 int VAR_5 = 0;

 FUNC_0(&VAR_1->reg_lock, VAR_4);
 if (VAR_3->type == VAR_0)
  FUNC_3(VAR_3->io_port, VAR_3->ioport_index,
   0, 0x40);
 if (FUNC_2(VAR_3->io_port, VAR_3->ioport_index) & 0x04)
  VAR_5 = 1;
 FUNC_1(&VAR_1->reg_lock, VAR_4);
 return VAR_5;
}
