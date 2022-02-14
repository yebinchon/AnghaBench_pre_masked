
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char const*,unsigned int*) ;
 scalar_t__ FUNC_1 (unsigned char const) ;

int FUNC_2(const unsigned char *VAR_2, unsigned *VAR_3)
{
 int VAR_4;
 if (*VAR_3 > 254) return -VAR_1;
 FUNC_0(VAR_2, VAR_3);
 if (!*VAR_3) return -VAR_0;
 for (VAR_4 = 0; VAR_4 < *VAR_3; VAR_4++) if (FUNC_1(VAR_2[VAR_4])) return -VAR_0;
 if (*VAR_3 == 1) if (VAR_2[0] == '.') return -VAR_0;
 if (*VAR_3 == 2) if (VAR_2[0] == '.' && VAR_2[1] == '.') return -VAR_0;
 return 0;
}
