
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mv88e6xxx_chip {TYPE_1__* info; } ;
struct ethtool_regs {int version; } ;
struct dsa_switch {struct mv88e6xxx_chip* priv; } ;
struct TYPE_2__ {int prod_num; } ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int,int *) ;
 int FUNC_2 (struct mv88e6xxx_chip*) ;
 int FUNC_3 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static void FUNC_4(struct dsa_switch *VAR_0, int VAR_1,
          struct ethtool_regs *VAR_2, void *VAR_3)
{
 struct mv88e6xxx_chip *VAR_4 = VAR_0->priv;
 int VAR_5;
 u16 VAR_6;
 u16 *VAR_7 = VAR_3;
 int VAR_8;

 VAR_2->version = VAR_4->info->prod_num;

 FUNC_0(VAR_7, 0xff, 32 * sizeof(u16));

 FUNC_2(VAR_4);

 for (VAR_8 = 0; VAR_8 < 32; VAR_8++) {

  VAR_5 = FUNC_1(VAR_4, VAR_1, VAR_8, &VAR_6);
  if (!VAR_5)
   VAR_7[VAR_8] = VAR_6;
 }

 FUNC_3(VAR_4);
}
