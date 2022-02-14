
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_core {TYPE_1__* bus_info; } ;
typedef scalar_t__ __be32 ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,int,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mlxsw_core *VAR_0,
        const char *VAR_1, size_t VAR_2)
{
 __be32 *VAR_3 = (__be32 *) VAR_1;
 int VAR_4;
 int VAR_5 = VAR_2 / sizeof(__be32);

 for (VAR_4 = VAR_5 - 1; VAR_4 >= 0; VAR_4--)
  if (VAR_3[VAR_4])
   break;
 VAR_4++;
 VAR_5 = VAR_4 ? VAR_4 : 1;
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4 += 4)
  FUNC_1(VAR_0->bus_info->dev, "%04x - %08x %08x %08x %08x\n",
   VAR_4 * 4, FUNC_0(VAR_3[VAR_4]), FUNC_0(VAR_3[VAR_4 + 1]),
   FUNC_0(VAR_3[VAR_4 + 2]), FUNC_0(VAR_3[VAR_4 + 3]));
}
