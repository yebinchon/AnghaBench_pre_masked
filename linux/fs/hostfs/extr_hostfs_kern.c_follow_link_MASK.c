
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int,int ) ;
 int FUNC_6 (char*,char*,char*,char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,char) ;

__attribute__((used)) static char *FUNC_9(char *VAR_4)
{
 int VAR_5, VAR_6;
 char *VAR_7, *VAR_8, *VAR_9;

 VAR_7 = FUNC_1();
 if (!VAR_7) {
  VAR_6 = -VAR_1;
  goto out_free;
 }

 VAR_6 = FUNC_3(VAR_4, VAR_7, VAR_3);
 if (VAR_6 < 0)
  goto out_free;
 else if (VAR_6 == VAR_3) {
  VAR_6 = -VAR_0;
  goto out_free;
 }

 if (*VAR_7 == '/')
  return VAR_7;

 VAR_9 = FUNC_8(VAR_4, '/');
 if (VAR_9 == ((void*)0))
  return VAR_7;

 *(VAR_9 + 1) = '\0';
 VAR_5 = FUNC_7(VAR_4) + FUNC_7(VAR_7) + 1;

 VAR_8 = FUNC_5(VAR_5, VAR_2);
 if (VAR_8 == ((void*)0)) {
  VAR_6 = -VAR_1;
  goto out_free;
 }

 FUNC_6(VAR_8, "%s%s", VAR_4, VAR_7);
 FUNC_2(VAR_7);
 FUNC_4(VAR_4);
 return VAR_8;

 out_free:
 FUNC_2(VAR_7);
 return FUNC_0(VAR_6);
}
