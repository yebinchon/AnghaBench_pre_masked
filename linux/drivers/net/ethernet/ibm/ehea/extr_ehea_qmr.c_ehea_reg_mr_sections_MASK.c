
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ehea_mr {int dummy; } ;
struct ehea_adapter {int dummy; } ;
struct TYPE_6__ {TYPE_2__** top; } ;
struct TYPE_5__ {TYPE_1__** dir; } ;
struct TYPE_4__ {int * ent; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 scalar_t__ FUNC_0 (int,int,int,scalar_t__*,struct ehea_adapter*,struct ehea_mr*) ;

__attribute__((used)) static u64 FUNC_1(int VAR_4, int VAR_5, u64 *VAR_6,
    struct ehea_adapter *VAR_7,
    struct ehea_mr *VAR_8)
{
 u64 VAR_9 = VAR_2;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  if (!VAR_3->top[VAR_4]->dir[VAR_5]->ent[VAR_10])
   continue;

  VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_10, VAR_6, VAR_7, VAR_8);
  if ((VAR_9 != VAR_2) && (VAR_9 != VAR_1))
   return VAR_9;
 }
 return VAR_9;
}
