
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_0)
{
 int VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 6; VAR_2++)
  VAR_1 |= (FUNC_1(VAR_0 & (FUNC_0(VAR_2) | FUNC_0(VAR_2 + 6))) & 0x1) << VAR_2;

 return VAR_1;
}
