
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct mv88e6xxx_chip {TYPE_1__* info; } ;
typedef enum mv88e6xxx_frame_mode { ____Placeholder_mv88e6xxx_frame_mode } mv88e6xxx_frame_mode ;
typedef enum mv88e6xxx_egress_mode { ____Placeholder_mv88e6xxx_egress_mode } mv88e6xxx_egress_mode ;
struct TYPE_4__ {int (* port_set_frame_mode ) (struct mv88e6xxx_chip*,int,int) ;int (* port_set_ether_type ) (struct mv88e6xxx_chip*,int,int ) ;} ;
struct TYPE_3__ {TYPE_2__* ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct mv88e6xxx_chip *VAR_1, int VAR_2,
       enum mv88e6xxx_frame_mode VAR_3,
       enum mv88e6xxx_egress_mode VAR_4, u16 VAR_5)
{
 int VAR_6;

 if (!VAR_1->info->ops->port_set_frame_mode)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = VAR_1->info->ops->port_set_frame_mode(VAR_1, VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;

 if (VAR_1->info->ops->port_set_ether_type)
  return VAR_1->info->ops->port_set_ether_type(VAR_1, VAR_2, VAR_5);

 return 0;
}
