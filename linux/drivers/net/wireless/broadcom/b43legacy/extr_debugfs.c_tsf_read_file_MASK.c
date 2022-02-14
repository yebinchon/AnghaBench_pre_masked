
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct b43legacy_wldev {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct b43legacy_wldev*,int*) ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_2(struct b43legacy_wldev *VAR_0, char *VAR_1, size_t VAR_2)
{
 ssize_t VAR_3 = 0;
 u64 VAR_4;

 FUNC_0(VAR_0, &VAR_4);
 FUNC_1("0x%08x%08x\n",
  (unsigned int)((VAR_4 & 0xFFFFFFFF00000000ULL) >> 32),
  (unsigned int)(VAR_4 & 0xFFFFFFFFULL));

 return VAR_3;
}
