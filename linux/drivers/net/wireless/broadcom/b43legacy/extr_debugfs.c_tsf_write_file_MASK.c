
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct b43legacy_wldev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43legacy_wldev*,int ) ;
 int FUNC_1 (char const*,char*,unsigned long long*) ;

__attribute__((used)) static int FUNC_2(struct b43legacy_wldev *VAR_1, const char *VAR_2, size_t VAR_3)
{
 u64 VAR_4;

 if (FUNC_1(VAR_2, "%llu", (unsigned long long *)(&VAR_4)) != 1)
  return -VAR_0;
 FUNC_0(VAR_1, VAR_4);

 return 0;
}
