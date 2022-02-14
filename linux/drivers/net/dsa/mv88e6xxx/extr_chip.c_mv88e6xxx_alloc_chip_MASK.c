
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_chip {int policies; int mdios; int reg_lock; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct mv88e6xxx_chip* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct mv88e6xxx_chip *FUNC_4(struct device *VAR_1)
{
 struct mv88e6xxx_chip *VAR_2;

 VAR_2 = FUNC_1(VAR_1, sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->dev = VAR_1;

 FUNC_3(&VAR_2->reg_lock);
 FUNC_0(&VAR_2->mdios);
 FUNC_2(&VAR_2->policies);

 return VAR_2;
}
