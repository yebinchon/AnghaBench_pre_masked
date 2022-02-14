
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 char** VAR_4 ;

int FUNC_3(const char *VAR_5, char **VAR_6)
{
 char *VAR_7, *VAR_8 = ((void*)0);
 int VAR_9 = 0;
 int VAR_10 = FUNC_1(VAR_5), VAR_11;

 if (VAR_10 && VAR_3 && FUNC_2(VAR_5, "offb", 4))
  VAR_9 = 1;

 if (VAR_10 && !VAR_9) {
  for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
   if (VAR_4[VAR_11] == ((void*)0))
    continue;
   if (!VAR_4[VAR_11][0])
    continue;
   VAR_7 = VAR_4[VAR_11];
   if (!FUNC_2(VAR_5, VAR_7, VAR_10) &&
       VAR_7[VAR_10] == ':')
    VAR_8 = VAR_7 + VAR_10 + 1;
  }
 }

 if (!VAR_8 && VAR_6 && VAR_2)
  VAR_8 = FUNC_0(VAR_2, VAR_1);
 if (VAR_8 && !FUNC_2(VAR_8, "off", 3))
  VAR_9 = 1;

 if (VAR_6)
  *VAR_6 = VAR_8;

 return VAR_9;
}
