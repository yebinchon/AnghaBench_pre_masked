
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char* FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char**,char*,int ) ;

__attribute__((used)) static inline int
FUNC_2(char **VAR_5, char *VAR_6, unsigned char **VAR_7)
{
 int VAR_8;


 if (*VAR_7)
  return -VAR_0;


 VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_4);
 if (VAR_8 != VAR_2)
  return -VAR_0;

 *VAR_7 = FUNC_0(VAR_6, VAR_2, VAR_3);
 if (*VAR_7 == ((void*)0))
  return -VAR_1;

 return 0;
}
