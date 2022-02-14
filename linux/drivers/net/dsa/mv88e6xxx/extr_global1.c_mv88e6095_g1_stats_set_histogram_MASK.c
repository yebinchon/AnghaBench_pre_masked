
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int ,int *) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int ,int ) ;

int FUNC_2(struct mv88e6xxx_chip *VAR_2)
{
 u16 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0, &VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_3 |= VAR_1;

 VAR_4 = FUNC_1(VAR_2, VAR_0, VAR_3);

 return VAR_4;
}
