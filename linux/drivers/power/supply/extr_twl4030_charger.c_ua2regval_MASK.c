
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0, bool VAR_1)
{
 int VAR_2;
 if (VAR_1)
  VAR_0 /= 2;
 VAR_2 = (VAR_0 * 10 + 8500 * 1000) / 16618;

 if (VAR_2 < 512)
  VAR_2 = 512;
 return VAR_2;
}
