
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct b43_wldev {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct b43_wldev*,unsigned int) ;
 int FUNC_1 (struct b43_wldev*,unsigned int,unsigned int) ;
 int FUNC_2 (char const*,char*,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct b43_wldev *VAR_4,
       const char *VAR_5, size_t VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9;
 int VAR_10;
 u16 VAR_11;

 VAR_10 = FUNC_2(VAR_5, "0x%X 0x%X 0x%X", &VAR_7, &VAR_8, &VAR_9);
 if (VAR_10 != 3)
  return -VAR_3;
 if (VAR_7 > VAR_0)
  return -VAR_2;
 if ((VAR_8 > 0xFFFF) || (VAR_9 > 0xFFFF))
  return -VAR_1;
 if ((VAR_7 % 2) != 0)
  return -VAR_3;

 if (VAR_8 == 0)
  VAR_11 = 0;
 else
  VAR_11 = FUNC_0(VAR_4, VAR_7);
 VAR_11 &= VAR_8;
 VAR_11 |= VAR_9;
 FUNC_1(VAR_4, VAR_7, VAR_11);

 return 0;
}
