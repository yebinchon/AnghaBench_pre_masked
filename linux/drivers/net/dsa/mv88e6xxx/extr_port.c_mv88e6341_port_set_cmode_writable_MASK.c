
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mv88e6xxx_chip {TYPE_1__* info; } ;
struct TYPE_2__ {int port_base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int,int,int ,int*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mv88e6xxx_chip *VAR_3,
          int VAR_4)
{
 int VAR_5, VAR_6;
 u16 VAR_7, VAR_8;

 if (VAR_4 != 5)
  return -VAR_0;

 VAR_6 = VAR_3->info->port_base_addr + VAR_4;

 VAR_5 = FUNC_0(VAR_3, 0x7, VAR_6, 0, &VAR_7);
 if (VAR_5)
  return VAR_5;

 VAR_8 = VAR_1 |
        VAR_2;

 if ((VAR_7 & VAR_8) == VAR_8)
  return 0;

 VAR_7 |= VAR_8;
 return FUNC_1(VAR_3, 0x7, VAR_6, 0, VAR_7);
}
