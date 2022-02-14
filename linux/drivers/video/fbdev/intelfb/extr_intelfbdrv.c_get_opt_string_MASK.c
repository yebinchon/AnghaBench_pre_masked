
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static __inline__ char * FUNC_3(const char *VAR_1, const char *VAR_2)
{
 const char *VAR_3;
 int VAR_4;
 char *VAR_5;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 VAR_4 = 0;
 while (VAR_3[VAR_4] && VAR_3[VAR_4] != ' ' && VAR_3[VAR_4] != ',')
  VAR_4++;
 VAR_5 = FUNC_1(VAR_4 + 1, VAR_0);
 if (VAR_5) {
  FUNC_2(VAR_5, VAR_3, VAR_4);
  VAR_5[VAR_4] = '\0';
 }
 return VAR_5;
}
