
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slave {int link_failure_count; int link; TYPE_1__* dev; } ;
struct ifslave {int link_failure_count; int state; int link; int slave_name; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (struct slave*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct slave *VAR_0, struct ifslave *VAR_1)
{
 FUNC_1(VAR_1->slave_name, VAR_0->dev->name);
 VAR_1->link = VAR_0->link;
 VAR_1->state = FUNC_0(VAR_0);
 VAR_1->link_failure_count = VAR_0->link_failure_count;
}
