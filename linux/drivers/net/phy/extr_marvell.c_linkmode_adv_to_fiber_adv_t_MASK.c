
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,unsigned long*) ;

__attribute__((used)) static inline u32 FUNC_1(unsigned long *VAR_9)
{
 u32 VAR_10 = 0;

 if (FUNC_0(VAR_5, VAR_9))
  VAR_10 |= VAR_1;
 if (FUNC_0(VAR_4, VAR_9))
  VAR_10 |= VAR_0;

 if (FUNC_0(VAR_6, VAR_9) &&
     FUNC_0(VAR_7, VAR_9))
  VAR_10 |= VAR_8;
 else if (FUNC_0(VAR_7, VAR_9))
  VAR_10 |= (VAR_3
      & (~VAR_2));

 return VAR_10;
}
