
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mv88e6xxx_chip {TYPE_2__* info; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* serdes_power ) (struct mv88e6xxx_chip*,int,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int,int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct mv88e6xxx_chip *VAR_1,
         int VAR_2, u8 VAR_3)
{
 if (!VAR_1->info->ops->serdes_power)
  return -VAR_0;

 return VAR_1->info->ops->serdes_power(VAR_1, VAR_2, VAR_3, 1);
}
