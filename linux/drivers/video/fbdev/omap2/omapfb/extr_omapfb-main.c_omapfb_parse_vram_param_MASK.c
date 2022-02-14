
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned long,char*) ;
 unsigned long FUNC_1 (char*,char**) ;
 void* FUNC_2 (char*,char**,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, int VAR_2,
  unsigned long *VAR_3, unsigned long *VAR_4)
{
 unsigned int VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7 = 0;
 char *VAR_8, *VAR_9;

 VAR_9 = (char *)VAR_1;

 while (1) {
  VAR_8 = VAR_9;

  VAR_5 = FUNC_2(VAR_8, &VAR_8, 10);

  if (VAR_8 == VAR_9)
   return -VAR_0;

  if (*VAR_8 != ':')
   return -VAR_0;

  if (VAR_5 >= VAR_2)
   return -VAR_0;

  VAR_6 = FUNC_1(VAR_8 + 1, &VAR_8);

  if (!VAR_6)
   return -VAR_0;

  VAR_7 = 0;

  if (*VAR_8 == '@') {
   VAR_7 = FUNC_2(VAR_8 + 1, &VAR_8, 16);

   if (!VAR_7)
    return -VAR_0;

  }

  FUNC_0(VAR_7,
   "reserving memory at predefined address not supported\n");

  VAR_4[VAR_5] = VAR_7;
  VAR_3[VAR_5] = VAR_6;

  if (*VAR_8 == 0)
   break;

  if (*VAR_8 != ',')
   return -VAR_0;

  ++VAR_8;

  VAR_9 = VAR_8;
 }

 return 0;
}
