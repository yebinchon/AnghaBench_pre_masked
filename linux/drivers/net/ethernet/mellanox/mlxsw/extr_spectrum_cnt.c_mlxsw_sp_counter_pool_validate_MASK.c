
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_sp {int core; } ;
struct TYPE_3__ {scalar_t__ bank_count; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ,int ) ;
 unsigned int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp *VAR_4)
{
 unsigned int VAR_5 = 0;
 unsigned int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_4->core, VAR_0);

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++)
  VAR_5 += VAR_3[VAR_7].bank_count;
 if (VAR_5 > VAR_6 / VAR_2 + 1)
  return -VAR_1;
 return 0;
}
