
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
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_3(struct niu *VAR_4, unsigned long VAR_5,
          int VAR_6)
{
 unsigned long VAR_7;
 u64 VAR_8;

 if (VAR_5 < VAR_0 ||
     VAR_5 > VAR_1)
  return -VAR_2;

 VAR_7 = FUNC_0(VAR_5 - VAR_0);
 VAR_8 = FUNC_1(VAR_7);
 if (VAR_6)
  VAR_8 |= VAR_3;
 else
  VAR_8 &= ~VAR_3;
 FUNC_2(VAR_7, VAR_8);

 return 0;
}
