
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct rapl_package {int nr_domains; TYPE_3__* domains; int name; } ;
struct TYPE_4__ {int * primitives; } ;
struct TYPE_6__ {TYPE_1__ rdd; int name; } ;
struct TYPE_5__ {int unit; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int,int ,int *) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct rapl_package *VAR_2)
{
 int VAR_3, VAR_4;
 u64 VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_2->nr_domains; VAR_3++) {
  FUNC_0("update %s domain %s data\n", VAR_2->name,
    VAR_2->domains[VAR_3].name);

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   if (!FUNC_1(&VAR_2->domains[VAR_3], VAR_4,
      VAR_1[VAR_4].unit, &VAR_5))
    VAR_2->domains[VAR_3].rdd.primitives[VAR_4] = VAR_5;
  }
 }

}
