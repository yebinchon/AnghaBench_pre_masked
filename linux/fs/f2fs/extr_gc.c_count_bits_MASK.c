
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ,unsigned long const*) ;

__attribute__((used)) static unsigned int FUNC_1(const unsigned long *VAR_0,
    unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3 = VAR_1 + VAR_2, VAR_4 = 0;

 while (VAR_1 < VAR_3) {
  if (FUNC_0(VAR_1++, VAR_0))
   ++VAR_4;
 }
 return VAR_4;
}
