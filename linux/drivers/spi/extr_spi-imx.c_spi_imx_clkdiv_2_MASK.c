
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_0,
  unsigned int VAR_1, unsigned int *VAR_2)
{
 int VAR_3, VAR_4 = 4;

 for (VAR_3 = 0; VAR_3 < 7; VAR_3++) {
  if (VAR_1 * VAR_4 >= VAR_0)
   goto out;
  VAR_4 <<= 1;
 }

out:
 *VAR_2 = VAR_0 / VAR_4;
 return VAR_3;
}
