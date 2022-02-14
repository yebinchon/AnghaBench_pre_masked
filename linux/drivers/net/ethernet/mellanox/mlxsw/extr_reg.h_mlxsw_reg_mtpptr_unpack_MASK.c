
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (char const*,unsigned int) ;
 int FUNC_1 (char const*,unsigned int) ;
 int FUNC_2 (char const*,unsigned int) ;
 int FUNC_3 (char const*,unsigned int) ;
 int FUNC_4 (char const*,unsigned int) ;

__attribute__((used)) static inline void FUNC_5(const char *VAR_0,
        unsigned int VAR_1,
        u8 *VAR_2,
        u8 *VAR_3,
        u16 *VAR_4,
        u64 *VAR_5)
{
 u32 VAR_6, VAR_7;

 *VAR_2 = FUNC_1(VAR_0, VAR_1);
 *VAR_3 = FUNC_0(VAR_0, VAR_1);
 *VAR_4 = FUNC_2(VAR_0, VAR_1);
 VAR_6 = FUNC_3(VAR_0, VAR_1);
 VAR_7 = FUNC_4(VAR_0, VAR_1);
 *VAR_5 = (u64)VAR_6 << 32 | VAR_7;
}
