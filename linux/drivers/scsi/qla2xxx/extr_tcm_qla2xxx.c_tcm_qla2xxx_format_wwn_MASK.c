
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int ssize_t ;


 int FUNC_0 (int ,int*) ;
 int FUNC_1 (char*,size_t,char*,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_2(char *VAR_0, size_t VAR_1, u64 VAR_2)
{
 u8 VAR_3[8];

 FUNC_0(VAR_2, VAR_3);
 return FUNC_1(VAR_0, VAR_1,
  "%2.2x:%2.2x:%2.2x:%2.2x:%2.2x:%2.2x:%2.2x:%2.2x",
  VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3], VAR_3[4], VAR_3[5], VAR_3[6], VAR_3[7]);
}
