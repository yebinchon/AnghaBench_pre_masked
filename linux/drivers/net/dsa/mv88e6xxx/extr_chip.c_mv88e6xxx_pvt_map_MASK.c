
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mv88e6xxx_chip {TYPE_1__* ds; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int,int,int ) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,int) ;

__attribute__((used)) static int FUNC_3(struct mv88e6xxx_chip *VAR_1, int VAR_2, int VAR_3)
{
 u16 VAR_4 = 0;

 if (!FUNC_1(VAR_1))
  return -VAR_0;


 if (VAR_2 != VAR_1->ds->index)
  VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
