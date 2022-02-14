
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nubus_dirent {int mask; } ;


 unsigned char* FUNC_0 (struct nubus_dirent const*) ;
 unsigned char FUNC_1 (unsigned char**,int,int ) ;

unsigned int FUNC_2(char *VAR_0, const struct nubus_dirent *VAR_1,
    unsigned int VAR_2)
{
 char *VAR_3 = VAR_0;
 unsigned char *VAR_4 = FUNC_0(VAR_1);

 while (VAR_2 > 1) {
  unsigned char VAR_5 = FUNC_1(&VAR_4, 1, VAR_1->mask);

  if (!VAR_5)
   break;
  *VAR_3++ = VAR_5;
  VAR_2--;
 }
 if (VAR_2 > 0)
  *VAR_3 = '\0';
 return VAR_3 - VAR_0;
}
