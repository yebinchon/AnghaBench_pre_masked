
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static inline void FUNC_5(char *VAR_1, u32 VAR_2,
           u32 VAR_3, u16 VAR_4, u8 *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_0, VAR_1);
 FUNC_4(VAR_1, VAR_2);
 FUNC_2(VAR_1, VAR_3);
 FUNC_3(VAR_1, VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_4 / 4; VAR_6++)
  FUNC_1(VAR_1, VAR_6, *(u32 *) &VAR_5[VAR_6 * 4]);
}
