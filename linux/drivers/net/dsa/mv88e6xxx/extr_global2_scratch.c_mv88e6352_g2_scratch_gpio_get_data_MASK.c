
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int ,unsigned int,int*) ;

__attribute__((used)) static int FUNC_1(struct mv88e6xxx_chip *VAR_1,
           unsigned int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1,
        VAR_0,
        VAR_2, &VAR_3);
 if (VAR_4)
  return VAR_4;

 return VAR_3;
}
