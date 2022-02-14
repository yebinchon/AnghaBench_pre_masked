
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(int VAR_0)
{



 if ((VAR_0 >= 0x30 && VAR_0 <= 0x39) ||
  (VAR_0 >= 0x41 && VAR_0 <= 0x5A) ||
  (VAR_0 >= 0x61 && VAR_0 <= 0x7A) ||
  VAR_0 == 0 ||
  VAR_0 == 0x2D ||
  VAR_0 == 0x5F ||
  VAR_0 == 0x2C )
  return 1;
 return 0;
}
