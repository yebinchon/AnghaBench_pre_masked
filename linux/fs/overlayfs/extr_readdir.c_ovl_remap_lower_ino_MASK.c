
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (char*,int,char const*,int,int) ;

__attribute__((used)) static u64 FUNC_1(u64 VAR_0, int VAR_1, int VAR_2,
          const char *VAR_3, int VAR_4)
{
 if (VAR_0 >> (64 - VAR_1)) {
  FUNC_0("overlayfs: d_ino too big (%.*s, ino=%llu, xinobits=%d)\n",
        VAR_4, VAR_3, VAR_0, VAR_1);
  return VAR_0;
 }

 return VAR_0 | ((u64)VAR_2) << (64 - VAR_1);
}
