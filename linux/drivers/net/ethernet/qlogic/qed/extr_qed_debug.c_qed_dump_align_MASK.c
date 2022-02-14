
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;

__attribute__((used)) static u32 FUNC_1(char *VAR_1, bool VAR_2, u32 VAR_3)
{
 u8 VAR_4, VAR_5;

 VAR_4 = (u8)(VAR_3 & 0x3);
 VAR_5 = VAR_4 ? VAR_0 - VAR_4 : 0;

 if (VAR_2 && VAR_5)
  FUNC_0(VAR_1, 0, VAR_5);

 return VAR_5;
}
