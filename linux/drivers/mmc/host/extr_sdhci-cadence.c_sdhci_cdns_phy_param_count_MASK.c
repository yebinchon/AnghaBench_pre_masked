
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct TYPE_3__ {int property; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct device_node*,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_2(struct device_node *VAR_1)
{
 unsigned int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  if (FUNC_1(VAR_1, VAR_0[VAR_3].property))
   VAR_2++;

 return VAR_2;
}
