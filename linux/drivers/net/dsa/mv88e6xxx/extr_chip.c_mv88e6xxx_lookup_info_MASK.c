
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_info {unsigned int prod_num; } ;


 int FUNC_0 (struct mv88e6xxx_info const*) ;
 struct mv88e6xxx_info const* VAR_0 ;

__attribute__((used)) static const struct mv88e6xxx_info *FUNC_1(unsigned int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); ++VAR_2)
  if (VAR_0[VAR_2].prod_num == VAR_1)
   return &VAR_0[VAR_2];

 return ((void*)0);
}
