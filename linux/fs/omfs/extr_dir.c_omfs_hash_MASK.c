
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_4 ^= FUNC_0(VAR_0[VAR_3]) << (VAR_3 % 24);
 return VAR_4 % VAR_2;
}
