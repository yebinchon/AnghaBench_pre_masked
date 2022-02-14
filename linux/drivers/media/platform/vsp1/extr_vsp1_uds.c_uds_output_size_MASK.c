
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_0, unsigned int VAR_1)
{
 if (VAR_1 > 4096) {

  unsigned int VAR_2;

  VAR_2 = VAR_1 / 4096;
  VAR_2 = VAR_2 < 4 ? 1 : (VAR_2 < 8 ? 2 : 4);

  return (VAR_0 - 1) / VAR_2 * VAR_2 * 4096 / VAR_1 + 1;
 } else {

  return (VAR_0 - 1) * 4096 / VAR_1 + 1;
 }
}
