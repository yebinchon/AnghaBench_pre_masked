
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kdb_cmdflags_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline bool FUNC_0(kdb_cmdflags_t VAR_4, int VAR_5,
       bool VAR_6)
{

 VAR_5 &= VAR_2;
 VAR_5 |= VAR_1;


 if (VAR_6)
  VAR_5 |= VAR_5 << VAR_3;

 VAR_4 |= VAR_0;

 return VAR_5 & VAR_4;
}
