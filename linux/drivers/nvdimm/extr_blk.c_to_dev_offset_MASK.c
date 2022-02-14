
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct nd_namespace_blk {int num_resources; TYPE_1__ common; TYPE_2__** res; } ;
typedef scalar_t__ resource_size_t ;
struct TYPE_4__ {scalar_t__ start; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int,char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static resource_size_t FUNC_2(struct nd_namespace_blk *VAR_1,
    resource_size_t VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_resources; VAR_4++) {
  if (VAR_2 < FUNC_1(VAR_1->res[VAR_4])) {
   if (VAR_2 + VAR_3 > FUNC_1(VAR_1->res[VAR_4])) {
    FUNC_0(&VAR_1->common.dev, 1,
     "illegal request\n");
    return VAR_0;
   }
   return VAR_1->res[VAR_4]->start + VAR_2;
  }
  VAR_2 -= FUNC_1(VAR_1->res[VAR_4]);
 }

 FUNC_0(&VAR_1->common.dev, 1, "request out of range\n");
 return VAR_0;
}
