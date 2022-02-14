
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slave {int bond; } ;
struct aggregator {int aggregator_identifier; } ;
typedef int ssize_t ;
struct TYPE_3__ {struct aggregator* aggregator; } ;
struct TYPE_4__ {TYPE_1__ port; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_1 (struct slave*) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct slave *VAR_1, char *VAR_2)
{
 const struct aggregator *VAR_3;

 if (FUNC_0(VAR_1->bond) == VAR_0) {
  VAR_3 = FUNC_1(VAR_1)->port.aggregator;
  if (VAR_3)
   return FUNC_2(VAR_2, "%d\n",
           VAR_3->aggregator_identifier);
 }

 return FUNC_2(VAR_2, "N/A\n");
}
