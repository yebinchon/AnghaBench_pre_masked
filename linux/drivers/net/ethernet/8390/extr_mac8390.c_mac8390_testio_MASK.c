
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum mac8390_access { ____Placeholder_mac8390_access } mac8390_access ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;
 int FUNC_2 (int*,unsigned long,int) ;
 int FUNC_3 (unsigned long,int*,int) ;

__attribute__((used)) static enum mac8390_access FUNC_4(unsigned long VAR_3)
{
 u32 VAR_4 = 0xA5A0B5B0;
 u32 VAR_5 = 0;


 FUNC_1(VAR_4, VAR_3);

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_4 == VAR_5)
  return VAR_1;

 VAR_4 = 0xC5C0D5D0;
 VAR_5 = 0;


 FUNC_3(VAR_3, &VAR_4, 4);

 FUNC_2(&VAR_5, VAR_3, 4);
 if (VAR_4 == VAR_5)
  return VAR_0;

 return VAR_2;
}
