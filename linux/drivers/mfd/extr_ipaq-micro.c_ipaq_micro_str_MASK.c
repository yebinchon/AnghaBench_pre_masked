
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 char* FUNC_0 (char*,int ) ;

__attribute__((used)) static char *FUNC_1(u8 *VAR_1, u8 VAR_2)
{
 char VAR_3[256];
 u8 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2 / 2; VAR_4++)
  VAR_3[VAR_4] = VAR_1[VAR_4 * 2];
 return FUNC_0(VAR_3, VAR_0);
}
