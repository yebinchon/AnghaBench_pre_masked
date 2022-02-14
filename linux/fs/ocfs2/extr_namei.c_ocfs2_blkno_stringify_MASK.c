
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,char*,long long) ;
 int FUNC_2 (scalar_t__,char*,int) ;

__attribute__((used)) static int FUNC_3(u64 VAR_2, char *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_1 + 1, "%016llx",
      (long long)VAR_2);
 if (VAR_5 <= 0) {
  if (VAR_5)
   VAR_4 = VAR_5;
  else
   VAR_4 = -VAR_0;
  FUNC_0(VAR_4);
  goto bail;
 }
 if (VAR_5 != VAR_1) {
  VAR_4 = -VAR_0;
  FUNC_0(VAR_4);
  goto bail;
 }

 FUNC_2(VAR_2, VAR_3, VAR_5);

 VAR_4 = 0;
bail:
 if (VAR_4 < 0)
  FUNC_0(VAR_4);
 return VAR_4;
}
