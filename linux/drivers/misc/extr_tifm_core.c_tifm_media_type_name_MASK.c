
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *FUNC_0(unsigned char VAR_0, unsigned char VAR_1)
{
 const char *VAR_2[3][3] = {
  { "SmartMedia/xD", "MemoryStick", "MMC/SD" },
  { "XD", "MS", "SD"},
  { "xd", "ms", "sd"}
 };

 if (VAR_1 > 2 || VAR_0 < 1 || VAR_0 > 3)
  return ((void*)0);
 return VAR_2[VAR_1][VAR_0 - 1];
}
