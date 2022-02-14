
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc294x_info {int Qlsb; } ;



__attribute__((used)) static inline int FUNC_0(
 const struct ltc294x_info *VAR_0, int VAR_1)
{
 return ((VAR_1 * (VAR_0->Qlsb / 10))) / 100;
}
