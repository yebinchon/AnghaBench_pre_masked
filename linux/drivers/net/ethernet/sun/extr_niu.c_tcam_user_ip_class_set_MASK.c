
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct niu {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,int) ;

__attribute__((used)) static int FUNC_3(struct niu *VAR_10, unsigned long VAR_11,
      int VAR_12, u64 VAR_13,
      u64 VAR_14, u64 VAR_15)
{
 unsigned long VAR_16;
 u64 VAR_17;

 if (VAR_11 < VAR_0 ||
     VAR_11 > VAR_1 ||
     (VAR_13 & ~(u64)0xff) != 0 ||
     (VAR_14 & ~(u64)0xff) != 0 ||
     (VAR_15 & ~(u64)0xff) != 0)
  return -VAR_2;

 VAR_16 = FUNC_0(VAR_11 - VAR_0);
 VAR_17 = FUNC_1(VAR_16);
 VAR_17 &= ~(VAR_3 | VAR_4 |
   VAR_7 | VAR_6);
 if (VAR_12)
  VAR_17 |= VAR_3;
 VAR_17 |= (VAR_13 << VAR_5);
 VAR_17 |= (VAR_14 << VAR_8);
 VAR_17 |= (VAR_15 << VAR_9);
 FUNC_2(VAR_16, VAR_17);

 return 0;
}
