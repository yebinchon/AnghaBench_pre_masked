
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char*,int,int,int,int) ;
 char FUNC_4 (char) ;

__attribute__((used)) static ssize_t FUNC_5(const char *VAR_1, u64 *VAR_2, int VAR_3)
{
 const char *VAR_4;
 char VAR_5;
 u32 VAR_6;
 u32 VAR_7 = 0;
 u32 VAR_8 = 0;
 u32 VAR_9;

 *VAR_2 = 0;
 for (VAR_4 = VAR_1; VAR_4 < &VAR_1[VAR_0 - 1]; VAR_4++) {
  VAR_5 = *VAR_4;
  if (VAR_5 == '\n' && VAR_4[1] == '\0')
   continue;
  if (VAR_3 && VAR_8++ == 2 && VAR_7++ < 7) {
   VAR_8 = 0;
   if (VAR_5 == ':')
    continue;
   VAR_9 = 1;
   goto fail;
  }
  if (VAR_5 == '\0') {
   VAR_9 = 2;
   if (VAR_3 && VAR_7 != 8)
    goto fail;
   return VAR_4 - VAR_1;
  }
  VAR_9 = 3;
  if (FUNC_0(VAR_5))
   VAR_6 = VAR_5 - '0';
  else if (FUNC_2(VAR_5) && (FUNC_1(VAR_5) || !VAR_3))
   VAR_6 = FUNC_4(VAR_5) - 'a' + 10;
  else
   goto fail;
  *VAR_2 = (*VAR_2 << 4) | VAR_6;
 }
 VAR_9 = 4;
fail:
 FUNC_3("err %u len %zu pos %u byte %u\n",
   VAR_9, VAR_4 - VAR_1, VAR_8, VAR_7);
 return -1;
}
