
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_0)
{
 if (VAR_0 >= 4096) {

  unsigned int VAR_1;

  VAR_1 = VAR_0 / 4096;
  VAR_1 = VAR_1 < 4 ? 1 : (VAR_1 < 8 ? 2 : 4);

  return 64 * 4096 * VAR_1 / VAR_0;
 } else {

  return 64;
 }
}
