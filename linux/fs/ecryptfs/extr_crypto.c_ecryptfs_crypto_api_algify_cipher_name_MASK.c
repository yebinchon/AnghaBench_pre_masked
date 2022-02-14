
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int,char*,char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(char **VAR_2,
        char *VAR_3,
        char *VAR_4)
{
 int VAR_5 = FUNC_2(VAR_3);
 int VAR_6 = FUNC_2(VAR_4);
 int VAR_7;
 int VAR_8;

 VAR_7 = (VAR_6 + VAR_5 + 3);
 (*VAR_2) = FUNC_0(VAR_7, VAR_1);
 if (!(*VAR_2)) {
  VAR_8 = -VAR_0;
  goto out;
 }
 FUNC_1((*VAR_2), VAR_7, "%s(%s)",
   VAR_4, VAR_3);
 VAR_8 = 0;
out:
 return VAR_8;
}
