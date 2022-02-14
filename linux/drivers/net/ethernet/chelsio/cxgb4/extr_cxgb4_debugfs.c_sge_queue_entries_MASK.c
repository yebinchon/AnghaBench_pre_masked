
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ethqsets; } ;
struct adapter {TYPE_1__ sge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct adapter const*,int) ;
 scalar_t__ FUNC_4 (struct adapter const*,int) ;
 scalar_t__ FUNC_5 (struct adapter const*,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(const struct adapter *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;

 FUNC_1(&VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_5 += FUNC_5(VAR_4, VAR_6);

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_5 += FUNC_4(VAR_4, VAR_6);
  VAR_5 += FUNC_3(VAR_4, VAR_6);
 }
 FUNC_2(&VAR_3);

 return FUNC_0(VAR_4->sge.ethqsets, 4) +
        VAR_5 +
        FUNC_0(VAR_2, 4) + 1;
}
