
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (void const*) ;
 unsigned long FUNC_2 (int ,unsigned long) ;
 unsigned int FUNC_3 (char const*) ;

__attribute__((used)) static unsigned int FUNC_4(const char *VAR_1, const void *VAR_2)
{
 unsigned long VAR_3 = FUNC_1(VAR_2);
 unsigned int VAR_4 = FUNC_3(VAR_1);
 while (VAR_4--)
  VAR_3 = FUNC_2(*VAR_1++, VAR_3);
 VAR_3 = FUNC_0(VAR_3);
 VAR_3 &= 0x7fffffffU;

 if (VAR_3 < 2)
  VAR_3 += 2;
 if (VAR_3 >= VAR_0)
  VAR_3 = VAR_0 - 1;
 return VAR_3;
}
