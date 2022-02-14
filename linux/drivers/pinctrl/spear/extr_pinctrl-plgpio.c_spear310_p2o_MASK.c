
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0)
{
 int VAR_1 = VAR_0;

 if (VAR_0 <= 27)
  VAR_1 += 4;
 else if (VAR_0 <= 33)
  VAR_1 = -1;
 else if (VAR_0 <= 97)
  VAR_1 -= 2;
 else if (VAR_0 <= 101)
  VAR_1 = 101 - VAR_0;
 else
  VAR_1 = -1;

 return VAR_1;
}
