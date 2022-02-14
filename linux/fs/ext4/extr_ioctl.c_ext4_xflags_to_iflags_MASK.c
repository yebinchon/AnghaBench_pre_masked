
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static inline unsigned long FUNC_0(__u32 VAR_12)
{
 unsigned long VAR_13 = 0;

 if (VAR_12 & VAR_11)
  VAR_13 |= VAR_5;
 if (VAR_12 & VAR_7)
  VAR_13 |= VAR_1;
 if (VAR_12 & VAR_6)
  VAR_13 |= VAR_0;
 if (VAR_12 & VAR_9)
  VAR_13 |= VAR_3;
 if (VAR_12 & VAR_8)
  VAR_13 |= VAR_2;
 if (VAR_12 & VAR_10)
  VAR_13 |= VAR_4;

 return VAR_13;
}
