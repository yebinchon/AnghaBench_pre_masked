
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(void)
{
 u8 VAR_4;

 if (VAR_3 == ((void*)0))
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_2);
 VAR_4 = VAR_4 & ~VAR_1;
 FUNC_1(VAR_4, VAR_2);
 return 0;
}
