
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2hb_region {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (char*,char**,int ) ;

__attribute__((used)) static int FUNC_3(struct o2hb_region *VAR_2,
     const char *VAR_3,
     unsigned long *VAR_4,
     unsigned int *VAR_5)
{
 unsigned long VAR_6;
 char *VAR_7 = (char *)VAR_3;

 VAR_6 = FUNC_2(VAR_7, &VAR_7, 0);
 if (!VAR_7 || (*VAR_7 && (*VAR_7 != '\n')))
  return -VAR_0;


 if (VAR_6 > 4096 || VAR_6 < 512)
  return -VAR_1;
 if (FUNC_1(VAR_6) != 1)
  return -VAR_0;

 if (VAR_4)
  *VAR_4 = VAR_6;
 if (VAR_5)
  *VAR_5 = FUNC_0(VAR_6) - 1;

 return 0;
}
