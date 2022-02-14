
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bytes; } ;
struct mlxsw_item {TYPE_1__ size; } ;


 unsigned int FUNC_0 (struct mlxsw_item const*,unsigned short,int) ;
 int FUNC_1 (char*,char const*,int ) ;

__attribute__((used)) static inline void FUNC_2(const char *VAR_0, char *VAR_1,
         const struct mlxsw_item *VAR_2,
         unsigned short VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_2, VAR_3, sizeof(char));

 FUNC_1(VAR_1, &VAR_0[VAR_4], VAR_2->size.bytes);
}
