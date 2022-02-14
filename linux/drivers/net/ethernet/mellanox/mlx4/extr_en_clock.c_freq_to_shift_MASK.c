
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;
 unsigned long long FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static u32 FUNC_4(u16 VAR_2)
{
 u32 VAR_3 = VAR_2 * 1000;
 u64 VAR_4 = VAR_3 * 1000 * VAR_0;
 u64 VAR_5 = 1ULL << FUNC_2(VAR_4 - 1);

 u64 VAR_6 = FUNC_0(VAR_1, VAR_5);


 return FUNC_3(FUNC_1(VAR_6 * VAR_3, 1000000));
}
