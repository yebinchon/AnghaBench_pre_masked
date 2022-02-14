
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cht_int33fe_data {TYPE_1__* dp; } ;
struct TYPE_5__ {int * node; } ;
struct TYPE_4__ {int * secondary; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct cht_int33fe_data *VAR_2)
{
 FUNC_2(VAR_1);

 if (VAR_0.node) {
  FUNC_0(FUNC_1(VAR_0.node));
  VAR_0.node = ((void*)0);
 }

 if (VAR_2->dp) {
  VAR_2->dp->secondary = ((void*)0);
  FUNC_0(VAR_2->dp);
  VAR_2->dp = ((void*)0);
 }
}
