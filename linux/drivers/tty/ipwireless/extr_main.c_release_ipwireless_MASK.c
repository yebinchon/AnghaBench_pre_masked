
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipw_dev {TYPE_2__* link; scalar_t__ attr_memory; scalar_t__ common_memory; } ;
struct TYPE_4__ {TYPE_1__** resource; } ;
struct TYPE_3__ {int start; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct ipw_dev *VAR_0)
{
 FUNC_3(VAR_0->link->resource[0]->start,
         FUNC_4(VAR_0->link->resource[0]));
 if (VAR_0->common_memory) {
  FUNC_2(VAR_0->link->resource[2]->start,
    FUNC_4(VAR_0->link->resource[2]));
  FUNC_0(VAR_0->common_memory);
 }
 if (VAR_0->attr_memory) {
  FUNC_2(VAR_0->link->resource[3]->start,
    FUNC_4(VAR_0->link->resource[3]));
  FUNC_0(VAR_0->attr_memory);
 }
 FUNC_1(VAR_0->link);
}
