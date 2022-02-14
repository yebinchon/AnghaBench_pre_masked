
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef size_t u16 ;
struct mlxsw_item {scalar_t__ element_size; } ;


 char FUNC_0 (scalar_t__,int ) ;
 size_t FUNC_1 (struct mlxsw_item const*,size_t,char*) ;

__attribute__((used)) static inline u8 FUNC_2(const char *VAR_0,
         const struct mlxsw_item *VAR_1,
         u16 VAR_2)
{
 u8 VAR_3, VAR_4;
 u16 VAR_5 = FUNC_1(VAR_1, VAR_2, &VAR_3);

 VAR_4 = VAR_0[VAR_5];
 VAR_4 >>= VAR_3;
 VAR_4 &= FUNC_0(VAR_1->element_size - 1, 0);
 return VAR_4;
}
