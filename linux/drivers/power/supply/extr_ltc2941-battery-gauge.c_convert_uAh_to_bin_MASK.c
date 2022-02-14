
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc294x_info {int Qlsb; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(
 const struct ltc294x_info *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = (VAR_2 * 100) / (VAR_1->Qlsb/10);
 return (VAR_3 < VAR_0) ? VAR_3 : VAR_0;
}
