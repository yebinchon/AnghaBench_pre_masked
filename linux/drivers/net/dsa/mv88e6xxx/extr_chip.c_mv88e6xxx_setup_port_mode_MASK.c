
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv88e6xxx_chip {TYPE_1__* info; int ds; } ;
struct TYPE_2__ {scalar_t__ tag_protocol; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int) ;
 int FUNC_3 (struct mv88e6xxx_chip*,int) ;
 int FUNC_4 (struct mv88e6xxx_chip*,int) ;

__attribute__((used)) static int FUNC_5(struct mv88e6xxx_chip *VAR_3, int VAR_4)
{
 if (FUNC_0(VAR_3->ds, VAR_4))
  return FUNC_2(VAR_3, VAR_4);

 if (FUNC_1(VAR_3->ds, VAR_4))
  return FUNC_4(VAR_3, VAR_4);


 if (VAR_3->info->tag_protocol == VAR_0)
  return FUNC_2(VAR_3, VAR_4);

 if (VAR_3->info->tag_protocol == VAR_1)
  return FUNC_3(VAR_3, VAR_4);

 return -VAR_2;
}
