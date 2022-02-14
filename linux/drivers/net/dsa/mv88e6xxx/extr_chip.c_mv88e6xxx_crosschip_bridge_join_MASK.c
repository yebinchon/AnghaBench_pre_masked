
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mv88e6xxx_chip {int dummy; } ;
struct dsa_switch {struct mv88e6xxx_chip* priv; } ;


 int FUNC_0 (struct mv88e6xxx_chip*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int) ;
 int FUNC_2 (struct mv88e6xxx_chip*) ;
 int FUNC_3 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static int FUNC_4(struct dsa_switch *VAR_0, int VAR_1,
        int VAR_2, struct net_device *VAR_3)
{
 struct mv88e6xxx_chip *VAR_4 = VAR_0->priv;
 int VAR_5;

 if (!FUNC_0(VAR_4))
  return 0;

 FUNC_2(VAR_4);
 VAR_5 = FUNC_1(VAR_4, VAR_1, VAR_2);
 FUNC_3(VAR_4);

 return VAR_5;
}
