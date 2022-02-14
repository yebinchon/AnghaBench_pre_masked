
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_km_flags_t ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static inline gfp_t
FUNC_1(xfs_km_flags_t VAR_8)
{
 gfp_t VAR_9;

 FUNC_0(VAR_8 & ~(VAR_2|VAR_1|VAR_3));

 VAR_9 = VAR_0 | VAR_5;
 if (VAR_8 & VAR_2)
  VAR_9 &= ~VAR_4;
 if (VAR_8 & VAR_1)
  VAR_9 |= VAR_6;

 if (VAR_8 & VAR_3)
  VAR_9 |= VAR_7;

 return VAR_9;
}
