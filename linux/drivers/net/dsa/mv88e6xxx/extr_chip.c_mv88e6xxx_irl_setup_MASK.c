
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mv88e6xxx_chip {TYPE_2__* info; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* irl_init_all ) (struct mv88e6xxx_chip*,int) ;} ;


 int FUNC_0 (struct mv88e6xxx_chip*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int) ;

__attribute__((used)) static int FUNC_2(struct mv88e6xxx_chip *VAR_0)
{
 int VAR_1;
 int VAR_2;

 if (!VAR_0->info->ops->irl_init_all)
  return 0;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++) {



  VAR_2 = VAR_0->info->ops->irl_init_all(VAR_0, VAR_1);
  if (VAR_2)
   return VAR_2;
 }

 return 0;
}
