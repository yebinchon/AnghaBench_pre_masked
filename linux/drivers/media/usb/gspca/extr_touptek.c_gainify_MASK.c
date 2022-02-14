
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0)
{






 if (VAR_0 <= 0x7F)
  return 0x1000 | VAR_0;
 else if (VAR_0 <= 0xFF)
  return 0x1080 | VAR_0 / 2;
 else
  return 0x1180 | VAR_0 / 4;
}
