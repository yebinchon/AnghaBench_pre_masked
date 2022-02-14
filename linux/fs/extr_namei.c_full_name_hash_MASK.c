
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (void const*) ;
 unsigned long FUNC_2 (unsigned char,unsigned long) ;

unsigned int FUNC_3(const void *VAR_0, const char *VAR_1, unsigned int VAR_2)
{
 unsigned long VAR_3 = FUNC_1(VAR_0);
 while (VAR_2--)
  VAR_3 = FUNC_2((unsigned char)*VAR_1++, VAR_3);
 return FUNC_0(VAR_3);
}
