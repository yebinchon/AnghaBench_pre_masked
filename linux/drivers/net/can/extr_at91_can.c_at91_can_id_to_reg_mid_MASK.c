
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int canid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline u32 FUNC_0(canid_t VAR_4)
{
 u32 VAR_5;

 if (VAR_4 & VAR_1)
  VAR_5 = (VAR_4 & VAR_2) | VAR_0;
 else
  VAR_5 = (VAR_4 & VAR_3) << 18;

 return VAR_5;
}
