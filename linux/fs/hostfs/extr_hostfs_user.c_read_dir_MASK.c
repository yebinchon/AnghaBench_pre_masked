
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; unsigned long long d_ino; unsigned int d_type; unsigned long long d_off; } ;
typedef int DIR ;


 struct dirent* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;

char *FUNC_2(void *VAR_0, unsigned long long *VAR_1,
        unsigned long long *VAR_2, int *VAR_3,
        unsigned int *VAR_4)
{
 DIR *VAR_5 = VAR_0;
 struct dirent *VAR_6;

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 *VAR_3 = FUNC_1(VAR_6->d_name);
 *VAR_2 = VAR_6->d_ino;
 *VAR_4 = VAR_6->d_type;
 *VAR_1 = VAR_6->d_off;
 return VAR_6->d_name;
}
