
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct mv88e6xxx_chip {TYPE_3__* info; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {TYPE_1__* avb_ops; } ;
struct TYPE_4__ {int (* ptp_read ) (struct mv88e6xxx_chip*,int,int *,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int,int *,int) ;

__attribute__((used)) static int FUNC_1(struct mv88e6xxx_chip *VAR_1, int VAR_2,
         u16 *VAR_3)
{
 if (!VAR_1->info->ops->avb_ops->ptp_read)
  return -VAR_0;

 return VAR_1->info->ops->avb_ops->ptp_read(VAR_1, VAR_2, VAR_3, 1);
}
