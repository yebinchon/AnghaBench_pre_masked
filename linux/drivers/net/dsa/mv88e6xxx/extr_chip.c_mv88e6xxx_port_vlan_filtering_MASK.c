
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mv88e6xxx_chip {TYPE_1__* info; } ;
struct dsa_switch {struct mv88e6xxx_chip* priv; } ;
struct TYPE_2__ {int max_vid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int,int ) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static int FUNC_3(struct dsa_switch *VAR_3, int VAR_4,
      bool VAR_5)
{
 struct mv88e6xxx_chip *VAR_6 = VAR_3->priv;
 u16 VAR_7 = VAR_5 ? VAR_2 :
  VAR_1;
 int VAR_8;

 if (!VAR_6->info->max_vid)
  return -VAR_0;

 FUNC_1(VAR_6);
 VAR_8 = FUNC_0(VAR_6, VAR_4, VAR_7);
 FUNC_2(VAR_6);

 return VAR_8;
}
