
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (size_t,int ) ;
 int FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(const char *VAR_2, size_t VAR_3,
    const char *VAR_4, size_t VAR_5, char **VAR_6)
{
 char *VAR_7;
 size_t VAR_8 = VAR_5 + VAR_3 + 2;

 *VAR_6 = FUNC_0(VAR_8, VAR_1);
 if (!*VAR_6)
  return -VAR_0;

 VAR_7 = *VAR_6;
 FUNC_1(VAR_7, VAR_4, VAR_5);
 VAR_7 += VAR_5;
 *VAR_7++ = ':';

 FUNC_1(VAR_7, VAR_2, VAR_3);
 VAR_7 += VAR_3;
 *VAR_7 = '\0';
 return VAR_8;
}
