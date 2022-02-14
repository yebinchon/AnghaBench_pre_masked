
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_chip {int dummy; } ;
struct dsa_switch {struct mv88e6xxx_chip* priv; } ;
typedef int dsa_fdb_dump_cb_t ;


 int FUNC_0 (struct mv88e6xxx_chip*,int,int *,void*) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static int FUNC_3(struct dsa_switch *VAR_0, int VAR_1,
       dsa_fdb_dump_cb_t *VAR_2, void *VAR_3)
{
 struct mv88e6xxx_chip *VAR_4 = VAR_0->priv;
 int VAR_5;

 FUNC_1(VAR_4);
 VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_4);

 return VAR_5;
}
