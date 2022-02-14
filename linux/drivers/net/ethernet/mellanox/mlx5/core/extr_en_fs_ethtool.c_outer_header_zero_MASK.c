
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 char* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_3(u32 *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0, VAR_1);
 char *VAR_4 = FUNC_0(VAR_0, VAR_2,
          VAR_1);

 return VAR_4[0] == 0 && !FUNC_2(VAR_4,
        VAR_4 + 1,
        VAR_3 - 1);
}
